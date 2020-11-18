//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

@class NSArray;

@interface HUQuickControlStepperViewProfile : HUQuickControlViewProfile
{
    BOOL _showSegmentTitles;
    unsigned long long _numberOfSegments;
    unsigned long long _stepperBehavior;
    NSArray *_segmentTitles;
}

@property (nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
@property (copy, nonatomic) NSArray *segmentTitles; // @synthesize segmentTitles=_segmentTitles;
@property (nonatomic) BOOL showSegmentTitles; // @synthesize showSegmentTitles=_showSegmentTitles;
@property (nonatomic) unsigned long long stepperBehavior; // @synthesize stepperBehavior=_stepperBehavior;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)percentageValueForViewValue:(id)arg1;
- (id)viewValueForPercentageValue:(double)arg1 round:(BOOL)arg2;

@end
