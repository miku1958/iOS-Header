//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface FBAppLibraryLogger : NSObject
{
    NSObject<OS_os_log> *_aggregateLog;
}

+ (id)sharedInstance;
- (id)init;
- (void)logToAggregateInstallationLog:(unsigned long long)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 bundleID:(id)arg4 description:(id)arg5;

@end

