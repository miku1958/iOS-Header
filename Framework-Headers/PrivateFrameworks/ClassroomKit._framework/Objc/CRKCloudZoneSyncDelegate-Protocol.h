//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class CRKCloudRemoteDelta, CRKCloudZoneSyncEngine, NSError;

@protocol CRKCloudZoneSyncDelegate
- (void)didReceiveCloudError:(NSError *)arg1 fromZoneSyncEngine:(CRKCloudZoneSyncEngine *)arg2;
- (void)processRemoteDelta:(CRKCloudRemoteDelta *)arg1 fromZoneSyncEngine:(CRKCloudZoneSyncEngine *)arg2;
@end

