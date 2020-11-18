//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class CKContainerID, CKOperation, HMBCloudDatabase, HMBCloudZoneID, NAFuture, NSDictionary, NSError;

@protocol HMBCloudDatabaseDelegate <NSObject>

@optional
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didChangeManateeKeysForZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didCreateZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didReceiveMessageWithUserInfo:(NSDictionary *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 didRemoveZoneWithID:(HMBCloudZoneID *)arg2;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 encounteredError:(NSError *)arg2 withOperation:(CKOperation *)arg3 onContainer:(CKContainerID *)arg4;
- (void)cloudDatabase:(HMBCloudDatabase *)arg1 encounteredError:(NSError *)arg2 withOperation:(CKOperation *)arg3 onZone:(HMBCloudZoneID *)arg4;
- (NAFuture *)cloudDatabase:(HMBCloudDatabase *)arg1 willRemoveZoneWithID:(HMBCloudZoneID *)arg2;
@end
