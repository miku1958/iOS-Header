//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMCore/NSURLSessionDelegate-Protocol.h>

@class NSMutableSet, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;
@protocol OS_dispatch_queue;

@interface FMServerInteractionController : NSObject <NSURLSessionDelegate>
{
    NSObject<OS_dispatch_queue> *dq_inFlightCommands;
    NSMutableSet *inFlightCommands;
    NSOperationQueue *_queue;
    NSURLSession *_session;
    NSURLSessionConfiguration *_sessionConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSOperationQueue *queue; // @synthesize queue=_queue;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (strong, nonatomic) NSURLSessionConfiguration *sessionConfiguration; // @synthesize sessionConfiguration=_sessionConfiguration;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (double)_simulatedLatency;
- (void)cancelAllCommands;
- (void)cancelCommand:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)networkActivityStatus:(BOOL)arg1;
- (void)processResponseForCommand:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sendCommand:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;

@end

