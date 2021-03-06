//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSMutableSet;
@protocol OS_dispatch_queue, PLForegroundMonitorDelegate;

@interface PLForegroundMonitor : NSObject
{
    NSMutableSet *_foregroundBundleIDs;
    NSObject<OS_dispatch_queue> *_applicationStateMonitorQueue;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    id<PLForegroundMonitorDelegate> _delegate;
}

@property (weak, nonatomic) id<PLForegroundMonitorDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)_applicationChangeToBG:(id)arg1;
- (void)_applicationChangeToFG:(id)arg1;
- (void)_handleApplicationStateMonitorNotificationWithUserInfo:(id)arg1;
- (void)_locked_applicationDidMoveToBackground:(id)arg1;
- (void)_locked_applicationDidMoveToForeground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

