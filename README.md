<p align="center">
	<h1 align="center">Prediction of Agent availability</h1>
	<h2 align="center">Author: Avinash Prasad</h2>
	<p>Issue</p>
	<ul>
		<li>Start time for any issue</li>
		<li>abandoned/resolve/waiting (current status of any issue)</li>
		<li>answer time (when an agent pick up any issue)</li>
		<li>resolve time (time an issue was resolved)</li>
		<li>abandoned time (If a customer left before the issue was assigned to an agent)</li>
	</ul>
	<p>Procedure</p><br>
	<p>
		Now there are certain no of agents. Whenever any new comes, if there is atleast one who is free then the new issue will be dirrectly picked up by the agent. If not, then the new issue must have to wait till any one of the previous ongoing issue is completed. At any point of time if is found that customer left then the issue the will be termed as abandoned issue.
	</p><br>
	<p>
		On the basis of that, we can classify the issues in mainly `three` catagories. `a. Ongoing queue (all the issues that are currently executing will be places here ), b. waiting queue ( all the issues that are waiting to be executed have been places here), c. abandoned queue (all the abandoned issues will be places here)`. Finally we can shift the resolves issues in another queue (completed queue).
	</p><br>
	<p>
		Now our algorithm always check it, is there any issue belong to ongoing queue is completed, If it's true then our algorithm will shift that issue to the completed queue and it will update corresponding details of the issue. After that if it's found that there are some issues which are waiting to be executed and some of the agents are free to pick up new issue then it will shift an issue from waiting queue to onging queue and update the corresponding details for that issue.
	</p><br>
	<p>
		Now whenever any new issue come, our algorithm will check compatibility for that issue. If is found there is no way to placed the new issue into the onging queue the our algorithm will return minimum time it has to wait till any one of the agent pick up that issue.
	</p>
	<p>How to check the algorithm (Test Cases)</p>
	<img src="https://drive.google.com/file/d/1VqQMYiIDdn1nlG-n-35lhjPBaD83nmTL/view?usp=sharing">
	<img src="https://drive.google.com/file/d/1uKudxeLjCwPQ7X0wPB1xIRXkGhNJ9NTj/view?usp=sharing">
</p>
