//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FitnessUI/FUAxisDescriptor-Protocol.h>

@class FUDateAnchorRule, NSArray, NSDateComponents, NSMutableArray, NSMutableDictionary, NSString, UIColor, UIFont;

@interface FUTimeAxisDescriptor : NSObject <FUAxisDescriptor>
{
    NSArray *_cachedAxisLabels;
    NSArray *_cachedAxisSubLabels;
    NSMutableArray *_cachedAxisLabelColors;
    NSMutableDictionary *_hourFormatters;
    NSMutableDictionary *_weekdayFormatters;
    NSMutableDictionary *_dayFormatters;
    NSMutableDictionary *_monthFormatters;
    NSMutableDictionary *_yearFormatters;
    BOOL _hideClippedLabels;
    BOOL _generateSubAxisDescriptorOnlyForNoonMidnight;
    BOOL _subAxisCapitalize;
    id _minValue;
    id _maxValue;
    unsigned long long _labelAlignment;
    UIFont *_labelFont;
    UIColor *_highlightedLabelColor;
    UIColor *_unhighlightedLabelColor;
    UIColor *_selectedLabelColor;
    double _axisDescriptorPadding;
    double _subAxisDescriptorPadding;
    UIFont *_subLabelFont;
    UIColor *_highlightedSubLabelColor;
    UIColor *_unhighlightedSubLabelColor;
    unsigned long long _textStyle;
    NSDateComponents *_axisSpacing;
    FUDateAnchorRule *_anchorRule;
    unsigned long long _timeInterval;
    unsigned long long _subTextStyle;
    NSDateComponents *_subAxisSpacing;
    FUDateAnchorRule *_subAnchorRule;
    unsigned long long _subTimeInterval;
    double _subAxisVerticalPadding;
}

@property (strong, nonatomic) FUDateAnchorRule *anchorRule; // @synthesize anchorRule=_anchorRule;
@property (nonatomic) double axisDescriptorPadding; // @synthesize axisDescriptorPadding=_axisDescriptorPadding;
@property (strong, nonatomic) NSDateComponents *axisSpacing; // @synthesize axisSpacing=_axisSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL generateSubAxisDescriptorOnlyForNoonMidnight; // @synthesize generateSubAxisDescriptorOnlyForNoonMidnight=_generateSubAxisDescriptorOnlyForNoonMidnight;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hideClippedLabels; // @synthesize hideClippedLabels=_hideClippedLabels;
@property (strong, nonatomic) UIColor *highlightedLabelColor; // @synthesize highlightedLabelColor=_highlightedLabelColor;
@property (strong, nonatomic) UIColor *highlightedSubLabelColor; // @synthesize highlightedSubLabelColor=_highlightedSubLabelColor;
@property (nonatomic) unsigned long long labelAlignment; // @synthesize labelAlignment=_labelAlignment;
@property (strong, nonatomic) UIFont *labelFont; // @synthesize labelFont=_labelFont;
@property (strong, nonatomic) id maxValue; // @synthesize maxValue=_maxValue;
@property (strong, nonatomic) id minValue; // @synthesize minValue=_minValue;
@property (strong, nonatomic) UIColor *selectedLabelColor; // @synthesize selectedLabelColor=_selectedLabelColor;
@property (strong, nonatomic) FUDateAnchorRule *subAnchorRule; // @synthesize subAnchorRule=_subAnchorRule;
@property (nonatomic) BOOL subAxisCapitalize; // @synthesize subAxisCapitalize=_subAxisCapitalize;
@property (nonatomic) double subAxisDescriptorPadding; // @synthesize subAxisDescriptorPadding=_subAxisDescriptorPadding;
@property (strong, nonatomic) NSDateComponents *subAxisSpacing; // @synthesize subAxisSpacing=_subAxisSpacing;
@property (nonatomic) double subAxisVerticalPadding; // @synthesize subAxisVerticalPadding=_subAxisVerticalPadding;
@property (strong, nonatomic) UIFont *subLabelFont; // @synthesize subLabelFont=_subLabelFont;
@property (nonatomic) unsigned long long subTextStyle; // @synthesize subTextStyle=_subTextStyle;
@property (nonatomic) unsigned long long subTimeInterval; // @synthesize subTimeInterval=_subTimeInterval;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long textStyle; // @synthesize textStyle=_textStyle;
@property (nonatomic) unsigned long long timeInterval; // @synthesize timeInterval=_timeInterval;
@property (strong, nonatomic) UIColor *unhighlightedLabelColor; // @synthesize unhighlightedLabelColor=_unhighlightedLabelColor;
@property (strong, nonatomic) UIColor *unhighlightedSubLabelColor; // @synthesize unhighlightedSubLabelColor=_unhighlightedSubLabelColor;

+ (unsigned long long)_getSpacingInterval:(id)arg1;
- (void).cxx_destruct;
- (BOOL)_assertPropertiesValid;
- (void)_clearCache;
- (void)_clearFormatters;
- (void)_generateAxisLabels;
- (void)_generateAxisSubLabels;
- (id)_getLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (id)_getStartDateFromTimeInterval:(unsigned long long)arg1;
- (id)_getSubLabelsForSpacingInterval:(unsigned long long)arg1 withSpacing:(id)arg2 textStyle:(unsigned long long)arg3;
- (long long)_hourComponentFromDate:(id)arg1;
- (id)_labelAtIndex:(unsigned long long)arg1;
- (id)_newSubLabelFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;
- (id)_stringFromDate:(id)arg1 withTimeInterval:(unsigned long long)arg2 textStyle:(unsigned long long)arg3;
- (id)_subLabelAtIndex:(unsigned long long)arg1;
- (id)axisLabels;
- (id)axisSubLabels;
- (id)dayFormatter:(unsigned long long)arg1;
- (Class)expectedDataType;
- (id)hourFormatter:(unsigned long long)arg1;
- (id)init;
- (void)invalidateCaches;
- (id)monthFormatter:(unsigned long long)arg1;
- (unsigned long long)numLabels;
- (unsigned long long)numSubLabels;
- (id)positionForLabelAtIndex:(unsigned long long)arg1;
- (id)positionForSubLabelAtIndex:(unsigned long long)arg1;
- (void)selectLabel:(BOOL)arg1 atIndex:(unsigned long long)arg2;
- (id)textForLabelAtIndex:(unsigned long long)arg1;
- (id)textForSubLabelAtIndex:(unsigned long long)arg1;
- (id)weekdayFormatter:(unsigned long long)arg1;
- (id)yearFormatter:(unsigned long long)arg1;

@end

