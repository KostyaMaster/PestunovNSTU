using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Pestunov4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void textBox1_TextChanged(object sender, EventArgs e)
        {

        }

        private void comboBox1_TextUpdate(object sender, EventArgs e)
        {

        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            switch(comboBox1.SelectedItem.ToString())
            {
                case "Nullifier":
                    textBox1.Text = "Nullification";
                    break;
                case "Scythe of Vyse":
                    textBox1.Text = "Hex";
                    break;
                case "Orchid Malevolence":
                    textBox1.Text = "Silence";
                    break;
                case "Abyssal Blade":
                    textBox1.Text = "Bash";
                    break;
                case "Heaven's Halberd":
                    textBox1.Text = "Disarm";
                    break;
                default:
                    textBox1.Text = "None";
                    break;
            }
        }

        private void Open_CheckedChanged(object sender, EventArgs e)
        {
            if (Open.Checked == true)
            {
                textBox1.Enabled = true;
                comboBox1.Enabled = true;
                button1.Enabled = true;
            }
            else
            {
                button1.Enabled = false;
                textBox1.Enabled = false;
                comboBox1.Enabled = false ;
            }
        }

        private void textBox2_TextChanged(object sender, EventArgs e)
        {
            textBox3.Text = "Привет  " + textBox2.Text;
        }
    }
}
