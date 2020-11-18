//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class NSLayoutConstraint, UIImage, UIView;

@interface MPUArtworkView : UIImageView
{
    NSLayoutConstraint *_aspectConstraint;
    UIImage *_externalImage;
    UIView *_highlightView;
    BOOL _isDeallocating;
    BOOL _automaticallyApplyAspectConstraints;
    BOOL _dimsWhenHighlighted;
    BOOL _forcesAnimatedUnhighlighting;
    BOOL _displayingPlaceholder;
    UIImage *_placeholderImage;
}

@property (readonly, nonatomic) UIImage *_externalImage; // @synthesize _externalImage;
@property (nonatomic, getter=_aspectConstraintMultiplier, setter=_setAspectConstraintMultiplier:) double aspectConstraintMultiplier;
@property (nonatomic) BOOL automaticallyApplyAspectConstraints; // @synthesize automaticallyApplyAspectConstraints=_automaticallyApplyAspectConstraints;
@property (nonatomic) BOOL dimsWhenHighlighted; // @synthesize dimsWhenHighlighted=_dimsWhenHighlighted;
@property (nonatomic, getter=isDisplayingPlaceholder) BOOL displayingPlaceholder; // @synthesize displayingPlaceholder=_displayingPlaceholder;
@property (nonatomic) BOOL forcesAnimatedUnhighlighting; // @synthesize forcesAnimatedUnhighlighting=_forcesAnimatedUnhighlighting;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (readonly, nonatomic) BOOL shouldDisplayPlaceholder;

- (void).cxx_destruct;
- (void)_imageDidChange;
- (void)_setPlaceholderHidden:(BOOL)arg1;
- (BOOL)_shouldShowHighlightView;
- (void)_updateHighlightViewAnimated:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithImage:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setHighlightedAnimationImages:(id)arg1;
- (void)setHighlightedImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)startAnimating;
- (void)stopAnimating;
- (void)updateConstraints;

@end

