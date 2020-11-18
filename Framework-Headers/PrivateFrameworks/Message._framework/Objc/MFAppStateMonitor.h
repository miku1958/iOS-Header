//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, EFObservable;
@protocol EFObserver, OS_dispatch_queue;

@interface MFAppStateMonitor : NSObject
{
    unsigned int _appState;
    BKSApplicationStateMonitor *_appStateMonitor;
    NSObject<OS_dispatch_queue> *_queue;
    EFObservable<EFObserver> *_observable;
}

@property (readonly, nonatomic) EFObservable *appStateObservable;
@property (readonly, nonatomic, getter=isForeground) BOOL foreground;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_updateApplicationState:(id)arg1 observer:(id)arg2;
- (void)dealloc;
- (id)initWithBundleId:(id)arg1;

@end
