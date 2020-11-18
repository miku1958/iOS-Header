//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/NSURLSessionDataDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface ADNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate>
{
    NSString *_identifier;
    long long _requestCount;
    NSMutableDictionary *_taskInfoByTaskIdentifier;
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_demuxQueue;
    long long _maximumRequestCount;
    CDUnknownBlockType _sessionInvalidated;
}

@property (strong) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<OS_dispatch_queue> *demuxQueue; // @synthesize demuxQueue=_demuxQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long maximumRequestCount; // @synthesize maximumRequestCount=_maximumRequestCount;
@property (nonatomic) long long requestCount; // @synthesize requestCount=_requestCount;
@property (strong) NSURLSession *session; // @synthesize session=_session;
@property (copy, nonatomic) CDUnknownBlockType sessionInvalidated; // @synthesize sessionInvalidated=_sessionInvalidated;
@property (readonly) Class superclass;
@property (strong) NSMutableDictionary *taskInfoByTaskIdentifier; // @synthesize taskInfoByTaskIdentifier=_taskInfoByTaskIdentifier;

- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 forIdentifier:(id)arg2 withMaximumRequestCount:(long long)arg3;
- (void)invalidateSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)taskInfoForTask:(id)arg1;

@end

