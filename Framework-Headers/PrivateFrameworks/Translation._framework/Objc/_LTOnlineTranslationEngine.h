//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Translation/_LTTranslationEngine-Protocol.h>

@class AFSettingsConnection, FTBlazarService, FTMtService, NSOperationQueue, NSString, _LTBatchTranslationResponseHandler, _LTOspreySpeechTranslationSession, _LTTextToSpeechCache;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface _LTOnlineTranslationEngine : NSObject <_LTTranslationEngine>
{
    NSOperationQueue *_sendQueue;
    FTMtService *_service;
    FTBlazarService *_blazarService;
    FTBlazarService *_webTaskService;
    NSObject<OS_dispatch_queue> *_translationQueue;
    _LTOspreySpeechTranslationSession *_speechSession;
    _LTBatchTranslationResponseHandler *batchTranslationResponseHandler;
    NSObject<OS_dispatch_queue> *_timerQueue;
    NSObject<OS_dispatch_source> *_serverTimer;
    AFSettingsConnection *_assistantSettingsConnection;
    long long _dataSharingOptInStatus;
    _LTTextToSpeechCache *_ttsCache;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) _LTTextToSpeechCache *ttsCache; // @synthesize ttsCache=_ttsCache;

+ (id)blazarServiceWithBundleID:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (id)_blazarService;
- (BOOL)_hasOngoingSpeechSession;
- (id)_service;
- (id)_serviceForTask:(long long)arg1;
- (void)_speechSessionCompletedWithError:(id)arg1;
- (id)_tokenizeString:(id)arg1 inLocale:(id)arg2;
- (void)_translate:(id)arg1 context:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_translateParagraph:(id)arg1 index:(long long)arg2 context:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)_webTaskService;
- (void)addSpeechAudioData:(id)arg1;
- (void)cancelServerTimeout;
- (void)cancelSpeechTranslation;
- (void)endAudio;
- (void)endpoint;
- (id)init;
- (void)preheatAsynchronously:(BOOL)arg1 withContext:(id)arg2;
- (void)sendBatchTranslationRequestWithDelegate:(id)arg1;
- (void)serverTimeoutFired;
- (void)setLanguagesRecognized:(id)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)startServerTimeoutTimer;
- (void)startSpeechTranslationWithContext:(id)arg1 delegate:(id)arg2;
- (void)startTextToSpeechTranslationWithContext:(id)arg1 text:(id)arg2 delegate:(id)arg3;
- (void)translate:(id)arg1 withContext:(id)arg2 paragraphResult:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)translateSentence:(id)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (BOOL)translatesPair:(id)arg1;
- (void)updateServerTimeout;

@end
