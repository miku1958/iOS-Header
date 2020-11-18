//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface UITableViewIndex : UIControl
{
    NSArray *_titles;
    UIFont *_font;
    long long _selectedSection;
    BOOL _pastTop;
    BOOL _pastBottom;
    struct CGSize _cachedSize;
    struct CGSize _cachedSizeToFit;
    UIColor *_indexColor;
    UIColor *_indexBackgroundColor;
    UIColor *_indexTrackingBackgroundColor;
    double _topPadding;
    double _bottomPadding;
    double _verticalTextHeightEstimate;
    NSArray *_entries;
    long long _idiom;
}

@property (strong, nonatomic) UIFont *font;
@property (strong, nonatomic) UIColor *indexBackgroundColor;
@property (strong, nonatomic) UIColor *indexColor;
@property (strong, nonatomic) UIColor *indexTrackingBackgroundColor;
@property (readonly, nonatomic) BOOL pastBottom; // @synthesize pastBottom=_pastBottom;
@property (readonly, nonatomic) BOOL pastTop; // @synthesize pastTop=_pastTop;
@property (readonly, nonatomic) long long selectedSection; // @synthesize selectedSection=_selectedSection;
@property (readonly, nonatomic) NSString *selectedSectionTitle;
@property (strong, nonatomic) NSArray *titles;

- (void).cxx_destruct;
- (void)_cacheAndMeasureTitles;
- (id)_displayTitles;
- (id)_dotImage;
- (id)_externalDotImage;
- (id)_fontForIdiom:(long long)arg1;
- (long long)_idiom;
- (double)_minLineSpacingForIdiom:(long long)arg1;
- (void)_setIdiom:(long long)arg1;
- (BOOL)_updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
- (struct CGRect)_visibleBoundsForRect:(struct CGRect)arg1 stride:(double *)arg2;
- (void)_willChangeToIdiom:(long long)arg1 onScreen:(id)arg2;
- (BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (BOOL)canBecomeFocused;
- (void)cancelTrackingWithEvent:(id)arg1;
- (BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (unsigned long long)maximumNumberOfTitlesWithoutTruncationForHeight:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)tintColorDidChange;

@end

