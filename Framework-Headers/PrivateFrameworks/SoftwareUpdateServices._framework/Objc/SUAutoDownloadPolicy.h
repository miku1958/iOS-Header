//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUDefaultDownloadPolicy.h>

@interface SUAutoDownloadPolicy : SUDefaultDownloadPolicy
{
}

- (id)computeTimeOfWifiOnlyPeriodEndFromDate:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (BOOL)isDownloadAllowableForCellular;
- (BOOL)isPowerRequired;
- (unsigned long long)wifiOnlyPeriodInDays;

@end

