//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIActivityIndicatorView, UILabel;

__attribute__((visibility("hidden")))
@interface UIPrinterSetupConnectingView : UIView
{
    UILabel *_label;
    UIActivityIndicatorView *_activityIndicator;
    double _presentationTime;
}

@property (strong, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (strong, nonatomic) UILabel *label; // @synthesize label=_label;
@property (nonatomic) double presentationTime; // @synthesize presentationTime=_presentationTime;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)presentView;
- (void)setMessage:(id)arg1 active:(BOOL)arg2;
- (void)willMoveToSuperview:(id)arg1;

@end

