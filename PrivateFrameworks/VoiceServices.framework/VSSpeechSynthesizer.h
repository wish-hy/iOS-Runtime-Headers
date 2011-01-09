/* Generated by RuntimeBrowser on iPhone OS 4.0
   Image: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

@class <VSSpeechSynthesizerDelegate>, NSString;



@interface VSSpeechSynthesizer : NSObject 
{
    void *_speechJob;
    void *_keepAlive;
    <VSSpeechSynthesizerDelegate> *_delegate;
    NSString *_voice;
    float _rate;
    float _pitch;
    float _volume;
    struct { 
        unsigned int delegateStart : 1; 
        unsigned int delegateFinish : 1; 
        unsigned int delegatePause : 1; 
        unsigned int delegateContinue : 1; 
        unsigned int delegateWillSpeak : 1; 
        unsigned int willUseInput : 1; 
    } _synthesizerFlags;
}

+ (void)_localeDidChange;
+ (id)availableVoices;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)availableLanguageCodes;
+ (BOOL)isSystemSpeaking;

- (id)init;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)setPitch:(float)arg1;
- (float)pitch;
- (float)volume;
- (id)setVolume:(float)arg1;
- (float)rate;
- (id)setRate:(float)arg1;
- (id)initForInputFeedback;
- (id)startSpeakingString:(id)arg1;
- (id)startSpeakingString:(id)arg1 toURL:(id)arg2;
- (id)startSpeakingString:(id)arg1 attributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4;
- (id)startSpeakingAttributedString:(id)arg1;
- (id)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2;
- (id)stopSpeakingAtNextBoundary:(NSInteger)arg1;
- (id)stopSpeakingAtNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2;
- (id)pauseSpeakingAtNextBoundary:(NSInteger)arg1;
- (id)pauseSpeakingAtNextBoundary:(NSInteger)arg1 synchronously:(BOOL)arg2;
- (id)continueSpeaking;
- (BOOL)isSpeaking;
- (id)speechString;
- (float)minimumRate;
- (float)maximumRate;
- (void)setVoice:(id)arg1;
- (id)voice;
- (void)setMaintainPersistentConnection:(BOOL)arg1;
- (void)_handleSpeechStarted:(struct __VSSpeech { }*)arg1;
- (void)_handleSpeechPaused:(struct __VSSpeech { }*)arg1;
- (void)_handleSpeechContinued:(struct __VSSpeech { }*)arg1;
- (void)_handleSpeech:(struct __VSSpeech { }*)arg1 completed:(BOOL)arg2 withError:(id)arg3;
- (void)_handleSpeech:(struct __VSSpeech { }*)arg1 willSpeakMarkType:(NSInteger)arg2 inRange:(struct { NSInteger x1; NSInteger x2; })arg3;
- (id)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3;
- (id)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3;

@end