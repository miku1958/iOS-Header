//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKFeatureAvailabilityBaseRule.h>

#import <HealthKit/HKFeatureAvailabilityRule-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface HKFeatureAvailabilityWatchModelNumberHasPrefixRule : HKFeatureAvailabilityBaseRule <HKFeatureAvailabilityRule>
{
    NSString *_modelNumberPrefix;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *modelNumberPrefix; // @synthesize modelNumberPrefix=_modelNumberPrefix;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)processUserInfo:(id)arg1;

@end

