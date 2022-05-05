#include "Experiment2.h"

Experiment2::Experiment2(QWidget *parent)
	: ExperimentBase(parent)
{
	updateUI();

}

Experiment2::~Experiment2()
{

}

void Experiment2::updateUI()
{
	ui.label->setText("Experiment 2: Verfying Simple 2D-Ghost-Free Stereo");
	ui.Introduction->setHtml(QApplication::translate("Experiment2Form", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
		"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
		"p, li { white-space: pre-wrap; }\n"
		"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:12pt; font-weight:400; font-style:normal;\">\n"
		"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">1. Before the experiment, please make sure you have passed &quot;Color Blind Test&quot;, &quot;3D Device Test&quot;, and &quot;Stereo Blind Test&quot;.</p>\n"
		"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
		"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">2. There are three sessions: <span style=\" font-style:italic;\">3D session</span>, <span style=\" font-style:italic"
		";\">2D session</span>, <span style=\" font-style:italic;\">comparison session</span>. Each session contains 15 trials. </p>\n"
		"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
		"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">* <span style=\" font-style:italic;\">3D session.</span> In each trial, the reference and test stimuli are arranged horizontally, where the reference is on the left and the test is on the right. Every subject with stereo glasses was asked to evaluate the impairments of the test stimulus relative to its reference from two perspectives: perceived 3D image quality and  depth quality. Five scales were used to describe the degree of impairments: 1 (very annoying), 2 (annoying), 3 (slightly annoying), 4 (perceptible, but not annoying), 5 (imperceptible). The subjects used the mouse to complete the questionnaire ab"
		"out perceived 3D image  and depth qualities below the test and reference stimuli.</p>\n"
		"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
		"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">* <span style=\" font-style:italic;\">2D session</span>. The arrangement of stimuli was the same as <span style=\" font-style:italic;\">3D session</span>. Every subject without stereo glasses was asked to evaluate the impairment of the test stimuli relative to the reference. Five similar scores were also used. </p>\n"
		"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
		"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">* <span style=\" font-style:italic;\">comparison s"
		"ession</span>. The subjects wearing stereo glasses were asked to compare the two stimuli according to their first impression. Three scores were used: -1 (preference for the left), 0 (same) and 1 (preference for the right). </p></body></html>", nullptr));
	ui.pbtn1->setText("3D");
	ui.pbtn2->setText("2D");
	ui.pbtn3->setText("comparison");

	
}


void Experiment2::on_session1()
{
}

void Experiment2::on_session2()
{
}

void Experiment2::on_session3()
{

}


