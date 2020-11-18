//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TextToSpeechBundleSupport/TTSSpeechService-Protocol.h>
#import <TextToSpeechBundleSupport/TTSSpeechServiceUnitTesting-Protocol.h>

@class NSMutableDictionary, NSString, TTSSpeechServerInstance;
@protocol OS_dispatch_queue;

@interface TTSSpeechServer : NSObject <TTSSpeechService, TTSSpeechServiceUnitTesting>
{
    NSMutableDictionary *_serverInstances;
    NSObject<OS_dispatch_queue> *serviceQueue;
    TTSSpeechServerInstance *_speechInitializationInstance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) NSObject<OS_dispatch_queue> *serviceQueue; // @synthesize serviceQueue;
@property (strong, nonatomic) TTSSpeechServerInstance *speechInitializationInstance; // @synthesize speechInitializationInstance=_speechInitializationInstance;
@property (readonly) Class superclass;

+ (id)regexRules;
- (id)_behavesBadlyWithSpellMarkupForVoice:(id)arg1 string:(id)arg2 markupType:(long long)arg3;
- (id)_ttsCopyVoiceNames:(id)arg1 type:(long long)arg2 queryingMobileAssets:(BOOL)arg3;
- (id)audioFileSettingsForVoice:(id)arg1;
- (BOOL)canInitializeSpeech:(id)arg1;
- (oneway void)continueSpeechRequest:(id)arg1;
- (void)dealloc;
- (id)embeddedPitchMarkupForVoice:(id)arg1 string:(id)arg2 pitch:(double)arg3;
- (id)embeddedRateMarkupForVoice:(id)arg1 string:(id)arg2 rate:(double)arg3;
- (id)embeddedVolumeMarkupForVoice:(id)arg1 string:(id)arg2 volume:(double)arg3;
- (BOOL)employSpeechMarkupForType:(long long)arg1 language:(id)arg2;
- (id)enclosedStringWithPhonemes:(id)arg1;
- (id)getNewSpeechServerInstance;
- (oneway void)getSpeechIsActiveForRequest:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)getVocalizerWithLanguage:(struct __CFString *)arg1 defaultLanguage:(struct __CFString *)arg2 reinitIfNecessary:(unsigned char)arg3 instanceToDestroy:(struct _VE_HSAFE *)arg4 forceReinit:(unsigned char)arg5 voiceType:(long long)arg6 gender:(long long)arg7 footprint:(long long)arg8 voiceName:(struct __CFString *)arg9 error:(unsigned int *)arg10;
- (oneway void)getVoicesForLanguage:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)init;
- (void)initializeSpeechServerInstance:(unsigned long long)arg1;
- (BOOL)isNashvilleService;
- (BOOL)isSiriService;
- (BOOL)isVoiceValid:(id)arg1;
- (id)lhPhonemesFromIPA:(id)arg1 language:(id)arg2;
- (struct __CFArray *)loadedVoiceResources;
- (id)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
- (void)nashvilleVoiceIdentifier:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4 voiceId:(id *)arg5 voiceName:(id *)arg6;
- (id)nashvilleVoiceName:(id)arg1 footprint:(long long)arg2 voiceType:(long long)arg3 gender:(long long)arg4;
- (oneway void)pauseSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (id)phonemesFromIPA:(id)arg1 language:(id)arg2;
- (BOOL)requiresLHPPhonemes;
- (id)speechMarkupStringForType:(long long)arg1 voice:(id)arg2 string:(id)arg3;
- (oneway void)startSpeechRequest:(id)arg1;
- (oneway void)stopSpeechRequest:(id)arg1 atMark:(long long)arg2;
- (id)supportedIPAPhonemeLanguages;
- (void)synthesizerInstanceDestroyed:(unsigned long long)arg1;

@end
