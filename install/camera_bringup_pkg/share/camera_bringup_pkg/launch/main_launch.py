import launch
from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration  # Corrected import
from launch_ros.actions import Node  # Corrected import

def generate_launch_description():
    ld = LaunchDescription()

    # Declare parameters for the first camera node
    ld.add_action(DeclareLaunchArgument('camera_id_1', default_value='0', description='Camera ID for the first node'))
    ld.add_action(DeclareLaunchArgument('camera_name_1', default_value='cam_left', description='Camera name for the first node'))
    ld.add_action(DeclareLaunchArgument('starting_mode_1', default_value='3', description='Starting mode for the first node'))

    # Declare parameters for the second camera node
    # ld.add_action(DeclareLaunchArgument('camera_id_2', default_value='0', description='Camera ID for the second node'))
    # ld.add_action(DeclareLaunchArgument('camera_name_2', default_value='camera_2', description='Camera name for the second node'))
    # ld.add_action(DeclareLaunchArgument('starting_mode_2', default_value='2', description='Starting mode for the second node'))

    # Launch the first camera node (video_processor) with camera_id = 1, camera_name = 'camera_1'
    ld.add_action(Node(
        package='camera_py_pkg',
        executable='video_processor',
        name='video_processor_node_1',
        output='screen',
        parameters=[
            {'camera_id': LaunchConfiguration('camera_id_1')},
            {'camera_name': LaunchConfiguration('camera_name_1')},
            {'starting_mode': LaunchConfiguration('starting_mode_1')}
        ],
    ))

    # Launch the second camera node (video_processor) with camera_id = 0, camera_name = 'camera_2'
    # ld.add_action(Node(
    #     package='camera_py_pkg',
    #     executable='video_processor',
    #     name='video_processor_node_2',
    #     output='screen',
    #     parameters=[
    #         {'camera_id': LaunchConfiguration('camera_id_2')},
    #         {'camera_name': LaunchConfiguration('camera_name_2')},
    #         {'starting_mode': LaunchConfiguration('starting_mode_2')}
    #     ],
    # ))

    return ld
