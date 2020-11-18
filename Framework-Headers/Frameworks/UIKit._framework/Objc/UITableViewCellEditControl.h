//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

@class UIImageView, UITableViewCell, _UITableViewCellEditControlMinusView;

__attribute__((visibility("hidden")))
@interface UITableViewCellEditControl : UIControl
{
    UITableViewCell *_cell;
    UIImageView *_imageView;
    _UITableViewCellEditControlMinusView *_minusView;
    UIImageView *_shadowView;
    double _focalY;
    double _focalHeight;
    unsigned int _style:2;
    unsigned int _rotated:1;
    unsigned int _rotating:1;
    unsigned int _reserved:27;
}

@property (nonatomic, getter=isRotated) BOOL rotated;
@property (readonly, nonatomic) BOOL wantsImageShadow;
@property (readonly, nonatomic) BOOL wantsMaskingWhileAnimatingDisabled;

- (void).cxx_destruct;
- (unsigned long long)_controlEventsForActionTriggered;
- (id)_currentImage;
- (id)_deleteImage:(double)arg1;
- (id)_deleteImageBackground:(double)arg1;
- (id)_imageView;
- (id)_insertImage:(double)arg1;
- (struct CGRect)_minusRect;
- (id)_minusView;
- (id)_multiSelectHighlightedImage;
- (id)_multiSelectNotSelectedImage;
- (id)_multiSelectSelectedImage;
- (void)_multiselectColorChanged;
- (id)_shadowImage;
- (void)_toggleRotate;
- (void)_toggleRotateAnimationDidStop:(id)arg1 finished:(BOOL)arg2;
- (void)_updateImageView;
- (void)adjustLayoutForFocalRect:(struct CGRect)arg1;
- (struct CGSize)defaultSize;
- (id)initWithTableViewCell:(id)arg1 editingStyle:(long long)arg2;
- (BOOL)isRotating;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setRotated:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1;

@end

