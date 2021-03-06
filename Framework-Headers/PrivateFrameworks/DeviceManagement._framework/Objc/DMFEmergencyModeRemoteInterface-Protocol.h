//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/NSObject-Protocol.h>

@protocol DMFEmergencyModeRemoteInterface <NSObject>
- (void)disableEmergencyModeWithCompletionHandler:(void (^)(NSError *))arg1;
- (void)emergencyModeStatusWithCompletionHandler:(void (^)(NSNumber *, NSError *))arg1;
- (void)enableEmergencyModeForDuration:(double)arg1 withCompletionHandler:(void (^)(NSError *))arg2;
- (void)enableEmergencyModeWithCompletionHandler:(void (^)(NSError *))arg1;
@end

