//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CalDeviceLockObserver;

@interface CDBDataProtectionObserver : NSObject
{
    CDUnknownBlockType _stateChangedCallback;
    CalDeviceLockObserver *_deviceLockObserver;
}

@property (readonly, nonatomic) BOOL dataIsAccessible;
@property (strong, nonatomic) CalDeviceLockObserver *deviceLockObserver; // @synthesize deviceLockObserver=_deviceLockObserver;
@property (copy, nonatomic) CDUnknownBlockType stateChangedCallback; // @synthesize stateChangedCallback=_stateChangedCallback;

+ (id)stateChangedNotificationName;
- (void).cxx_destruct;
- (void)_deviceLockStateChanged;
- (id)init;

@end

