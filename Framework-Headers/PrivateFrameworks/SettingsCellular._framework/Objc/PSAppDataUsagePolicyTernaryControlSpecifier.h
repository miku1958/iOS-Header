//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SettingsCellular/PSAppCellularUsageSpecifier.h>

@class NSString;

@interface PSAppDataUsagePolicyTernaryControlSpecifier : PSAppCellularUsageSpecifier
{
    BOOL _fullyInitialized;
    NSString *_displayName;
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;

- (void).cxx_destruct;
- (id)cellularUsagePolicy;
- (void)finishInitializing:(unsigned long long)arg1;
- (id)initWithBundleID:(id)arg1 displayName:(id)arg2 statisticsCache:(id)arg3;
- (void)setCellularUsagePolicy:(id)arg1;

@end

