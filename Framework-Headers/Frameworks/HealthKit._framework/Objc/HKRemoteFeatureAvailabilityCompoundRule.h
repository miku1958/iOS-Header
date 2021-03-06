//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/HKRemoteFeatureAvailabilityBaseRule.h>

#import <HealthKit/HKRemoteFeatureAvailabilityRule-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface HKRemoteFeatureAvailabilityCompoundRule : HKRemoteFeatureAvailabilityBaseRule <HKRemoteFeatureAvailabilityRule>
{
    NSString *_grouping;
    NSMutableArray *_rules;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *grouping; // @synthesize grouping=_grouping;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *rules; // @synthesize rules=_rules;
@property (readonly) Class superclass;

+ (id)ruleIdentifier;
- (void).cxx_destruct;
- (BOOL)evaluate;
- (void)processUserInfo:(id)arg1;

@end

