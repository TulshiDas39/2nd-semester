package org.iit.users;

import org.iit.exam.Question;

public class ExamController {

	Examinee examinee;
	boolean isMCQExam;
	public Question[] questions;

	public ExamController(Examinee examinee, boolean isMCQExam) {
		// TODO Auto-generated constructor stub

		questions = new Question[5];

		questions[0] = new Question("Capital?", "Dhaka", "Tokyo", "Delhi",
				"Dhaka", "Beijing");
		questions[1] = new Question("Currency?", "BDT", "GBP", "USD", "INR",
				"BDT");
		questions[2] = new Question("Fruit?", "Jack Fruit", "Jack Fruit",
				"mango", "Apple", "Orange");
		questions[3] = new Question("Fish?", "Hilsha", "Carp", "Samon",
				"Hilsha", "Prawn");
		questions[4] = new Question("Animal?", "Tiger", "Lion", "Kangaroo",
				"Tiger", "Kiwi");
		
		this.examinee = examinee;
		this.isMCQExam=isMCQExam;

	}

	public void askMCQQuestions() {

	}

	public void askShortAnswerQuestions() {

	}

	public boolean isAnswerCorrect(Question q, String userGivenAnswer) {

		if (userGivenAnswer.equals(q.correctAnswer))
			return true;
		return false;
	}

}
