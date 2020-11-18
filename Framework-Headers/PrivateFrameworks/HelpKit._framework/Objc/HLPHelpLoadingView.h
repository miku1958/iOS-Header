//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIActivityIndicatorView, UIImageView, UILabel;
@protocol HLPHelpLoadingViewDelegate;

@interface HLPHelpLoadingView : UIView
{
    UIImageView *_errorImageView;
    UIActivityIndicatorView *_activityIndicatorView;
    id<HLPHelpLoadingViewDelegate> _delegate;
    UILabel *_errorTitleLabel;
    UILabel *_errorMessageLabel;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicatorView; // @synthesize activityIndicatorView=_activityIndicatorView;
@property (weak, nonatomic) id<HLPHelpLoadingViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UILabel *errorMessageLabel; // @synthesize errorMessageLabel=_errorMessageLabel;
@property (strong, nonatomic) UILabel *errorTitleLabel; // @synthesize errorTitleLabel=_errorTitleLabel;

- (void).cxx_destruct;
- (id)init;
- (void)removeErrorView;
- (void)showActivityIndicator:(BOOL)arg1;
- (void)showDefaultErrorMessage;
- (void)showErrorWithTitle:(id)arg1 message:(id)arg2;
- (void)showHelpBookInfo;
- (void)showNoConnectionErrorMessage;
- (void)updateFonts;

@end

