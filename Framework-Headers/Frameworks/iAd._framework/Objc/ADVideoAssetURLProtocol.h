//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLProtocol.h>

#import <iAd/NSURLSessionDataDelegate-Protocol.h>
#import <iAd/NSURLSessionTaskDelegate-Protocol.h>

@class ADNSURLSessionDemultiplexer, NSArray, NSString, NSThread, NSURLSessionDataTask;

@interface ADVideoAssetURLProtocol : NSURLProtocol <NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    NSThread *_clientThread;
    NSArray *_modes;
    double _startTime;
    NSURLSessionDataTask *_task;
    ADNSURLSessionDemultiplexer *_sessionDemux;
}

@property (strong) NSThread *clientThread; // @synthesize clientThread=_clientThread;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSArray *modes; // @synthesize modes=_modes;
@property (strong) ADNSURLSessionDemultiplexer *sessionDemux; // @synthesize sessionDemux=_sessionDemux;
@property double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;
@property (strong) NSURLSessionDataTask *task; // @synthesize task=_task;

+ (BOOL)canInitWithRequest:(id)arg1;
+ (id)canonicalRequestForRequest:(id)arg1;
+ (void)initialize;
+ (void)registerProtocol;
+ (void)unregister;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)dealloc;
- (void)startLoading;
- (void)stopLoading;

@end

