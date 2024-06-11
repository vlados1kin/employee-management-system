using ManagementSystem.API.Domain;
using ManagementSystem.API.Services;
using Microsoft.AspNetCore.Mvc;

namespace ManagementSystem.API.Controllers;

[ApiController]
[Route("[controller]")]
public class EmployeeController : ControllerBase
{
    private readonly EmployeeService _employeeService;
    
    public EmployeeController(EmployeeService employeeService)
    {
        _employeeService = employeeService;
    }
    
    [HttpGet]
    public IEnumerable<Employee> GetAll()
    {
        return _employeeService.GetEmployees();
    }

    [HttpGet]
    [Route("{id}")]
    public ActionResult<Employee> Get(Guid id)
    {
        Employee? employee = _employeeService.GetEmployee(id);
        if (employee != null)
        {
            return employee;
        }

        return NotFound();
    }

    [HttpPost]
    public IActionResult Post(Employee employee)
    {
        Guid? guid = _employeeService.PostEmployee(employee);
        if (guid != null)
        {
            return Created();
        }

        return Conflict();
    }

    [HttpPut]
    [Route("{id}")]
    public IActionResult Put(Guid id, Employee employee)
    {
        Guid? guid = _employeeService.PutEmployee(id, employee);
        if (guid != null)
        {
            return Ok();
        }

        return NotFound();
    }

    [HttpDelete]
    [Route("{id}")]
    public IActionResult Delete(Guid id)
    {
        Guid? guid = _employeeService.DeleteEmployee(id);
        if (guid != null)
        {
            return Ok();
        }

        return NotFound();
    }
}