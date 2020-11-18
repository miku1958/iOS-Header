//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSMutableArray;

@interface MusicNowPlayingTitlesView : UIView
{
    NSMutableArray *_labels;
    NSMutableArray *_marqueeViews;
    BOOL _needsViewUpdate;
    BOOL _marqueeEnabled;
    BOOL _clampLabels;
    NSArray *_attributedTexts;
    struct UIEdgeInsets _contentInset;
    struct UIEdgeInsets _marqueeFadeEdgeInsets;
}

@property (copy, nonatomic) NSArray *attributedTexts; // @synthesize attributedTexts=_attributedTexts;
@property (nonatomic) BOOL clampLabels; // @synthesize clampLabels=_clampLabels;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, nonatomic) double firstBaselineOffsetFromTop;
@property (readonly, nonatomic, getter=isMarqueeEnabled) BOOL marqueeEnabled; // @synthesize marqueeEnabled=_marqueeEnabled;
@property (nonatomic) struct UIEdgeInsets marqueeFadeEdgeInsets; // @synthesize marqueeFadeEdgeInsets=_marqueeFadeEdgeInsets;

- (void).cxx_destruct;
- (void)_applyMarqueeFade;
- (double)_baselineOffsetForAttributedText:(id)arg1 returningFont:(out id *)arg2;
- (void)_layoutLabel:(id)arg1 withMarqueeView:(id)arg2 previousLabelBaselineOffsetFromBottom:(double)arg3 previousMarqueeViewFrame:(struct CGRect)arg4;
- (void)_setupLabel:(inout id *)arg1 marqueeView:(inout id *)arg2 withAttributedText:(id)arg3;
- (void)_updateViewsIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)resetMarqueePosition;
- (void)setMarqueeEnabled:(BOOL)arg1 withOptions:(long long)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
