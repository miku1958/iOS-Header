//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CLTimer;

@protocol CLTimerScheduler

@property (weak, nonatomic) CLTimer *timer;

- (void)reflectNextFireTime:(double)arg1 fireInterval:(double)arg2;
@end
