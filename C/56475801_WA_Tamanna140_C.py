def calculate_gpa():
    import sys
    input = sys.stdin.read
    data = input().splitlines()
    
    T = int(data[0])  # Number of test cases
    result = []
    index = 1
    
    for t in range(1, T + 1):
        N = int(data[index])  # Number of subjects
        index += 1
        total_grade_points = 0
        
        for _ in range(N):
            grade_point = float(data[index])
            total_grade_points += grade_point
            index += 1
        
        # Calculate GPA
        gpa = total_grade_points / N
        # Format output to 3 decimal places
        result.append(f"Case {t}: {gpa:.3f}")
    
    # Print all results
    print("\n".join(result))

# Example usage:
# When providing input from a file or standard input, remove the comments below.
# Example to run in terminal:
# python script.py < input.txt