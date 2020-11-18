//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SoftwareUpdateServices/SUInstallationConstraintMonitor-Protocol.h>
#import <SoftwareUpdateServices/SUInstallationConstraintMonitorDelegate-Protocol.h>

@class NSSet, NSString;
@protocol OS_dispatch_queue, SUInstallationConstraintMonitorDelegate;

@interface SUComposedInstallationConstraintMonitor : NSObject <SUInstallationConstraintMonitorDelegate, SUInstallationConstraintMonitor>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSSet *_queue_installationConstraintMonitors;
    id<SUInstallationConstraintMonitorDelegate> _queue_delegate;
    unsigned long long _queue_representedConstraints;
}

@property (readonly, strong, nonatomic) NSSet *constraintMonitors; // @synthesize constraintMonitors=_queue_installationConstraintMonitors;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<SUInstallationConstraintMonitorDelegate> delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long representedConstraints;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long unsatisfiedConstraints;

- (void).cxx_destruct;
- (void)_queue_clearDelegate;
- (id)_queue_delegate;
- (void)_queue_invalidateChildConstraintMonitors;
- (void)_queue_noteInstallationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (unsigned long long)_queue_representedConstraints;
- (void)_queue_setDelegate:(id)arg1;
- (unsigned long long)_queue_unsatisfiedConstraints;
- (void)dealloc;
- (id)initWithInternalQueue:(id)arg1 withInstallationConstraintMonitors:(id)arg2;
- (void)installationConstraintMonitor:(id)arg1 constraintsDidChange:(unsigned long long)arg2;
- (BOOL)isSatisfied;

@end
