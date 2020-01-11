Feature: Basic appearance and visible features
	As a TDriver script developer,
	I want to launch Visualizer
	and check what Visualizer GUI componentes I can access.

@pass
	Scenario: Start and close tdriver_visualizer
 		Given the sut "sut_qt" exists in tdriver parameters
		When I run visualizer binary
		Then "tdriver_visualizer" is running
		#And application has custom fixture
		When I close the application
		Then "tdriver_visualizer" is not running
