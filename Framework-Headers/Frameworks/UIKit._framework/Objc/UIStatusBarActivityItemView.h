//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIStatusBarItemView.h>

@class UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface UIStatusBarActivityItemView : UIStatusBarItemView
{
    UIActivityIndicatorView *_activityIndicator;
    UIActivityIndicatorView *_accessibilityHUDIndicator;
    BOOL _slowActivity;
    BOOL _syncActivity;
}

- (void).cxx_destruct;
- (long long)_activityIndicatorStyle;
- (void)_startAnimating;
- (void)_stopAnimating;
- (id)accessibilityHUDRepresentation;
- (void)setVisible:(BOOL)arg1;
- (double)shadowPadding;
- (double)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;

@end

