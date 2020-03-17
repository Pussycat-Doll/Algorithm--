/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};

class Solution {
public:
    int getImportance(vector<Employee*> employees, int id)
    {
        if (employees.empty())
            return 0;
        int sum = 0;
        int sub = 0;
        for (int i = 0; i < employees.size(); ++i)
        {
            if (employees[i]->id == id)
            {
                sub = i;
                break;
            }
        }
        sum += employees[sub]->importance;
        if (employees[sub]->subordinates.empty())
            return sum;
        for (int i = 0; i < employees[sub]->subordinates.size(); ++i)
        {
            sum += getImportance(employees, employees[sub]->subordinates[i]);
        }
        return sum;

    }
};*/