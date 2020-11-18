//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

#import <ScreenTimeSettingsUI/PSHeaderFooterView-Protocol.h>

@class NSLayoutConstraint, PSSpecifier, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface STSpinnerFooterView : UITableViewHeaderFooterView <PSHeaderFooterView>
{
    PSSpecifier *_specifier;
    UIActivityIndicatorView *_spinnerView;
    NSLayoutConstraint *_spinnerViewVerticalPositionConstraint;
}

@property (readonly, weak) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property (readonly) UIActivityIndicatorView *spinnerView; // @synthesize spinnerView=_spinnerView;
@property (strong) NSLayoutConstraint *spinnerViewVerticalPositionConstraint; // @synthesize spinnerViewVerticalPositionConstraint=_spinnerViewVerticalPositionConstraint;

- (void).cxx_destruct;
- (id)initWithSpecifier:(id)arg1;
- (void)layoutSubviews;
- (double)preferredHeightForWidth:(double)arg1;
- (void)reloadFromSpecifier;
- (void)startAnimatingSpinner;
- (void)stopAnimatingSpinner;

@end
