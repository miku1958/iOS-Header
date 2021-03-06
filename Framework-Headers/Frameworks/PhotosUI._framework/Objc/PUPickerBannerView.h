//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PhotosUI/CAAnimationDelegate-Protocol.h>

@class NSArray, NSString, PUStackView, UILabel;

__attribute__((visibility("hidden")))
@interface PUPickerBannerView : UIView <CAAnimationDelegate>
{
    BOOL __animatingStackView;
    unsigned long long _style;
    NSArray *_images;
    NSString *_title;
    UIView *_leftView;
    UIView *_rightView;
    long long __alignment;
    UILabel *__label;
    PUStackView *__stackView;
    CDUnknownBlockType __animationCompletionHandler;
}

@property (nonatomic, setter=_setAlignment:) long long _alignment; // @synthesize _alignment=__alignment;
@property (nonatomic, setter=_setAnimatingStackView:) BOOL _animatingStackView; // @synthesize _animatingStackView=__animatingStackView;
@property (copy, nonatomic, setter=_setAnimationCompletionHandler:) CDUnknownBlockType _animationCompletionHandler; // @synthesize _animationCompletionHandler=__animationCompletionHandler;
@property (strong, nonatomic, setter=_setLabel:) UILabel *_label; // @synthesize _label=__label;
@property (strong, nonatomic, setter=_setStackView:) PUStackView *_stackView; // @synthesize _stackView=__stackView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *images; // @synthesize images=_images;
@property (strong, nonatomic) UIView *leftView; // @synthesize leftView=_leftView;
@property (strong, nonatomic) UIView *rightView; // @synthesize rightView=_rightView;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (struct CGRect)_frameReversedIfRightToLeft:(BOOL)arg1 frame:(struct CGRect)arg2 bounds:(struct CGRect)arg3;
- (void)_updateAlignment;
- (void)_updateLabel;
- (void)_updateStackView;
- (void)animateImagesOntoView:(id)arg1 inContainerView:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setLeftView:(id)arg1 animated:(BOOL)arg2;
- (void)setRightView:(id)arg1 animated:(BOOL)arg2;

@end

