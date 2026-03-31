from setuptools import find_packages
from setuptools import setup

setup(
    name='project_one',
    version='0.0.0',
    packages=find_packages(
        include=('project_one', 'project_one.*')),
)
