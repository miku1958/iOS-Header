//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FrontBoardServices/BSDescriptionProviding-Protocol.h>
#import <FrontBoardServices/NSCopying-Protocol.h>

@class NSError, NSString;
@protocol FBSProcess, FBSProcessExecutionProvisionDelegate, OS_dispatch_queue;

@interface FBSProcessExecutionProvision : NSObject <BSDescriptionProviding, NSCopying>
{
    id<FBSProcess> _process;
    BOOL _activated;
    NSError *_error;
    NSObject<OS_dispatch_queue> *_delegateCalloutQueue;
    BOOL _monitoring;
    BOOL _violated;
    id<FBSProcessExecutionProvisionDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<FBSProcessExecutionProvisionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic, getter=isMonitoring) BOOL monitoring; // @synthesize monitoring=_monitoring;
@property (readonly, weak, nonatomic) id<FBSProcess> process; // @synthesize process=_process;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isViolated) BOOL violated; // @synthesize violated=_violated;

- (void).cxx_destruct;
- (void)_beginMonitoring;
- (void)_noteViolatedWithError:(id)arg1;
- (void)_performDelegateCallout:(CDUnknownBlockType)arg1;
- (void)_prepareForReuse;
- (void)_stopMonitoring;
- (void)_updateProgress;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (BOOL)isResourceProvision;
- (void)monitorProcess:(id)arg1;
- (void)prepareForReuse;
- (void)stopMonitoring;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)updateProgress;

@end

