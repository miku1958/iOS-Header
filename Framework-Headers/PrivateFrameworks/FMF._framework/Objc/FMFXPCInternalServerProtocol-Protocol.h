//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FMF/FMFXPCServerProtocol-Protocol.h>

@class FMFHandle, NSNumber, NSString;

@protocol FMFXPCInternalServerProtocol <FMFXPCServerProtocol>
- (oneway void)crashDaemon;
- (oneway void)dumpStateWithCompletion:(void (^)(NSDictionary *))arg1;
- (oneway void)exit5XXGracePeriod;
- (oneway void)getDataForPerformanceRequest:(void (^)(NSData *, NSError *))arg1;
- (oneway void)iCloudAccountNameWithCompletion:(void (^)(NSString *))arg1;
- (oneway void)isIn5XXGracePeriodWithCompletion:(void (^)(BOOL))arg1;
- (oneway void)sendIDSPacket:(NSString *)arg1 toHandle:(FMFHandle *)arg2;
- (oneway void)sessionHandleReport:(void (^)(NSDictionary *))arg1;
- (oneway void)setSessionClientPid:(NSNumber *)arg1;
- (oneway void)showMeDeviceAlert;
- (oneway void)showShareMyLocationiCloudSettingsOffAlert;
@end
