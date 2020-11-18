//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoard/BSDescriptionProviding-Protocol.h>

@class FBSDisplayIdentity, NSString;

@interface FBUIApplicationSceneDeactivationAssertion : NSObject <BSDescriptionProviding>
{
    FBSDisplayIdentity *_displayIdentity;
    double _sceneLevel;
    long long _reason;
    CDUnknownBlockType _predicate;
    BOOL _acquired;
}

@property (readonly, nonatomic, getter=isAcquired) BOOL acquired; // @synthesize acquired=_acquired;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) FBSDisplayIdentity *displayIdentity; // @synthesize displayIdentity=_displayIdentity;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) CDUnknownBlockType predicate; // @synthesize predicate=_predicate;
@property (readonly, nonatomic) long long reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) double sceneLevel; // @synthesize sceneLevel=_sceneLevel;
@property (readonly) Class superclass;

- (id)_initWithReason:(long long)arg1 sceneLevel:(double)arg2 forDisplayWithIdentity:(id)arg3;
- (void)acquire;
- (void)acquireWithPredicate:(CDUnknownBlockType)arg1;
- (void)acquireWithPredicate:(CDUnknownBlockType)arg1 transitionContext:(id)arg2;
- (void)acquireWithTransitionContext:(id)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithReason:(long long)arg1;
- (id)initWithReason:(long long)arg1 sceneLevel:(double)arg2;
- (void)relinquish;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

