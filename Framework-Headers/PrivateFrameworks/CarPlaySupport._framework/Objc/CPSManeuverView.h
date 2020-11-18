//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlaySupport/CPSInheritedBackgroundColorView.h>

@class CPManeuver, CPTravelEstimates;

@interface CPSManeuverView : CPSInheritedBackgroundColorView
{
    BOOL _minimalMode;
    CPManeuver *_representedManeuver;
    long long _style;
    CPTravelEstimates *_currentTravelEstimates;
}

@property (strong, nonatomic) CPTravelEstimates *currentTravelEstimates; // @synthesize currentTravelEstimates=_currentTravelEstimates;
@property (readonly, nonatomic, getter=isMinimalMode) BOOL minimalMode; // @synthesize minimalMode=_minimalMode;
@property (readonly, nonatomic) CPManeuver *representedManeuver; // @synthesize representedManeuver=_representedManeuver;
@property (nonatomic) long long style; // @synthesize style=_style;

- (void).cxx_destruct;
- (id)initWithManeuver:(id)arg1 minimalMode:(BOOL)arg2 style:(long long)arg3;

@end

