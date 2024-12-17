from setuptools import find_packages, setup

package_name = 'camera_main_pkg'

setup(
    name=package_name,
    version='0.1.0',  # Updated to a better starting version
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Achintya',  # Proper capitalization
    maintainer_email='achintyaharsha03@gmail.com',
    description='Package for handling camera-related functionality in ROS 2',
    license='Apache License 2.0',  # Better than leaving TODO in there, right?
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'camera_node = camera_main_pkg.camera_node:main',
            'video_processor = camera_main_pkg.video_processor:main',
            'point_processor = camera_main_pkg.point_processor:main',
        ],
    },
)
