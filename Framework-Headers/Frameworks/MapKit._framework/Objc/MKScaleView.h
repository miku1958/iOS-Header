//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString, UIColor, _MKScaleUnitsView;

@interface MKScaleView : UIView
{
    double _distanceInMeters;
    BOOL _useMetric;
    BOOL _useYardsForShortDistances;
    NSNumberFormatter *_floatNumberFormatter;
    double _magicNumbers[3];
    UIColor *_lightSegmentColorRegular;
    UIColor *_darkSegmentColorRegular;
    UIColor *_borderColorRegular;
    UIColor *_lightSegmentColorSatellite;
    UIColor *_darkSegmentColorSatellite;
    UIColor *_borderColorSatellite;
    NSMutableArray *_segments;
    _MKScaleUnitsView *_unitsView;
    long long _oldNumberOfSegments;
    UIView *_outlineViewA;
    UIView *_outlineViewB;
    UIView *_displayedOutline;
    double _segmentLengthInPixels;
    double _resultSegmentLength;
    double _resultSegmentLengthInMeters;
    NSMutableDictionary *_formattedNumberCache;
    NSString *_feetAbbreviation;
    NSString *_yardAbbreviation;
    NSString *_milesAbbreviation;
    NSString *_metersAbbreviation;
    NSString *_kilometersAbbreviation;
    long long _grQuality;
    int _layoutCounter;
    BOOL _useLightText;
}

@property (nonatomic) double distanceInMeters; // @dynamic distanceInMeters;
@property (nonatomic) BOOL useLightText; // @dynamic useLightText;

- (void).cxx_destruct;
- (void)_calculateSegments;
- (id)_formattedStringForFloat:(double)arg1;
- (void)_localizedDistanceStringsWithMeters:(unsigned int)arg1 imperial:(double)arg2 useFeet:(BOOL)arg3 inMetric:(BOOL)arg4 displaysYardsForShortDistances:(BOOL)arg5 strings:(id)arg6;
- (id)_scaleViewFormattedStringForFloat:(double)arg1;
- (id)_scaleViewFormattedStringForInteger:(long long)arg1;
- (void)_updateSegmentStrokes;
- (void)_updateStrings;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)init;
- (void)layoutSubviews;
- (void)memoryWarning:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updateLocale:(id)arg1;

@end
