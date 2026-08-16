import asyncio
import edge_tts
import webbrowser
import faster_whisper
import sounddevice as sd








# sd.default.samplerate = fs
async def speak(text):
    async def speak(text):

    communicate = edge_tts.Communicate(
        text,
        voice="en-US-AriaNeural"
    )

    await communicate.save("voice.mp3")

    pygame.mixer.init()

    pygame.mixer.music.load("voice.mp3")

    pygame.mixer.music.play()

    while pygame.mixer.music.get_busy():
        pass

asyncio.run(speak("Hello Rohit"))
    
    

speak('''Hello Rohit Chaudhary How are You and Tell me about Yourshelf,  Twinkle twinkle, little star, how I wonder what you are. Up above the world so high,
like a diamond in the sky. Twinkle twinkle, little star, how I wonder what you are.
When the blazing sun is set, and the grass with dew is wet. Then you show your little light, twinkle twinkle all the night. Twinkle twinkle little star, how I wonder what you are.
Then the traveler in the dark, thanks you for your tiny spark. How could he see where to go, if you did not twinkle so? Twinkle twinkle little star, how I wonder what you are.
As your bright and tiny spark, lights the traveler in the dark, though I know not what you are, twinkle twinkle, little star. Twinkle twinkle, little star, how I wonder what you are.''')

if __name__ == "__main__":
    speak("Initializing Jarvis...")
    