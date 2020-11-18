//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_os_log;

@interface AITransactionLog : NSObject
{
    NSObject<OS_os_log> *_log;
}

+ (id)_defaultLog;
+ (void)initializeWithLog:(id)arg1;
+ (void)logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5;
- (void).cxx_destruct;
- (id)_initWithLog:(id)arg1;
- (void)_logScenario:(id)arg1 step:(unsigned long long)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5;

@end
