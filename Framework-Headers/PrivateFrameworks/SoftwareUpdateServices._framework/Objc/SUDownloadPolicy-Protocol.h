//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class SUDescriptor;
@protocol SUDownloadPolicy;

@protocol SUDownloadPolicy <NSObject>

@property (nonatomic) int cellularFeeAgreementStatus;
@property (strong, nonatomic) SUDescriptor *descriptor;

- (BOOL)allowExpensiveNetwork;
- (BOOL)hasEnoughDiskSpace;
- (id)initWithDescriptor:(SUDescriptor *)arg1;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isDownloadAllowableForCellular2G;
- (BOOL)isDownloadAllowableForCellularRoaming;
- (BOOL)isDownloadAllowableForWiFi;
- (BOOL)isDownloadFreeForCellular;
- (BOOL)isDownloadable;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(BOOL *)arg2;
- (BOOL)isDownloadableForCurrentNetworkConditions:(long long *)arg1 cellularFeesApply:(BOOL *)arg2 powerRequired:(BOOL *)arg3;
- (BOOL)isPowerRequired;
- (BOOL)isSamePolicy:(id<SUDownloadPolicy>)arg1;
- (unsigned long long)wifiOnlyPeriodInDays;
@end

