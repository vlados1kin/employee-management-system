using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace ManagementSystem.API.Domain;

public class Employee
{
    [Column("EmployeeId")]
    public Guid Id { get; set; }

    [Required(ErrorMessage = "First name is obligatory")]
    [MaxLength(50, ErrorMessage = "{0} can have max of {1} characters")]
    public string FirstName { get; set; }
    
    [Required(ErrorMessage = "Last name is obligatory")]
    [MaxLength(50, ErrorMessage = "{0} can have max of {1} characters")]
    public string LastName { get; set; }
    public int Age { get; set; }
    public string Position { get; set; }
    public double AnnualSalary { get; set; }
}