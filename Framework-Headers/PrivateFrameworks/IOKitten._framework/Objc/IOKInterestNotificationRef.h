//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class IOKInterestNotification;

@interface IOKInterestNotificationRef : NSObject
{
    struct os_unfair_recursive_lock_s _lock;
    IOKInterestNotification *_notification;
}

@property (nonatomic) IOKInterestNotification *notification; // @synthesize notification=_notification;

- (id)init;
- (void)lock;
- (void)unlock;

@end
