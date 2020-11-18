//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOCacheManagerBackOffStrategy : NSObject
{
    double _lastSuccess;
    double _lastFailure;
    double _maxTimeInSeconds;
}

+ (id)sharedInstance;
- (double)_unsuccesfulTime;
- (id)init;
- (void)registerFailure;
- (void)registerSuccess;
- (double)secondsToWait;
- (double)timeUntilWhenToWait;

@end
