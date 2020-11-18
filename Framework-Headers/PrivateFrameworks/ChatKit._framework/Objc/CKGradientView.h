//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray;
@protocol CKGradientReferenceView;

@interface CKGradientView : UIView
{
    UIView<CKGradientReferenceView> *_referenceView;
    NSArray *_colors;
    UIView *_effectView;
    struct CGRect _gradientFrame;
}

@property (strong, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property (strong, nonatomic) UIView *effectView; // @synthesize effectView=_effectView;
@property (nonatomic) struct CGRect gradientFrame; // @synthesize gradientFrame=_gradientFrame;
@property (nonatomic) UIView<CKGradientReferenceView> *referenceView; // @synthesize referenceView=_referenceView;

+ (id)gradientViews;
- (void)_removeAllAnimations:(BOOL)arg1;
- (void)dealloc;
- (id)description;
- (void)didMoveToSuperview;
- (void)didMoveToWindow;
- (id)gradient;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)updateAnimation;
- (void)updateGradientImage;

@end

