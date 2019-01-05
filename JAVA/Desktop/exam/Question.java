package org.iit.exam;

public class Question {

	public String value;
	public String correctAnswer;

	public String[] options;

	public Question(String value, String correctAnswer, String option1,
			String option2, String option3, String option4) {
		// TODO Auto-generated constructor stub

		options = new String[4];

		this.value = value;
		this.correctAnswer = correctAnswer;
		options[0] = option1;
		options[1] = option2;
		options[2] = option3;
		options[3] = option4;

	}

}
