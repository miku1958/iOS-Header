//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MTMaterialView, NCMaterialButton, UIButton;

@interface NCMediaPlayPauseButton : UIControl
{
    long long _type;
    NCMaterialButton *_button;
    UIButton *_invisibleButton;
    MTMaterialView *_backgroundCircle;
}

@property (strong, nonatomic) MTMaterialView *backgroundCircle; // @synthesize backgroundCircle=_backgroundCircle;
@property (strong, nonatomic) NCMaterialButton *button; // @synthesize button=_button;
@property (strong, nonatomic) UIButton *invisibleButton; // @synthesize invisibleButton=_invisibleButton;
@property (nonatomic) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)_buttonTouchUpInside:(id)arg1;
- (void)_updateBackground;
- (void)_updateBackgroundForAudioStyle;
- (void)_updateBackgroundForMovieStyle;
- (void)_updateSelected;
- (void)_updateSelectedForAudioStyle;
- (void)_updateSelectedForMovieStyle;
- (void)_updateSize;
- (void)_updateSizeForAudioStyle;
- (void)_updateSizeForMovieStyle;
- (void)_updateStyle;
- (void)_updateStyleForAudioStyle;
- (void)_updateStyleForMovieStyle;
- (void)_updateType;
- (id)initWithFrame:(struct CGRect)arg1 type:(long long)arg2;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)tintColorDidChange;

@end

