using ManagementSystem.API.Domain;
using ManagementSystem.API.Exceptions;
using ManagementSystem.API.Services;
using Microsoft.AspNetCore.Mvc;

namespace ManagementSystem.API.Controllers;

[ApiController]
[Route("employee")]
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
        try
        {
            _employeeService.PostEmployee(employee);
            return Created();
        }
        catch (EmployeeException e)
        {
            return Conflict();
        }
    }

    [HttpPut]
    [Route("{id}")]
    public IActionResult Put(Guid id, Employee employee)
    {
        try
        {
            _employeeService.PutEmployee(id, employee);
            return Ok();
        }
        catch (Exception e)
        {
            return NotFound();
        }
    }

    [HttpDelete]
    [Route("{id}")]
    public IActionResult Delete(Guid id)
    {
        try
        {
            _employeeService.DeleteEmployee(id);
            return Ok();
        }
        catch (Exception e)
        {
            return NotFound();
        }
    }
}