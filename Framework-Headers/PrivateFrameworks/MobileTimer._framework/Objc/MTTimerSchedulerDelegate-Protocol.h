//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileTimer/NSObject-Protocol.h>

@class MTScheduledObject, MTTimer, MTTimerScheduler;

@protocol MTTimerSchedulerDelegate <NSObject>
- (void)scheduler:(MTTimerScheduler *)arg1 didChangeNextTimer:(MTTimer *)arg2;
- (void)scheduler:(MTTimerScheduler *)arg1 didFireTimer:(MTScheduledObject *)arg2;
@end
