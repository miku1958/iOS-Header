//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCKeyValueStoreSavePolicy : NSObject
{
}

+ (id)appBackgroundPolicyWithActivityMonitor:(id)arg1 backgroundTaskable:(id)arg2;
+ (id)defaultPolicy;
+ (id)throttlePolicyWithDelay:(double)arg1;
- (void)scheduleSaveOnQueue:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end
