//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoard/SBAWDMetricData.h>

@class NSArray, NSString, NSUUID;

@interface SBPressSequenceMetricData : SBAWDMetricData
{
    BOOL _didTriggerSOS;
    NSString *_pressName;
    NSArray *_pressSequence;
    unsigned long long _clickMax;
    NSUUID *_sosTriggerUUID;
}

@property (nonatomic) unsigned long long clickMax; // @synthesize clickMax=_clickMax;
@property (nonatomic) BOOL didTriggerSOS; // @synthesize didTriggerSOS=_didTriggerSOS;
@property (copy, nonatomic) NSString *pressName; // @synthesize pressName=_pressName;
@property (copy, nonatomic) NSArray *pressSequence; // @synthesize pressSequence=_pressSequence;
@property (copy, nonatomic) NSUUID *sosTriggerUUID; // @synthesize sosTriggerUUID=_sosTriggerUUID;

- (void).cxx_destruct;

@end
