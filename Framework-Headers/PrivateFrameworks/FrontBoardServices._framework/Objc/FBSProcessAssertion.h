//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>

@class BKSProcessAssertion, FBSProcessExecutionPolicy, NSString;
@protocol FBSProcess;

@interface FBSProcessAssertion : NSObject <BSDescriptionProviding>
{
    NSString *_name;
    id<FBSProcess> _process;
    FBSProcessExecutionPolicy *_policy;
    unsigned long long _activationCount;
    BOOL _invalidated;
    BKSProcessAssertion *_assertion;
}

@property (readonly, nonatomic, getter=isActivated) BOOL activated;
@property (readonly, nonatomic) unsigned long long activationCount; // @synthesize activationCount=_activationCount;
@property (readonly, strong, nonatomic) BKSProcessAssertion *assertion; // @synthesize assertion=_assertion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated; // @synthesize invalidated=_invalidated;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, strong, nonatomic) FBSProcessExecutionPolicy *policy; // @synthesize policy=_policy;
@property (readonly, weak, nonatomic) id<FBSProcess> process; // @synthesize process=_process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_invalidateAssertion:(id)arg1;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;
- (void)invalidate;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

