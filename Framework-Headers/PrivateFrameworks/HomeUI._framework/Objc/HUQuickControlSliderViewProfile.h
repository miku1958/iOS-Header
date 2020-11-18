//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUQuickControlViewProfile.h>

#import <HomeUI/HUQuickControlIncrementalConvertibleProfile-Protocol.h>

@class NSString;

@interface HUQuickControlSliderViewProfile : HUQuickControlViewProfile <HUQuickControlIncrementalConvertibleProfile>
{
    BOOL _hasSecondaryValue;
    BOOL _hasOffState;
    double _stepValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasOffState; // @synthesize hasOffState=_hasOffState;
@property (nonatomic) BOOL hasSecondaryValue; // @synthesize hasSecondaryValue=_hasSecondaryValue;
@property (readonly) unsigned long long hash;
@property (nonatomic) double stepValue; // @synthesize stepValue=_stepValue;
@property (readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (double)percentageValueForViewValue:(id)arg1;
- (id)viewValueForPercentageValue:(double)arg1 round:(BOOL)arg2;

@end

