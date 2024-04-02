# TensorFlow-Developer-Certificate-in-2023-Zero-to-Mastery

%-------------------------
% Resume in Latex
% Author : Jake Gutierrez
% Based off of: https://github.com/sb2nov/resume
% License : MIT
%------------------------

\documentclass[letterpaper,11pt]{article}

\usepackage{latexsym}
\usepackage[empty]{fullpage}
\usepackage{titlesec}
\usepackage{marvosym}
\usepackage[usenames,dvipsnames]{color}
\usepackage{verbatim}
\usepackage{enumitem}
\usepackage[hidelinks]{hyperref}
\usepackage{fancyhdr}
\usepackage[english]{babel}
\usepackage{tabularx}
\input{glyphtounicode}


%----------FONT OPTIONS----------
% sans-serif
% \usepackage[sfdefault]{FiraSans}
% \usepackage[sfdefault]{roboto}
% \usepackage[sfdefault]{noto-sans}
% \usepackage[default]{sourcesanspro}

% serif
% \usepackage{CormorantGaramond}
% \usepackage{charter}


\pagestyle{fancy}
\fancyhf{} % clear all header and footer fields
\fancyfoot{}
\renewcommand{\headrulewidth}{0pt}
\renewcommand{\footrulewidth}{0pt}

% Adjust margins
\addtolength{\oddsidemargin}{-0.5in}
\addtolength{\evensidemargin}{-0.5in}
\addtolength{\textwidth}{1in}
\addtolength{\topmargin}{-.5in}
\addtolength{\textheight}{1.0in}

\urlstyle{same}

\raggedbottom
\raggedright
\setlength{\tabcolsep}{0in}

% Sections formatting
\titleformat{\section}{
  \vspace{-4pt}\scshape\raggedright\large
}{}{0em}{}[\color{black}\titlerule \vspace{-5pt}]

% Ensure that generate pdf is machine readable/ATS parsable
\pdfgentounicode=1

