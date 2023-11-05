# Set the base image to use
FROM gcc:latest
# Copy the C program into the container
COPY is_even.c .
# Compile the C program
RUN gcc -o is_even is_even.c
# Set the command to run when the container starts
CMD ["./is_even"]
