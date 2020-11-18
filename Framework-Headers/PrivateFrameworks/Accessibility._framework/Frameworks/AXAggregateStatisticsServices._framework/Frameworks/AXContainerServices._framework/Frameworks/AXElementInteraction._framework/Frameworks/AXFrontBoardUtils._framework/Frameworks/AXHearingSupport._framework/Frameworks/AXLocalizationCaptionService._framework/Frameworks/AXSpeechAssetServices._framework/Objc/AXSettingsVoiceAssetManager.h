//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AXSpeechAssetServices/AVSpeechSynthesizerDelegate-Protocol.h>

@class AVSpeechSynthesizer, NSPointerArray, NSString;

@interface AXSettingsVoiceAssetManager : NSObject <AVSpeechSynthesizerDelegate>
{
    struct __SCNetworkReachability *_reachability;
    NSPointerArray *_delegates;
    AVSpeechSynthesizer *_samplePlayer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_assetForVoiceId:(id)arg1 forDeletion:(BOOL)arg2;
- (id)_cachedAssetForVoiceId:(id)arg1;
- (id)_currentDelegates;
- (void)_handleAssetProgress:(id)arg1 error:(id)arg2 voiceId:(id)arg3 diskSize:(long long)arg4 asset:(id)arg5;
- (id)_mobileAssetDownloadOptions;
- (void)_removeSiriVoiceUsage:(id)arg1;
- (void)_requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)_setProgressHandlerIfNecessary:(id)arg1 voiceId:(id)arg2;
- (id)_speechAssetUpdaterClient;
- (void)_startDownloadingAlternateVoice:(id)arg1;
- (void)_updateAllowedToDownload;
- (BOOL)_voiceIdIsVocalizerVoice:(id)arg1;
- (void)addDelegate:(id)arg1;
- (BOOL)allowedToDownloadVoiceAssets;
- (id)assetForVoiceId:(id)arg1;
- (void)clientUpdateAvailableSpeechAssets;
- (void)dealloc;
- (void)deleteDownloadAlternateVoice:(id)arg1;
- (long long)diskSizeForAsset:(id)arg1;
- (id)init;
- (void)playSample:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)removeDelegate:(id)arg1;
- (void)requestVoiceAlternateVoiceDownloadProgress:(id)arg1;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)startDownloadingAlternateVoice:(id)arg1;
- (void)stopDownloadingAlternateVoice:(id)arg1;

@end
