//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthHearingDaemon/NSObject-Protocol.h>

@class NSDate, NSNumber;

@protocol HKHeadphoneAudioExposureControlServer <NSObject>
- (void)remote_fetchDoseLimitWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)remote_fetchInfoWithCompletion:(void (^)(NSString *, NSError *))arg1;
- (void)remote_insertQuantityWithExposure:(double)arg1 duration:(double)arg2 startDate:(NSDate *)arg3 includesNotificationSample:(BOOL)arg4 synced:(BOOL)arg5 completion:(void (^)(BOOL, NSError *))arg6;
- (void)remote_overrideDoseLimit:(NSNumber *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_rebuildWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end

