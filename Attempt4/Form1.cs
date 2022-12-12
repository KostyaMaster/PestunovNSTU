using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Attempt4
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void label3_Click(object sender, EventArgs e)
        {

        }

        private void button1_Click(object sender, EventArgs e)
        {
            string X = textBox1.Text;
            string Y = textBox2.Text;
            int a = Convert.ToInt32(X);
            int b = Convert.ToInt32(Y);
            double d= 0.06 * Math.Abs(b);
            double c = a/(1-0.06*b/(1+d));
            textBox3.Text = c.ToString();
        }
    }
}
