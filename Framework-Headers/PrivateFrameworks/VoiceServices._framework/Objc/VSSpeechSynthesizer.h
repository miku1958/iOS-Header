//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VoiceServices/VSSpeechConnectionDelegate-Protocol.h>

@class NSString, VSKeepAlive, VSSpeechConnection;
@protocol OS_dispatch_queue, VSSpeechSynthesizerDelegate;

@interface VSSpeechSynthesizer : NSObject <VSSpeechConnectionDelegate>
{
    VSKeepAlive *_keepAlive;
    VSKeepAlive *_inactiveKeepAlive;
    NSString *_clientBundleIdentifier;
    unsigned int _audioSessionID;
    unsigned int _audioQueueFlags;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    VSSpeechConnection *_xpcConnection;
    NSString *_identifier;
    struct {
        unsigned int delegateStart:1;
        unsigned int delegateFinish:1;
        unsigned int delegateFinishWithPhonemesSpoken:1;
        unsigned int delegatePause:1;
        unsigned int delegateContinue:1;
        unsigned int delegateWillSpeak:1;
        unsigned int delegateStartWithRequest:1;
        unsigned int delegateFinishWithRequest:1;
        unsigned int delegateFinishWithPhonemesSpokenWithRequest:1;
        unsigned int delegateSuccessWithInstrumentMetrics:1;
        unsigned int delegatePauseWithRequest:1;
        unsigned int delegateContinueWithRequest:1;
        unsigned int delegateWillSpeakWithRequest:1;
        unsigned int willUseInput:1;
    } _synthesizerFlags;
    BOOL _useCustomVoice;
    float _rate;
    float _pitch;
    float _volume;
    id<VSSpeechSynthesizerDelegate> _delegate;
    NSString *_voice;
    NSString *_language;
    long long _footprint;
    long long _voiceType;
    long long _gender;
}

@property (weak, nonatomic) id<VSSpeechSynthesizerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) long long footprint; // @synthesize footprint=_footprint;
@property (nonatomic) long long gender; // @synthesize gender=_gender;
@property (copy, nonatomic) NSString *language; // @synthesize language=_language;
@property (nonatomic) float pitch; // @synthesize pitch=_pitch;
@property (nonatomic) float rate; // @synthesize rate=_rate;
@property (nonatomic) BOOL useCustomVoice; // @synthesize useCustomVoice=_useCustomVoice;
@property (strong, nonatomic) NSString *voice; // @synthesize voice=_voice;
@property (nonatomic) long long voiceType; // @synthesize voiceType=_voiceType;
@property (nonatomic) float volume; // @synthesize volume=_volume;

