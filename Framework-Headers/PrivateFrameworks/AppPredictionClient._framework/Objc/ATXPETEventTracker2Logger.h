//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppPredictionClient/ATXPETEventTracker2Protocol-Protocol.h>

@interface ATXPETEventTracker2Logger : NSObject <ATXPETEventTracker2Protocol>
{
}

- (void)logMessage:(id)arg1;
- (void)trackDistributionForMessage:(id)arg1 value:(double)arg2;
- (void)trackScalarForMessage:(id)arg1;
- (void)trackScalarForMessage:(id)arg1 count:(int)arg2;

@end
