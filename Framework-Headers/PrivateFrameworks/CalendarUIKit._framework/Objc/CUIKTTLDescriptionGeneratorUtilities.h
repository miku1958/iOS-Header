//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface CUIKTTLDescriptionGeneratorUtilities : NSObject
{
}

+ (id)descriptionForType:(unsigned long long)arg1;
+ (BOOL)ttlDescriptionShouldIncludeTrafficForHypothesis:(id)arg1;
+ (BOOL)ttlDescriptionShouldIncludeTrafficForHypothesisThatSupportsLiveTraffic:(BOOL)arg1 transportType:(int)arg2 eta:(double)arg3;
+ (unsigned long long)ttlDescriptionTypeForDate:(id)arg1 hypothesis:(id)arg2;

@end
