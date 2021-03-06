//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFCore/NSURLSessionDataDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetCustomURLBridgeForNSURLSession : NSObject <NSURLSessionDataDelegate>
{
    NSMutableDictionary *_taskToRequest;
    NSURLSession *_session;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 willCacheResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (int)_cancelRequestID:(unsigned long long)arg1;
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2 canHandleRequestOut:(BOOL *)arg3;
- (id)_lookupRequestForDataTask:(id)arg1;
- (void)_registerRequest:(struct __CFDictionary *)arg1 id:(unsigned long long)arg2 forDataTask:(id)arg3;
- (void)_unregisterRequestForDataTask:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;

@end

