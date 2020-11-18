//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/_UIAnimationFenceCoordinating-Protocol.h>

@class NSArray, NSMutableArray, NSMutableOrderedSet, NSPointerArray, NSString;
@protocol _UICanvasLifecycleStateMonitoring, _UIContextBinding;

__attribute__((visibility("hidden")))
@interface _UIContextBinder : NSObject <_UIAnimationFenceCoordinating>
{
    NSPointerArray *_enrolledBindables;
    NSPointerArray *_attachedBindables;
    NSMutableOrderedSet *_contexts;
    id<_UICanvasLifecycleStateMonitoring> _lifecycleMonitor;
    BOOL __registeredPreCommitHandler;
    NSMutableArray *__preCommitHandlers;
    CDUnknownBlockType __realPreCommitHandler;
    CDUnknownBlockType __realPostCommitHandler;
    id<_UIContextBinding> _substrate;
    long long _contextManagementPolicy;
}

@property (readonly, nonatomic) NSArray *attachedBindables;
@property (nonatomic) long long contextManagementPolicy; // @synthesize contextManagementPolicy=_contextManagementPolicy;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *enrolledBindables;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) id<_UICanvasLifecycleStateMonitoring> lifecycleMonitor; // @synthesize lifecycleMonitor=_lifecycleMonitor;
@property (readonly, nonatomic) id<_UIContextBinding> substrate; // @synthesize substrate=_substrate;
@property (readonly) Class superclass;

+ (id)createContextForBindable:(id)arg1 withSubstrate:(id)arg2;
- (void).cxx_destruct;
- (id)_attachedBindablePointersAsCopy:(BOOL)arg1;
- (id)_contextForBindable:(id)arg1;
- (id)_enrolledBindablePointersAsCopy:(BOOL)arg1;
- (void)_synchronizeDrawing;
- (unsigned int)_synchronizeDrawingAcrossProcesses;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1;
- (void)_synchronizeDrawingAcrossProcessesOverPort:(unsigned int)arg1 withPreCommitHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeDrawingWithFence:(id)arg1;
- (void)_synchronizeDrawingWithFence:(id)arg1 preCommitHandler:(CDUnknownBlockType)arg2;
- (void)_synchronizeDrawingWithPreCommitHandler:(CDUnknownBlockType)arg1;
- (id)_synchronizedDrawingFence;
- (void)attachBindable:(id)arg1;
- (BOOL)bindableIsTopmostAttached:(id)arg1;
- (BOOL)bindbleEnrolled:(id)arg1;
- (void)createContextsWithTest:(CDUnknownBlockType)arg1 creationAction:(CDUnknownBlockType)arg2;
- (void)detachBindable:(id)arg1;
- (void)enrollBindable:(id)arg1;
- (void)expellBindable:(id)arg1;
- (id)initWithSubstrate:(id)arg1 stateMonitor:(id)arg2;
- (BOOL)permitContextCreationForBindable:(id)arg1;
- (void)purgeContextsWithPurgeAction:(CDUnknownBlockType)arg1;
- (void)recreateContextForBindable:(id)arg1;
- (void)updateBindable:(id)arg1;
- (void)updateBindableOrderWithTest:(CDUnknownBlockType)arg1;
- (void)updateBindableOrderWithTest:(CDUnknownBlockType)arg1 force:(BOOL)arg2;

@end