%-------------------------
% Custom commands
\newcommand{\resumeItem}[1]{
  \item\small{
    {#1 \vspace{-2pt}}
  }
}

\newcommand{\resumeSubheading}[4]{
  \vspace{-2pt}\item
    \begin{tabular*}{0.97\textwidth}[t]{l@{\extracolsep{\fill}}r}
      \textbf{#1} & #2 \\
      \textit{\small#3} & \textit{\small #4} \\
    \end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeSubSubheading}[2]{
    \item
    \begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
      \textit{\small#1} & \textit{\small #2} \\
    \end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeProjectHeading}[2]{
    \item
    \begin{tabular*}{0.97\textwidth}{l@{\extracolsep{\fill}}r}
      \small#1 & #2 \\
    \end{tabular*}\vspace{-7pt}
}

\newcommand{\resumeSubItem}[1]{\resumeItem{#1}\vspace{-4pt}}

\renewcommand\labelitemii{$\vcenter{\hbox{\tiny$\bullet$}}$}

\newcommand{\resumeSubHeadingListStart}{\begin{itemize}[leftmargin=0.15in, label={}]}
\newcommand{\resumeSubHeadingListEnd}{\end{itemize}}
\newcommand{\resumeItemListStart}{\begin{itemize}}
\newcommand{\resumeItemListEnd}{\end{itemize}\vspace{-5pt}}

%-------------------------------------------
%%%%%%  RESUME STARTS HERE  %%%%%%%%%%%%%%%%%%%%%%%%%%%%


\begin{document}

%----------HEADING----------
% \begin{tabular*}{\textwidth}{l@{\extracolsep{\fill}}r}
%   \textbf{\href{http://sourabhbajaj.com/}{\Large Sourabh Bajaj}} & Email : \href{mailto:sourabh@sourabhbajaj.com}{sourabh@sourabhbajaj.com}\\
%   \href{http://sourabhbajaj.com/}{http://www.sourabhbajaj.com} & Mobile : +1-123-456-7890 \\
% \end{tabular*}

\begin{center}
    \textbf{\Huge \scshape Oğuz Kağan Bilici} \\ \vspace{1pt}
    \small 541 864 83 89 $|$ \href{mailto:x@x.com}{\underline{oguzkaganbilici1@gmail.com}} $|$ 
    \href{https://linkedin.com/in/...}{\underline{linkedin.com/in/oğuz-kağan-bilici/ }} $|$
    \href{https://github.com/...}{\underline{github.com/oguzkaganbilici}}
\end{center}



%-----------EXPERIENCE-----------
\section{Experience}
  \resumeSubHeadingListStart

    \resumeSubheading
      {Field Operations Support Engineer}{Dec. 2021 -- Present}
      {Turk Telekom}{Ordu, TR}
      \resumeItemListStart
        \resumeItem{Conducting thorough analysis of customer data and diligently tracking Key Performance Indicator (KPI) reports.}
        \resumeItem{Strategizing and overseeing narrow and high-bandwidth data transmission projects.}
        \resumeItem{Collaborated with cross-functional teams to troubleshoot technical issues and provide timely resolution to minimize downtime.}
        \resumeItem{Managing and overseeing xDSL and FTTx projects}
      \resumeItemListEnd
      
% -----------Multiple Positions Heading-----------
%    \resumeSubSubheading
%     {Software Engineer I}{Oct 2014 - Sep 2016}
%     \resumeItemListStart
%        \resumeItem{Apache Beam}
%          {Apache Beam is a unified model for defining both batch and streaming data-parallel processing pipelines}
%     \resumeItemListEnd
%    \resumeSubHeadingListEnd
%-------------------------------------------

    \resumeSubheading
      {Mechatronic Engineer Intern}{Jun. 2018 -- Aug. 2018}
      {Nurol Machinery and industry co. inc}{Ankara, TR}
      \resumeItemListStart
        \resumeItem{Managed the assembly process of Ejder Yalçın wheeled armored vehicles destined for Qatar and Turkmenistan, overseeing critical components including power systems, gun turrets, hydraulics, and air conditioning systems for a period of 30 days.}
        \resumeItem{Participated in the research and development phases of vehicle projects.}
    \resumeItemListEnd

  \resumeSubHeadingListEnd

%-----------EDUCATION-----------
\section{Education}
  \resumeSubHeadingListStart
    \resumeSubheading
      {Necmettin Erbakan University}{Konya, Turkiye}
      {Master's Degree in Mechatronics Engineering }{Jan. 2022 -- dropout}
      \resumeItemListStart
        \resumeItem{Relevant Coursework: Advanced Image Processing, Evolutionary Optimization Methods, Artificial Intelligent Optimization Algorithms}
        \resumeItemListEnd
    \resumeSubheading
      {Necmettin Erbakan University}{Konya, Turkiye}
      {Bachelor's Degree in Mechatronics Engineering }{Sep. 2015 -- Aug. 2020}
        \resumeItemListStart
            \resumeItem{Relevant Coursework: C++, Python, Linear Algebra, Database Management Systems, Artificial Intelligent, Statistical Analysis, Image Processing Techniques, Robotic}
        \resumeItemListEnd
  \resumeSubHeadingListEnd



%-----------PROJECTS-----------
\section{Projects}
    \resumeSubHeadingListStart
      \resumeProjectHeading
          {\textbf{Segway} $|$ \emph{2 wheel self balancing robot}}{June 2016 -- Aug. 2020}
          \resumeItemListStart
            \resumeItem{As part of my graduation project, following the mechanical and electronic design of a two-wheeled personal transportation device known as a Segway, I developed a PID control algorithm using the Python programming language and Raspberry Pi development board}
            
          \resumeItemListEnd
    
    \resumeSubHeadingListEnd

%-----------PROGRAMMING SKILLS-----------
\section{Technical Skills}
 \begin{itemize}[leftmargin=0.15in, label={}]
    \small{\item{
     \textbf{Languages}{: Python, MATLAB, C++, SQL (MySQL)} \\
     \textbf{Programmes}{: Power BI, Microsoft Excel } \\
     \textbf{Libraries}{: pandas, NumPy, Matplotlib, TensorFlow}
    }}
 \end{itemize}

%----------CERTIFICATES ------------
\section{Certificates}
  \resumeSubHeadingListStart
    \resumeSubheading
      {IELTS: 6}{Ankara, Turkiye}
      {Reading:6.5 Listening:6 Writing:6 Speaking:6 }{Oct. 2023}
    \resumeSubheading
      {American Cultural Association Language School}{Konya, Turkiye}
      {Upper-Intermediate C1 }{Sep. 2017}
  \resumeSubHeadingListEnd

%-------------------------------------------
\end{document}
