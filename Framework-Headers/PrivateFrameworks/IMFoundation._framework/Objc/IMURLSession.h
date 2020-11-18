//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IMFoundation/NSURLSessionDataDelegate-Protocol.h>

@class NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface IMURLSession : NSObject <NSURLSessionDataDelegate>
{
    NSURLSession *_session;
    NSObject<OS_dispatch_queue> *_sessionQueue;
    BOOL _requireIDSHost;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sessionWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(BOOL)arg3;
+ (id)sharedSession;
+ (id)sharedSessionRequiringIDSHost;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithConfiguration:(id)arg1 queue:(id)arg2 requiresIDSHost:(BOOL)arg3;
- (void)performRequest:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)performRequest:(id)arg1 completionBlockWithTimingData:(CDUnknownBlockType)arg2;

@end
