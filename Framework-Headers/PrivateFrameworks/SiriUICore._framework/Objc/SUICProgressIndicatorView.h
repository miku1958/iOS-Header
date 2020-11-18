//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, _SUICCheckGlyphLayer, _SUICProgressRingLayer, _SUICRingLayer;

@interface SUICProgressIndicatorView : UIView
{
    _SUICRingLayer *_shadowRingLayer;
    _SUICProgressRingLayer *_progressRingLayer;
    _SUICCheckGlyphLayer *_checkGlyphLayer;
    UIImageView *_actionArrowImageView;
}

@property (nonatomic, getter=isArrowVisible) BOOL arrowVisible;
@property (nonatomic, getter=isCheckmarkVisible) BOOL checkmarkVisible;
@property (nonatomic, getter=isDarkened) BOOL darkened;
@property (nonatomic) double progressValue;
@property (nonatomic, getter=isSpinning) BOOL spinning;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSublayersOfLayer:(id)arg1;
- (void)layoutSubviews;
- (void)setArrowVisible:(BOOL)arg1 delay:(double)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setCheckmarkVisible:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setDarkened:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setProgressValue:(double)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;

@end

