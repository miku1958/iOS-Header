//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface GKReporter : NSObject
{
}

+ (id)reporter;
- (void)_nativeReport:(id)arg1 signature:(id)arg2 result:(BOOL *)arg3;
- (void)_nativeReportDistributionValue:(id)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)_nativeReportValue:(long long)arg1 signature:(id)arg2 domain:(id)arg3;
- (void)report:(id)arg1;
- (void)report:(id)arg1 signature:(id)arg2;
- (void)report:(id)arg1 signature:(id)arg2 result:(BOOL)arg3;
- (void)reportDistributionValue:(id)arg1 domain:(id)arg2;
- (void)reportValue:(long long)arg1 domain:(id)arg2;

@end

