//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellular/PSAppDataUsagePolicySwitchSpecifier.h>

__attribute__((visibility("hidden")))
@interface PSUIWiFiAssistSwitchSpecifier : PSAppDataUsagePolicySwitchSpecifier
{
}

+ (BOOL)shouldShowWifiAssist;
+ (id)wifiAssistGroupSpecifier;
- (id)cellularUsagePolicy;
- (unsigned long long)dataUsage;
- (id)initDefault;
- (void)setCellularUsagePolicy:(id)arg1;

@end

