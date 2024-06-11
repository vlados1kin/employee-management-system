using ManagementSystem.API.Domain;

namespace ManagementSystem.API.Services;

public class EmployeeService
{
    private readonly List<Employee> _employees = new List<Employee>();

    public IEnumerable<Employee> GetEmployees()
    {
        return _employees;
    }

    public Employee? GetEmployee(Guid id)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            return null;
        }

        return _employees[index];
    }

    public Guid? PostEmployee(Employee employee)
    {
        int index = _employees.FindIndex(e => e.Id == employee.Id);
        if (index >= 0)
        {
            return null;
        }
        
        _employees.Add(employee);
        return employee.Id;
    }

    public Guid? PutEmployee(Guid id, Employee employee)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            return null;
        }

        _employees[index] = employee;
        return id;
    }

    public Guid? DeleteEmployee(Guid id)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            return null;
        }
        
        _employees.RemoveAt(index);
        return id;
    }
}