from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    ld = LaunchDescription()

    ld.add_action(Node(
        package='camera_main_pkg',
        executable='video_processor',
        name='video_processor_node_left',
        output='screen',
        parameters=[
            {'camera_id': 0},
            {'camera_name': 'cam_left'},
            {'starting_mode': 3}
        ],
    ))

    # ld.add_action(Node(
    #     package='camera_main_pkg',
    #     executable='video_processor',
    #     name='video_processor_node_right',
    #     output='screen',
    #     parameters=[
    #         {'camera_id': 1},
    #         {'camera_name': 'cam_right'},
    #         {'starting_mode': 3}
    #     ],
    # ))

    ld.add_action(Node(
        package='camera_main_pkg',
        executable='controller',
        name='controller_node_1',
        output='screen',
        parameters=[],
    ))

    ld.add_action(Node(
        package='camera_main_pkg',
        executable='interpolator',
        name='interpolator_node_1',
        output='screen',
        parameters=[
            {'serial_port': '/dev/ttyUSB0'},
            {'baud_rate': 9600},
            {'send_interval': 0.05},
            {'rcv_interval': 0.05},
            {'starting_mode': 1}
        ],
    ))

    ld.add_action(Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[],
        arguments=['/home/achintya/Software/ROSPlayground/camera_ws_main/camera.urdf']
    ))

    ld.add_action(Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        parameters=[],
        arguments=['-d', '/home/achintya/Software/ROSPlayground/camera_ws_main/camera_config.rviz']
    ))

    return ld
