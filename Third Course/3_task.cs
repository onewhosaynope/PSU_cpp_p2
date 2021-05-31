using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

public partial class FormComponent : Form
{
    public FormComponent()
    {
        InitializeComponent();
    }

    private void button1_Click(object sender, EventArgs e)
    {
        Sentence go = new Sentence();
        go.countLetters();
        textBox1.Text = go.countLetters().ToString();
        go.countWords();
        textBox2.Text += go.countWords().ToString();
        go.sentenceEquality();
        textBox3.Text += go.sentenceEquality();
    }

    private void textBox1_TextChanged(object sender, EventArgs e)
    {

    }

    private void textBox2_TextChanged(object sender, EventArgs e)
    {
    }

    private void textBox1_TextChanged_1(object sender, EventArgs e)
    {

    }

    private void label1_Click(object sender, EventArgs e)
    {

    }
}


public class Sentence : FormComponent
{
    public string sentence;
    public string sentence_2;
    public Sentence() { sentence = "Hello World"; sentence_2 = "No Hello"; }
    public Sentence(string STR) { sentence = STR; sentence_2 = STR; }
    public int countLetters()
    {
        int count_letters = 0;
        for (int i = 0; i < sentence.Length; i++)
        {
            if (sentence[i] != ' ')
                count_letters++;
        }
        return count_letters;
    }


    public int countWords()
    {
        int count_words = 1;
        for (int i = 0; i < sentence.Length; i++)
        {
            if (sentence[i] == ' ')
                count_words++;
        }
        return count_words;
    }


    public string sentenceEquality()
    {
        if (sentence.Length != sentence_2.Length)
        {
            return ("Предложения не равны!");
        }
        else
            for (int i = 0; i < sentence.Length; i++)
            {
                if (sentence[i] != sentence_2[i])
                {
                    return ("Предложения не равны!");
                }
                if (i + 1 == sentence.Length)
                {
                    return ("Предложения равны!");
                }
            }
        return sentence_2;
    }
}
