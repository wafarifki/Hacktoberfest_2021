(function () {
    const quotes = [
        {
            quote:
              " You are the shuckiest shuck faced shuck in the world! ",
            author: "- James Dashner, The Maze Runner"
          },
          {
            quote:
              " I'm unpredictable, I never know where I'm going until I get there, I'm so random, I'm always growing, learning, changing, I'm never the same person twice. But one thing you can be sure of about me; is I will always do exactly what I want to do. ",
            author: "- C. JoyBell C."
          },
          {
            quote:
              " But that was life: Nobody got a guided tour to their own theme park. You had to hop on the rides as they presented themselves, never knowing whether you would like the one you were in line for...or if the bastard was going to make you throw up your corn dog and your cotton candy all over the place. ",
            author: "- J.R. Ward, Crave"
          },
          {
            quote: " If you hear a voice within you say 'you cannot paint,' then by all means paint and that voice will be silenced. ",
            author: "- Vincent Van Gogh"
          },
          {
            quote:
              " Love is an untamed force. When we try to control it, it destroys us. When we try to imprison it, it enslaves us. When we try to understand it, it leaves us feeling lost and confused. ",
            author: "- Paulo Coelho"
          },
          {
            quote:
              " A critic is someone who never actually goes to the battle, yet who afterwards comes out shooting the wounded. ",
            author: "- Tyne Daly"
          }
    ]
    
    const btn = document.getElementById('generate-btn')
    btn.addEventListener('click', function() {
        let random = Math.floor(Math.random() * quotes.length)
        document.getElementById('quote').textContent = quotes[random].quote
        document.querySelector('.author').textContent = quotes[random].author
    })
})()