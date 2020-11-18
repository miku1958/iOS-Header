//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class FBApplicationTerminationAssertionServiceServer, NSMutableDictionary;
@protocol FBApplicationTerminationAssertionServiceDelegate, OS_dispatch_queue;

@interface FBApplicationTerminationAssertionService : NSObject
{
    NSMutableDictionary *_terminationAssertionsByBundleID;
    NSObject<OS_dispatch_queue> *_queue;
    FBApplicationTerminationAssertionServiceServer *_server;
    id<FBApplicationTerminationAssertionServiceDelegate> _delegate;
}

@property (nonatomic) id<FBApplicationTerminationAssertionServiceDelegate> delegate; // @synthesize delegate=_delegate;

+ (id)sharedInstance;
- (void)_queue_addTerminationAssertion:(id)arg1;
- (void)_queue_continueAcquisition:(id)arg1 error:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_queue_removeTerminationAssertion:(id)arg1;
- (id)_requestPluginHoldForAppInfo:(id)arg1;
- (void)addTerminationAssertion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canAcquireTerminationAssertion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (void)removeTerminationAssertion:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)terminationAssertionsForBundleID:(id)arg1;
- (id)terminationAssertionsForBundleID:(id)arg1 withReason:(id)arg2;

@end

