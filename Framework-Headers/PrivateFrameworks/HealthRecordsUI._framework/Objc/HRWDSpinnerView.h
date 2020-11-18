//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface HRWDSpinnerView : UIView
{
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
}

@property (readonly, nonatomic, getter=isAnimating) BOOL animating;

- (void).cxx_destruct;
- (void)_setupSubviews;
- (id)init;
- (void)setMessageWhileSpinning:(id)arg1;
- (void)startSpinner;
- (void)stopSpinner;

@end
