//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BKSApplicationStateMonitor, NSArray, NSMutableArray, NanoAppDataProvider;
@protocol NanoAppUsageMonitoring;

@interface NanoAppUsageMonitor : NSObject
{
    NSMutableArray *_recentlyUsedApps;
    BKSApplicationStateMonitor *_appStateMonitor;
    NanoAppDataProvider *_appDataProvider;
    NSObject<NanoAppUsageMonitoring> *_delegate;
}

@property (weak, nonatomic) NanoAppDataProvider *appDataProvider; // @synthesize appDataProvider=_appDataProvider;
@property (weak, nonatomic) NSObject<NanoAppUsageMonitoring> *delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSArray *recentlyUsedApps;

- (void).cxx_destruct;
- (void)_addUsage:(id)arg1;
- (void)_companionAppUsage:(id)arg1 date:(id)arg2;
- (void)_logUsage;
- (id)init;
- (void)start:(CDUnknownBlockType)arg1;

@end
