//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsAnalyticsUpload/NDAnalyticsEnvelopeStoreObserver-Protocol.h>
#import <NewsAnalyticsUpload/NDAnalyticsService-Protocol.h>
#import <NewsAnalyticsUpload/NDAnalyticsUploadSchedulerDelegate-Protocol.h>

@class FCKeyValueStore, NDAnalyticsEnvelopeStore, NDAnalyticsPayloadAssembler, NDAnalyticsPayloadUploader, NDAnalyticsUploadScheduler, NFMutexLock, NSString;

@interface NDAnalyticsEnvelopeManager : NSObject <NDAnalyticsEnvelopeStoreObserver, NDAnalyticsUploadSchedulerDelegate, NDAnalyticsService>
{
    NDAnalyticsEnvelopeStore *_envelopeStore;
    NDAnalyticsPayloadAssembler *_payloadAssembler;
    NDAnalyticsPayloadUploader *_payloadUploader;
    NDAnalyticsUploadScheduler *_uploadScheduler;
    FCKeyValueStore *_lastUploadDatesByContentType;
    NFMutexLock *_keyValueStoreLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NDAnalyticsEnvelopeStore *envelopeStore; // @synthesize envelopeStore=_envelopeStore;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NFMutexLock *keyValueStoreLock; // @synthesize keyValueStoreLock=_keyValueStoreLock;
@property (strong, nonatomic) FCKeyValueStore *lastUploadDatesByContentType; // @synthesize lastUploadDatesByContentType=_lastUploadDatesByContentType;
@property (strong, nonatomic) NDAnalyticsPayloadAssembler *payloadAssembler; // @synthesize payloadAssembler=_payloadAssembler;
@property (strong, nonatomic) NDAnalyticsPayloadUploader *payloadUploader; // @synthesize payloadUploader=_payloadUploader;
@property (readonly) Class superclass;
@property (strong, nonatomic) NDAnalyticsUploadScheduler *uploadScheduler; // @synthesize uploadScheduler=_uploadScheduler;

- (void).cxx_destruct;
- (id)_handleDroppedEnvelopesForLocalReasons:(id)arg1;
- (id)_handleOutcomeOfUploadAttemptWithPayload:(id)arg1 success:(BOOL)arg2 error:(id)arg3 willRetry:(BOOL)arg4 hitEndpoint:(BOOL)arg5;
- (id)_lastUploadDatesByContentType;
- (void)_scheduleUploadIfNeededWithCompletion:(CDUnknownBlockType)arg1;
- (void)envelopeStore:(id)arg1 didFlushEnvelopesForEntries:(id)arg2;
- (void)handleLaunchEventForBackgroundSessionWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithAppConfigurationManager:(id)arg1 storeDirectoryFileURL:(id)arg2 URLSessionQueue:(id)arg3;
- (void)submitEnvelopes:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)submitEnvelopes:(id)arg1 withSubmissionCompletion:(CDUnknownBlockType)arg2 foregroundUploadCompletion:(CDUnknownBlockType)arg3;
- (void)uploadScheduler:(id)arg1 performUploadWithCompletion:(CDUnknownBlockType)arg2;
- (void)uploadSchedulerDidDropScheduledBackgroundUpload:(id)arg1;

@end

