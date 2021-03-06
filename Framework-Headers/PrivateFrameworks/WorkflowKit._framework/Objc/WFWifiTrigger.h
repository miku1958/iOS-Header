//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowKit/WFTrigger.h>

@class NSArray;

@interface WFWifiTrigger : WFTrigger
{
    NSArray *_selectedNetworks;
    unsigned long long _selection;
}

@property (strong, nonatomic) NSArray *selectedNetworks; // @synthesize selectedNetworks=_selectedNetworks;
@property (nonatomic) unsigned long long selection; // @synthesize selection=_selection;

+ (id)localizedDisplayExplanation;
+ (id)localizedDisplayName;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasValidConfiguration;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)localizedDescriptionWithConfigurationSummary;
- (id)localizedPastTenseDescription;

@end

