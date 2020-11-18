//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AVAssetCustomURLBridgeForNSURLProtocol : NSObject
{
    NSMutableDictionary *_requestIDToDownload;
    struct OpaqueFigCustomURLHandler *_handler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void)_cancelRequestID:(unsigned long long)arg1;
- (void)_didFinish:(id)arg1 error:(struct __CFError *)arg2;
- (void)_didReceiveData:(id)arg1 data:(struct __CFData *)arg2;
- (void)_didReceiveResponse:(id)arg1 response:(struct _CFURLResponse *)arg2;
- (int)_handleRequest:(struct __CFDictionary *)arg1 requestID:(unsigned long long)arg2;
- (BOOL)_willSendRequest:(id)arg1 request:(struct _CFURLRequest *)arg2 redirectionResponse:(struct _CFURLResponse *)arg3;
- (void)dealloc;
- (id)initWithFigAsset:(struct OpaqueFigAsset *)arg1;

@end

