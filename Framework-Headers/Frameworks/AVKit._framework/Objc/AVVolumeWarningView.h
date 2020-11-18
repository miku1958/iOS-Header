//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIViewPropertyAnimator;

__attribute__((visibility("hidden")))
@interface AVVolumeWarningView : UIView
{
    BOOL _stopping;
    UIViewPropertyAnimator *_animator;
}

@property (strong, nonatomic) UIViewPropertyAnimator *animator; // @synthesize animator=_animator;
@property (nonatomic, getter=isStopping) BOOL stopping; // @synthesize stopping=_stopping;

- (void).cxx_destruct;
- (void)continueAnimating;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)startAnimating;
- (void)stopAnimatingAndRemoveFromSuperview;

@end
