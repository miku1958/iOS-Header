//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol DCAnalyticsReporterAccessibilityDelegate;

@interface DCAnalyticsReporterBase : NSObject
{
    id<DCAnalyticsReporterAccessibilityDelegate> _accessibilityDelegate;
}

@property (weak, nonatomic) id<DCAnalyticsReporterAccessibilityDelegate> accessibilityDelegate; // @synthesize accessibilityDelegate=_accessibilityDelegate;

+ (id)instrumentationKeyForKey:(id)arg1;
+ (double)roundDoubleValue:(double)arg1;
+ (long long)roundIntegerValue:(long long)arg1;
- (void).cxx_destruct;
- (void)addAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forKey:(id)arg2 withSignature:(id)arg3;
- (void)addValue:(long long)arg1 forScalarKey:(id)arg2;
- (id)instrumentationAXKeyForKey:(id)arg1;
- (id)instrumentationKeyForKey:(id)arg1;
- (id)keyForCurrentlyActiveAssistiveTechnology;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2;
- (void)pushValue:(double)arg1 toDistributionKey:(id)arg2 withSignature:(id)arg3;
- (void)setAXVariantValueIfNecessary:(long long)arg1 forKey:(id)arg2;
- (void)setValue:(long long)arg1 forScalarKey:(id)arg2;
- (BOOL)shouldLogKeyForAccessibility:(id)arg1 withSignature:(id)arg2;
- (id)whitelistedKeysForAccessibility;

@end
