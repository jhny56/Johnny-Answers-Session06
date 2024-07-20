from setuptools import find_packages, setup

package_name = 'warehouse_robot'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='robot',
    maintainer_email='johnny-hanna@outlook.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'delivery_action = warehouse_robot.Delivery_Action_Server:main',
            'stock_server = warehouse_robot.stock_checker:main',
            'delivery_client = warehouse_robot.delivery_client:main',
            'stock_client = warehouse_robot.stock_checker_client:main',
        ],
    },
)
