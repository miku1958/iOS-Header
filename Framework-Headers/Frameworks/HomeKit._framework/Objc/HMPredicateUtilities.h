//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface HMPredicateUtilities : NSObject
{
}

+ (BOOL)areOnlyHourAndMinuteSet:(id)arg1;
+ (id)bitwiseAndValueWithKeyPath:(id)arg1 inComparisonPredicate:(id)arg2 validValues:(long long)arg3;
+ (id)bitwiseAndValueWithKeyPath:(id)arg1 inPredicate:(id)arg2 validValues:(long long)arg3;
+ (BOOL)containsPresenceEvents:(id)arg1;
+ (id)personFamiliarityOptionsInComparisonPredicate:(id)arg1;
+ (id)rewritePredicateForClient:(id)arg1 home:(id)arg2;
+ (id)rewritePredicateForDaemon:(id)arg1 characteristicIsInvalid:(BOOL *)arg2;
+ (id)significantEventTypesInComparisonPredicate:(id)arg1;
+ (BOOL)validatePredicate:(id)arg1;

@end
