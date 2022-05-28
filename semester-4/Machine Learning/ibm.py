import nltk
from nltk.corpus import stopwords
sentence="""I am a student. I am studying in the university. I am a good student. I am a good student."""
words=nltk.word_tokenize(sentence)
pos=nltk.pos_tag(words)
nltk.download('stopwords')
stop_words=stopwords.words('english')
