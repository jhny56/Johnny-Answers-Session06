import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/robot/Desktop/Session06/Johnny-Answers-Session06/install/warehouse_robot'