+ (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
+ (id)availableLanguageCodes;
+ (id)availableVoices;
+ (id)availableVoicesForLanguageCode:(id)arg1;
+ (id)errorWithReason:(id)arg1;
+ (void)getAllVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
+ (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
+ (void)getLogToFile:(CDUnknownBlockType)arg1;
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 custom:(BOOL)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
+ (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
+ (BOOL)isSystemSpeaking;
+ (BOOL)playVoicePreviewForLanguageCode:(id)arg1 gender:(long long)arg2;
+ (void)setAutoDownloadedVoiceAssets:(id)arg1;
+ (void)setLogToFile:(BOOL)arg1;
+ (id)sharedInstance;
+ (id)validatePresynthesizedAudioRequest:(id)arg1;
+ (id)validateRequest:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)_pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (void)_setDelegate:(id)arg1;
- (BOOL)_startSpeakingString:(id)arg1 orAttributedString:(id)arg2 toURL:(id)arg3 withLanguageCode:(id)arg4 request:(id *)arg5 error:(id *)arg6;
- (BOOL)_stopSpeakingPresynthesizedAudioRequest:(id)arg1 synchronously:(BOOL)arg2 error:(id *)arg3;
- (BOOL)_stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (id)availableFootprintsForVoice:(id)arg1 languageCode:(id)arg2;
- (id)availableLanguageCodes;
- (id)availableVoicesForLanguageCode:(id)arg1;
- (void)beginAudioPowerUpdateWithReply:(CDUnknownBlockType)arg1;
- (id)cachePresynthesizedAudioRequest:(id)arg1;
- (void)cleanUnusedAssets:(CDUnknownBlockType)arg1;
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 error:(id)arg4;
- (void)connection:(id)arg1 presynthesizedAudioRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3 error:(id)arg4;
- (void)connection:(id)arg1 presynthesizedAudioRequestDidStart:(id)arg2;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didReceiveTimingInfo:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 didStopAtEnd:(BOOL)arg3 phonemesSpoken:(id)arg4 error:(id)arg5;
- (void)connection:(id)arg1 speechRequest:(id)arg2 successWithInstrumentMetrics:(id)arg3;
- (void)connection:(id)arg1 speechRequest:(id)arg2 willSpeakMark:(long long)arg3 inRange:(struct _NSRange)arg4;
- (void)connection:(id)arg1 speechRequestDidContinue:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidPause:(id)arg2;
- (void)connection:(id)arg1 speechRequestDidStart:(id)arg2;
- (void)connection:(id)arg1 synthesisRequest:(id)arg2 didFinishWithInstrumentMetrics:(id)arg3 error:(id)arg4;
- (BOOL)continueSpeakingRequest:(id)arg1 withError:(id *)arg2;
- (BOOL)continueSpeakingWithError:(id *)arg1;
- (void)dealloc;
- (void)endAudioPowerUpdate;
- (void)getAutoDownloadedVoiceAssets:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceAssets:(CDUnknownBlockType)arg1;
- (void)getLocalVoiceResources:(CDUnknownBlockType)arg1;
- (void)getLogToFile:(CDUnknownBlockType)arg1;
- (void)getTTSServerVoicesWithFilter:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)getVoiceInfoForLanguageCode:(id)arg1 footprint:(long long)arg2 gender:(long long)arg3 type:(long long)arg4 reply:(CDUnknownBlockType)arg5;
- (void)getVoiceResourceForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initForInputFeedback;
- (BOOL)isSpeaking;
- (BOOL)isSystemSpeaking;
- (float)maximumRate;
- (float)minimumRate;
- (BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (BOOL)pauseSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id *)arg3;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (BOOL)pauseSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (BOOL)prewarmIfNeeded;
- (id)prewarmIfNeededWithRequest:(id)arg1;
- (void)setAutoDownloadedVoiceAssets:(id)arg1;
- (void)setLogToFile:(BOOL)arg1;
- (void)setMaintainInactivePersistentConnection:(BOOL)arg1;
- (void)setMaintainPersistentConnection:(BOOL)arg1;
- (id)speechString;
- (BOOL)startSpeakingAttributedString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (id)startSpeakingPresynthesizedAudioRequest:(id)arg1;
- (id)startSpeakingRequest:(id)arg1;
- (BOOL)startSpeakingString:(id)arg1 error:(id *)arg2;
- (BOOL)startSpeakingString:(id)arg1 request:(id *)arg2 error:(id *)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 error:(id *)arg3;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (BOOL)startSpeakingString:(id)arg1 toURL:(id)arg2 withLanguageCode:(id)arg3 error:(id *)arg4;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 error:(id *)arg3;
- (BOOL)startSpeakingString:(id)arg1 withLanguageCode:(id)arg2 request:(id *)arg3 error:(id *)arg4;
- (id)startSynthesizingRequest:(id)arg1;
- (id)startSynthesizingString:(id)arg1 toFileURL:(id)arg2 shouldCache:(BOOL)arg3 request:(id *)arg4;
- (BOOL)stopSpeakingAtNextBoundary:(long long)arg1 error:(id *)arg2;
- (BOOL)stopSpeakingAtNextBoundary:(long long)arg1 synchronously:(BOOL)arg2 error:(id *)arg3;
- (BOOL)stopSpeakingPresynthesizedAudioSynchronously:(BOOL)arg1 error:(id *)arg2;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 error:(id *)arg3;
- (BOOL)stopSpeakingRequest:(id)arg1 atNextBoundary:(long long)arg2 synchronously:(BOOL)arg3 error:(id *)arg4;
- (void)useAudioQueueFlags:(unsigned int)arg1;
- (void)useSharedAudioSession:(BOOL)arg1;
- (void)useSpecificAudioSession:(unsigned int)arg1;

@end

