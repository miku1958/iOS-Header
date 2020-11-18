//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAMFilterScrubberView, PUApertureSlider;

@interface CAMUtilityBar : UIView
{
    CAMFilterScrubberView *_filterScrubberView;
    PUApertureSlider *_apertureSlider;
    unsigned long long _visibleContent;
}

@property (strong, nonatomic) PUApertureSlider *apertureSlider; // @synthesize apertureSlider=_apertureSlider;
@property (strong, nonatomic) CAMFilterScrubberView *filterScrubberView; // @synthesize filterScrubberView=_filterScrubberView;
@property (nonatomic) unsigned long long visibleContent; // @synthesize visibleContent=_visibleContent;

- (void).cxx_destruct;
- (void)_layoutFilterScrubberView;
- (void)_layoutPortraitApertureSlider;
- (void)_updateVisibilityForUpdatedContent:(unsigned long long)arg1 contentView:(id)arg2;
- (void)_updateVisibleViewAnimated:(BOOL)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)setVisibleContent:(unsigned long long)arg1 animated:(BOOL)arg2;

@end

