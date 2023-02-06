QString get_cpu_model() 
{
    std::ifstream stream("/proc/cpuinfo");
    std::string str;

    for(int i = 0; i < 16; i++)
        stream >> str;

    getline(stream, str);

    stream.close();
    return QString::fromStdString(str);
}
