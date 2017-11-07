
// 拉起一个进程示例代码
void MY_CreateProcess()
{
    STARTUPINFO si = {0};
    PROCESS_INFORMATION pi = {0};
    memset(&si,0,sizeof(STARTUPINFO));
    si.cb = sizeof(STARTUPINFO);
    si.dwFlags = STARTF_USESHOWWINDOW;
    si.wShowWindow = SW_HIDE;
    int bRet = CreateProcess("D:\\zzworksvn_20171018\\trunk3\\bin\\debug\\Module\\LocalImageView\\LocalImageView.exe", 
        NULL, NULL, NULL, FALSE, DETACHED_PROCESS, NULL, "D:\\zzworksvn_20171018\\trunk3\\bin\\debug\\Module\\LocalImageView", &si, &pi);
    if (!bRet)
    {
        int nError = GetLastError();
    }
}
