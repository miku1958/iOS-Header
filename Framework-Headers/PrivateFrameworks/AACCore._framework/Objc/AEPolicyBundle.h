//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol AEPerformancePrimitives, AEPolicyStore, OS_dispatch_queue;

@interface AEPolicyBundle : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    id<AEPolicyStore> _policyStore;
    NSArray *_activations;
    id<AEPerformancePrimitives> _performancePrimitives;
}

- (void).cxx_destruct;
- (void)activateSessionWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithPolicyStore:(id)arg1 performancePrimitives:(id)arg2 activations:(id)arg3;
- (id)recoverySession;

@end
