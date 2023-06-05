import nltk
import re
from nltk.corpus import stopwords
from nltk.stem.porter import PorterStemmer
from nltk.stem import WordNetLemmatizer



para="""

Virat Kohli (Hindi pronunciation: [ʋɪˈɾɑːʈ ˈkoːɦli] (listen); born 5 November 1988) is an Indian international cricketer and former captain of the Indian national team. Widely regarded as one of the greatest batsmen of all time,[3] Kohli plays as a right-handed batsman for Royal Challengers Bangalore in the IPL and for Delhi in Indian domestic cricket. He holds the record for scoring most runs in both T20 internationals and in IPL. In 2020, the International Cricket Council named him as player of decade. Kohli has won Man of the Tournament award twice at the ICC World Twenty20, in 2014 and 2016. Playing for his franchise in IPL, he won the Orange Cap and Most-valuable Player Award in 2016 season. Furthermore has won most player of the match and series awards in T20I. With 40 wins in 68 Test matches, he is India's most successful Test captain. Kohli has also contributed to India's successes, including winning the 2011 World Cup and the 2013 Champions trophy.

Born and raised in Delhi, Kohli trained in West Delhi Cricket Academy; started his youth career with Delhi Under-15 team. Kohli made his international debut in 2008 and quickly became a key player in the ODI team. He made his Test debut in 2011.[4] In 2013, Kohli reached the number one spot in the ICC rankings for ODI batsmen for the first time.[5] During 2014 T20 World Cup, he set a record for the most runs scored in the tournament. In 2018, Kohli became the number one ranked Test batsman, making him the only Indian batsman to achieve the top spot in the ICC rankings in all three formats. His form continued in 2019, where he became the first player to score 20,000 international runs in single decade. In 2021, Virat Kohli made the decision to step down as the captain of the Indian national team for T20Is, following the T20 World Cup and in early 2022 he stepped down as the captain of the Test team as well.


"""

ps=PorterStemmer()
wordnet=WordNetLemmatizer()
sentence=nltk.sent_tokenize(para)
corpus=[]

for i in range (len(sentence)):
    review=re.sub('[^a-zA-z]','',sentence[i])
    review=review.lower()
    review=review.split()
    review=[ps.stem(word) for word in review if not word in set(stopwords.words('english'))]
    review=' '.join(review)
    corpus.append(review)


from sklearn.feature_extraction.text import CountVectorizer
cv=CountVectorizer(max_features=1000)
x=cv.fit_transform(corpus).toarray()
print(x)



