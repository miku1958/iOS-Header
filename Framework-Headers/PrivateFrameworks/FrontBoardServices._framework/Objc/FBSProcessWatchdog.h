//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/FBSProcessExecutionProvisionDelegate-Protocol.h>

@class FBSProcessWatchdogPolicy, NSString;
@protocol FBSProcess, FBSProcessInternal;

@interface FBSProcessWatchdog : NSObject <FBSProcessExecutionProvisionDelegate, BSDescriptionProviding>
{
    NSString *_name;
    id<FBSProcessInternal> _process;
    FBSProcessWatchdogPolicy *_policy;
    BOOL _active;
    BOOL _invalidated;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, copy, nonatomic) FBSProcessWatchdogPolicy *policy; // @synthesize policy=_policy;
@property (readonly, weak, nonatomic) id<FBSProcess> process; // @synthesize process=_process;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginMonitoringConstraints;
- (void)_stopMonitoringConstraints;
- (void)activate;
- (void)deactivate;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithName:(id)arg1 process:(id)arg2 policy:(id)arg3;
- (void)invalidate;
- (void)provision:(id)arg1 wasViolatedWithError:(id)arg2;
- (void)provisionMilestoneCompleted:(id)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end
