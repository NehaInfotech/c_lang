#include <stdio.h>

void main() {
    int empNo;
    float basic, mob, da, hra, others, grossSalary, pf, insu, it, netSalary;

    // Input EMPNO and check the condition
    printf("-----------------------------------------------------------------\n");
    printf("EMPLOYEE SALARY DETAILS\n");
    printf("-----------------------------------------------------------------\n");
    printf("Enter EMPNO (between 100 and 200): ");
    scanf("%d", &empNo);

    if (empNo <= 100 || empNo >= 200) {
        printf("Invalid EMPNO! EMPNO should be between 100 and 200.\n");
        return;
    }

    // Input BASIC salary and check the condition
    printf("Enter BASIC salary (between 5000 and 30000): ");
    scanf("%f", &basic);

    if (basic < 5000 || basic > 30000) {
        printf("Invalid BASIC salary! BASIC should be between 5000 and 30000.\n");
        return;
    }

    // EARNINGS Calculation
    // MOB (Mobile Allowance)
    if (basic < 10000) {
        mob = basic * 0.05;
    } else if (basic >= 10000 && basic < 15000) {
        mob = basic * 0.10;
    } else {
        mob = basic * 0.12;
    }

    // DA (Dearness Allowance)
    if (basic < 10000) {
        da = basic * 0.08;
    } else if (basic >= 10000 && basic < 15000) {
        da = basic * 0.10;
    } else {
        da = basic * 0.15;
    }

    // HRA (House Rent Allowance)
    if (basic < 8000) {
        hra = basic * 0.05;
    } else if (basic >= 8000 && basic < 20000) {
        hra = basic * 0.10;
    } else {
        hra = basic * 0.12;
    }

    // Others (Other Allowances)
    if (basic < 15000) {
        others = basic * 0.02;
    } else if (basic >= 15000 && basic < 25000) {
        others = basic * 0.03;
    } else {
        others = basic * 0.05;
    }

    // Total Earnings
    grossSalary = basic + mob + da + hra + others;

    // DEDUCTIONS Calculation
    // PF (Provident Fund)
    if (grossSalary < 8000) {
        pf = grossSalary * 0.05;
    } else if (grossSalary >= 8000 && grossSalary < 15000) {
        pf = grossSalary * 0.07;
    } else {
        pf = grossSalary * 0.10;
    }

    // INSURANCE (INSU)
    if (grossSalary < 5000) {
        insu = grossSalary * 0.02;
    } else if (grossSalary >= 5000 && grossSalary < 15000) {
        insu = grossSalary * 0.04;
    } else {
        insu = grossSalary * 0.05;
    }

    // IT (Income Tax)
    if (grossSalary < 8000) {
        it = grossSalary * 0.01;
    } else if (grossSalary >= 8000 && grossSalary < 15000) {
        it = grossSalary * 0.02;
    } else {
        it = grossSalary * 0.03;
    }

    // Total Deductions
    netSalary = grossSalary - (pf + insu + it);

    // Display Salary Details
    printf("-----------------------------------------------------------------\n");
    printf("EARNINGS                 DEDUCTIONS\n");
    printf("-----------------------------------------------------------------\n");
    printf("MOB = %.2f              PF = %.2f\n", mob, pf);
    printf("DA = %.2f               INSU = %.2f\n", da, insu);
    printf("HRA = %.2f              IT = %.2f\n", hra, it);
    printf("OTHERS = %.2f\n", others);
    printf("-----------------------------------------------------------------\n");
    printf("TOTAL EARNINGS = %.2f    TOTAL DEDUCTIONS = %.2f\n", grossSalary, (pf + insu + it));
    printf("-----------------------------------------------------------------\n");
    printf("GROSS SALARY = %.2f      NET SALARY = %.2f\n", grossSalary, netSalary);
    printf("======================= END ====================================\n");
}
