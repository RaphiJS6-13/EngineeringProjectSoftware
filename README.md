# EngineeringProjectSoftware
<h3>Disclaimer:</h3>
This code is written for academic purposes, it is not a developer's project.  
<br/>

```C++
namespace core {
	namespace button {
	  	const int BUTTON_PIN;
	  	void init();
	  	inline bool isPressed();
	  	void waitForPress(void (* callback)());
	}
	const int FIRST_PIN;
	void init(void);
	void run(void);
	void deinit(void);
}
```
