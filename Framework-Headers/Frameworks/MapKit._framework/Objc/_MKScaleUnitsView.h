//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSDictionary, NSMapTable, NSMutableArray, NSMutableDictionary, NSNumberFormatter, NSString;

__attribute__((visibility("hidden")))
@interface _MKScaleUnitsView : UIView
{
    BOOL _useLightText;
    double _segmentLengthInPixels;
    double _unitsWidth;
    double _justUnitsWidth;
    NSDictionary *_legendAttributes;
    NSMutableArray *_strings;
    NSString *_legendBaseString;
    NSString *_unitsString;
    NSString *_unpaddedUnitsString;
    NSMapTable *_legendStringWidthCache;
    NSMutableDictionary *_legendStringForDistanceStringCache;
    NSNumberFormatter *_floatNumberFormatter;
    NSString *_zeroUnitsString;
    BOOL _RTL;
}

@property (nonatomic, getter=isRTL) BOOL RTL; // @synthesize RTL=_RTL;
@property (strong, nonatomic) NSNumberFormatter *floatNumberFormatter; // @synthesize floatNumberFormatter=_floatNumberFormatter;
@property (strong, nonatomic) NSString *legendBaseString; // @synthesize legendBaseString=_legendBaseString;
@property (nonatomic) double segmentLengthInPixels; // @dynamic segmentLengthInPixels;
@property (strong, nonatomic) NSString *unitsString; // @synthesize unitsString=_unitsString;
@property (readonly, nonatomic) double unitsWidth; // @synthesize unitsWidth=_unitsWidth;
@property (copy, nonatomic) NSString *unpaddedUnitsString; // @synthesize unpaddedUnitsString=_unpaddedUnitsString;
@property (nonatomic) BOOL useLightText; // @dynamic useLightText;
@property (readonly, nonatomic) NSString *zeroUnitsString; // @synthesize zeroUnitsString=_zeroUnitsString;

- (void).cxx_destruct;
- (void)_calculateLegend:(BOOL)arg1;
- (id)_legendStringForDistanceString:(id)arg1 appendUnits:(BOOL)arg2 index:(int)arg3;
- (id)_uncachedLegendStringsForDistanceString:(id)arg1;
- (double)_widthForString:(id)arg1 attributes:(id)arg2;
- (BOOL)canDisplaySegment:(unsigned long long)arg1;
- (void)clearCaches:(id)arg1;
- (id)init;
- (void)setUnits:(id)arg1;

@end

