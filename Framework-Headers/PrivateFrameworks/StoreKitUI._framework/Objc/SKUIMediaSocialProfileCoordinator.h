//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSMutableArray, NSOperationQueue, SKUIMediaSocialProfile;
@protocol OS_dispatch_queue;

@interface SKUIMediaSocialProfileCoordinator : NSObject
{
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSDate *_lastAuthenticationAttempt;
    SKUIMediaSocialProfile *_lastKnownProfile;
    NSDate *_lastRequestDate;
    NSOperationQueue *_operationQueue;
    NSMutableArray *_profileBlocks;
    BOOL _waitingForAuthentication;
}

+ (id)sharedCoordinator;
- (void).cxx_destruct;
- (void)_accountStoreChangeNotification:(id)arg1;
- (void)_authenticateOnCompletion:(CDUnknownBlockType)arg1;
- (void)_fireProfileBlocksWithProfile:(id)arg1 isFinal:(BOOL)arg2 error:(id)arg3;
- (void)_handleOperationResponseWithProfile:(id)arg1 error:(id)arg2;
- (void)_queueProfileBlock:(CDUnknownBlockType)arg1;
- (void)_requestProfile;
- (void)dealloc;
- (void)getProfileWithOptions:(id)arg1 profileBlock:(CDUnknownBlockType)arg2;
- (id)init;
- (void)reset;

@end
