//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@interface WFPredictedLocationTransitionTrigger : WFTrigger
{
    unsigned long long _destinationType;
    unsigned long long _minutesBefore;
}

@property (nonatomic) unsigned long long destinationType; // @synthesize destinationType=_destinationType;
@property (nonatomic) unsigned long long minutesBefore; // @synthesize minutesBefore=_minutesBefore;

+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasValidConfiguration;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end

