//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturb/NSObject-Protocol.h>

@class DNDBehaviorSettings, DNDBypassSettings, DNDRequestDetails, DNDScheduleSettings;

@protocol DNDRemoteServiceServerSettingsProtocol <NSObject>
- (void)getBehaviorSettingsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDBehaviorSettings *, NSError *))arg2;
- (void)getPhoneCallBypassSettingsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDBypassSettings *, NSError *))arg2;
- (void)getScheduleSettingsWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(DNDScheduleSettings *, NSError *))arg2;
- (void)registerForSettingsUpdatesWithRequestDetails:(DNDRequestDetails *)arg1 completionHandler:(void (^)(BOOL, NSError *))arg2;
- (void)setBehaviorSettings:(DNDBehaviorSettings *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)setPhoneCallBypassSettings:(DNDBypassSettings *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
- (void)setScheduleSettings:(DNDScheduleSettings *)arg1 withRequestDetails:(DNDRequestDetails *)arg2 completionHandler:(void (^)(BOOL, NSError *))arg3;
@end

