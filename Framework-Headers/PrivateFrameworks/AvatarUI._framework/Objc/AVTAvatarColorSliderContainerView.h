//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <AvatarUI/AVTColorSliderDelegate-Protocol.h>

@class AVTAvatarAttributeEditorSectionColorItem, AVTColorSlider, NSArray;
@protocol AVTAvatarColorSliderContainerViewDelegate;

@interface AVTAvatarColorSliderContainerView : UIView <AVTColorSliderDelegate>
{
    AVTAvatarAttributeEditorSectionColorItem *_sectionItem;
    id<AVTAvatarColorSliderContainerViewDelegate> _delegate;
    AVTColorSlider *_slider;
    NSArray *_layoutConstraints;
}

@property (weak, nonatomic) id<AVTAvatarColorSliderContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSArray *layoutConstraints; // @synthesize layoutConstraints=_layoutConstraints;
@property (strong, nonatomic) AVTAvatarAttributeEditorSectionColorItem *sectionItem; // @synthesize sectionItem=_sectionItem;
@property (strong, nonatomic) AVTColorSlider *slider; // @synthesize slider=_slider;

- (void).cxx_destruct;
- (void)colorSlider:(id)arg1 didFinishSelectingValue:(double)arg2;
- (void)colorSlider:(id)arg1 valueChanged:(double)arg2;
- (id)initWithFrame:(struct CGRect)arg1 userInterfaceLayoutDirection:(long long)arg2;
- (void)layoutSubviews;
- (void)setSectionItem:(id)arg1 animated:(BOOL)arg2;
- (void)updateSliderTrackLayerAnimated:(BOOL)arg1;
- (void)updateSliderWithColorPreset:(id)arg1 animated:(BOOL)arg2;

@end

