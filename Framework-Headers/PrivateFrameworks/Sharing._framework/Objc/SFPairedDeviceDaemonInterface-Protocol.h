//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Sharing/SDXPCDaemonProtocol-Protocol.h>

@class NSDate, NSDictionary, NSString;

@protocol SFPairedDeviceDaemonInterface <SDXPCDaemonProtocol>
- (void)requestToShowChargingUIWithHandler:(void (^)(NSDate *, NSError *))arg1;
- (void)sendDashboardEntryWithName:(NSString *)arg1 dict:(NSDictionary *)arg2;
- (void)sendUICoordinationDate:(NSDate *)arg1;
- (void)sendUISyncDate:(NSDate *)arg1;
@end

