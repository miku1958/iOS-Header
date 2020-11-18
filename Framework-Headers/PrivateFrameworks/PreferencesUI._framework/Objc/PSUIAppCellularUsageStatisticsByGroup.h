//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PSAppCellularUsage;

@interface PSUIAppCellularUsageStatisticsByGroup : NSObject
{
    NSMutableArray *_apps;
    NSMutableArray *_internalApps;
    NSMutableArray *_systemServices;
    NSMutableArray *_internalSystemServices;
    NSMutableArray *_uninstalledApps;
    PSAppCellularUsage *_wifiAssist;
}

@property (strong, nonatomic) NSMutableArray *apps; // @synthesize apps=_apps;
@property (strong, nonatomic) NSMutableArray *internalApps; // @synthesize internalApps=_internalApps;
@property (strong, nonatomic) NSMutableArray *internalSystemServices; // @synthesize internalSystemServices=_internalSystemServices;
@property (strong, nonatomic) NSMutableArray *systemServices; // @synthesize systemServices=_systemServices;
@property (strong, nonatomic) NSMutableArray *uninstalledApps; // @synthesize uninstalledApps=_uninstalledApps;
@property (strong, nonatomic) PSAppCellularUsage *wifiAssist; // @synthesize wifiAssist=_wifiAssist;

- (void).cxx_destruct;
- (id)init;

@end

