using ManagementSystem.API.Domain;

namespace ManagementSystem.API.Services;

public class EmployeeService
{
    private List<Employee> _employees = new List<Employee>();

    public IEnumerable<Employee> GetEmployees()
    {
        return _employees;
    }

    public Employee GetEmployee(Guid id)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            throw new Exception($"Employee with {id} id was not found");
        }

        return _employees[index];
    }

    public void PostEmployee(Employee employee)
    {
        int index = _employees.FindIndex(e => e.Id == employee.Id);
        if (index >= 0)
        {
            throw new Exception($"Employee with {employee.Id} already exists");
        }
        
        _employees.Add(employee);
    }

    public void PutEmployee(Guid id, Employee employee)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            throw new Exception($"Employee with {id} id was not found");
        }

        _employees[index] = employee;
    }

    public void DeleteEmployee(Guid id)
    {
        int index = _employees.FindIndex(e => e.Id == id);
        if (index < 0)
        {
            throw new Exception($"Employee with {id} id was not found");
        }
        
        _employees.RemoveAt(index);
    }
}