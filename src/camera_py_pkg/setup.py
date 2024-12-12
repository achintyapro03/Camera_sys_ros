from setuptools import find_packages, setup

package_name = 'camera_py_pkg'

setup(
    name=package_name,
    version='0.0.1',  # Update the version to reflect your package version
    packages=find_packages(exclude=['test']),  # Exclude the 'test' folder if it exists
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools', 'rclpy'],  # Add ROS 2 dependencies
    zip_safe=True,
    maintainer='achintya',
    maintainer_email='achintyaharsha03@gmail.com',
    description='A simple camera node in Python for ROS 2',
    license='TODO: License declaration',  # You can specify a license here if you want
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'video_processor = camera_py_pkg.video_processor:main',  # Point to the main function in the node
        ],
    },
)
