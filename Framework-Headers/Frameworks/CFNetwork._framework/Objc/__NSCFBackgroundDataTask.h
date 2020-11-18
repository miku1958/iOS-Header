//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFBackgroundSessionTask.h>

#import <CFNetwork/NSStreamDelegate-Protocol.h>

@class NSFileHandle, NSInputStream, NSObject, NSString;
@protocol OS_dispatch_io, OS_dispatch_queue, OS_dispatch_semaphore;

@interface __NSCFBackgroundDataTask : __NSCFBackgroundSessionTask <NSStreamDelegate>
{
    NSInputStream *_requestBodyStream;
    NSInputStream *_initialStream;
    NSObject<OS_dispatch_queue> *_writeQueue;
    NSFileHandle *_readHandle;
    NSObject<OS_dispatch_io> *_pipeIO;
    unsigned long long _bytesRead;
    NSObject<OS_dispatch_semaphore> *_streamOpenedSema;
    BOOL _finishedOpen;
    BOOL _openedStreamDuringNeedNewBodyStream;
    BOOL _streamBased;
    CDUnknownBlockType _streamWriteCompletion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isStreamBased) BOOL streamBased; // @synthesize streamBased=_streamBased;
@property (copy) CDUnknownBlockType streamWriteCompletion; // @synthesize streamWriteCompletion=_streamWriteCompletion;
@property (readonly) Class superclass;

- (void)_onqueue_captureStream:(id)arg1;
- (void)_onqueue_didFinishWithError:(id)arg1;
- (void)_onqueue_didReceiveData:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_didReceiveResponse:(id)arg1 redirectRequest:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_onqueue_didReceiveResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_finishStream:(BOOL)arg1;
- (void)_onqueue_invokeStreamWriteCompletion;
- (void)_onqueue_needNewBodyStream:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_onqueue_openStream;
- (void)_onqueue_willBeRetried;
- (void)_onqueue_willSendRequestForEstablishedConnection:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithOriginalRequest:(id)arg1 ident:(unsigned long long)arg2 taskGroup:(id)arg3;
- (BOOL)isKindOfClass:(Class)arg1;
- (void)readFromStream;
- (void)stream:(id)arg1 handleEvent:(unsigned long long)arg2;

@end
