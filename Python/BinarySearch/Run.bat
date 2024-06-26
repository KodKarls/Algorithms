@echo off
setlocal

:: Check if Python virtual environment exist
IF NOT EXIST venv\Scripts\activate (
    echo Creating virtual environment...
    python -m venv venv
)

:: Activate virtual environment
call venv\Scripts\activate

:: Define the root path to be added to sys.path
set "root_path=%cd%"

:: Create binary_search_project.pth file with the root path
echo %root_path% > venv\Lib\site-packages\binary_search_project.pth

:: Determine which script to run based on parameter
if "%1" == "test" (
    :: Run run_tests.py
    set "script_to_run=run_tests.py"
) else (
    :: Default: Run main.py
    set "script_to_run=main.py"
)

:: Run main.py
python %script_to_run%

:: Deactivate virtual environment
deactivate

endlocal
