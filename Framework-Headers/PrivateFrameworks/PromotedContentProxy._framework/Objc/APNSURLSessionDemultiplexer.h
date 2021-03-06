//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PromotedContentProxy/NSURLSessionDataDelegate-Protocol.h>

@class APUnfairLock, NSMutableDictionary, NSString, NSURLSession, NSURLSessionConfiguration;

@interface APNSURLSessionDemultiplexer : NSObject <NSURLSessionDataDelegate>
{
    _Atomic long long _requestCount;
    BOOL _sessionMarkedInvalid;
    NSString *_identifier;
    NSMutableDictionary *_taskInfoByTaskIdentifier;
    NSURLSessionConfiguration *_configuration;
    NSURLSession *_session;
    long long _maximumRequestCount;
    CDUnknownBlockType _sessionInvalidated;
    APUnfairLock *_lock;
}

@property (strong) NSURLSessionConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) APUnfairLock *lock; // @synthesize lock=_lock;
@property (nonatomic) long long maximumRequestCount; // @synthesize maximumRequestCount=_maximumRequestCount;
@property (readonly, nonatomic) long long requestCount;
@property (strong) NSURLSession *session; // @synthesize session=_session;
@property (copy, nonatomic) CDUnknownBlockType sessionInvalidated; // @synthesize sessionInvalidated=_sessionInvalidated;
@property (nonatomic) BOOL sessionMarkedInvalid; // @synthesize sessionMarkedInvalid=_sessionMarkedInvalid;
@property (readonly) Class superclass;
@property (strong) NSMutableDictionary *taskInfoByTaskIdentifier; // @synthesize taskInfoByTaskIdentifier=_taskInfoByTaskIdentifier;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)dataTaskWithRequest:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 forIdentifier:(id)arg2 withMaximumRequestCount:(long long)arg3 delegateQueue:(id)arg4;
- (void)invalidateAndCancelSessionWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)invalidateSession;
- (void)removeTask:(id)arg1;
- (id)taskInfoForTask:(id)arg1;

@end

