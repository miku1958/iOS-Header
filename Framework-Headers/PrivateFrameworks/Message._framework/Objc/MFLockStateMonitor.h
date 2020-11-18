//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MFObservable;
@protocol MFObserver, OS_dispatch_queue;

@interface MFLockStateMonitor : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _token;
    MFObservable<MFObserver> *_observable;
    BOOL _isLocked;
}

@property (readonly, nonatomic) MFObservable *lockStateObservable;
@property (readonly, getter=isLocked) BOOL locked;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_receiveLockState:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end
