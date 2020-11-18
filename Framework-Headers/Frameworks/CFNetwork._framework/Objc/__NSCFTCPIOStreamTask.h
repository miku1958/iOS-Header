//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFURLSessionTask.h>

@class NSData, NSError;

__attribute__((visibility("hidden")))
@interface __NSCFTCPIOStreamTask : __NSCFURLSessionTask
{
    CDUnknownBlockType _disavow;
    struct shared_ptr<TCPIO_EstablishBase> _establish;
    shared_ptr_54ecd472 _ios;
    unsigned char _captureStreamsUponCompletion;
    unsigned char _secure;
    NSError *_cancelError;
    NSData *_TCPConnectionMetadata;
}

@property (copy) NSData *_TCPConnectionMetadata; // @synthesize _TCPConnectionMetadata;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_onSessionQueue_cleanupAndBreakCycles;
- (void)_onSessionQueue_disavow;
- (void)_onqueue_adjustLoadingPoolPriority;
- (void)_onqueue_adjustPoolPriority;
- (void)_onqueue_cancel;
- (void)_onqueue_cancel_with_error:(id)arg1;
- (void)_onqueue_connectionEstablishedWithError:(CDStruct_59046461)arg1 callbackReferent:(id)arg2;
- (void)_onqueue_dealWithSessionTrustAuth:(long long)arg1 credential:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_onqueue_needClientCert:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_needServerTrust:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_postConnectConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_preConnectionConfiguration:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_resume;
- (BOOL)_onqueue_sendSessionChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_onqueue_suspend;
- (void)_task_onqueue_didFinish;
- (void)cancel;
- (void)captureStreams;
- (void)closeRead;
- (void)closeWrite;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithHost:(id)arg1 port:(long long)arg2 session:(id)arg3 disavow:(CDUnknownBlockType)arg4;
- (shared_ptr_54ecd472)ios;
- (void)readDataOfMinLength:(unsigned long long)arg1 maxLength:(unsigned long long)arg2 timeout:(double)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)startSecureConnection;
- (void)stopSecureConnection;
- (void)writeData:(id)arg1 timeout:(double)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

