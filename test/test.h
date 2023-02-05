#ifndef _TEST_H__
#define _TEST_H__

#include <vector>

class UtilsMap
{
public:
    static UtilsMap* GetInstance()
    {
        if (nullptr == m_instance)
        {
            m_instance = new UtilsMap();
        }
        return m_instance;
    }
    void AddItem(int a)
    {
        m_data.push_back(a);
    }
    std::vector<int>& GetItem()
    {
        return m_data;
    }
private:
    UtilsMap(){}
    static UtilsMap* m_instance;
    std::vector<int> m_data;
};

#endif