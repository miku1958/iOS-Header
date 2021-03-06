//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, PRXLabel, UIActivityIndicatorView;

@interface PRXActivityStatusView : UIView
{
    PRXLabel *_statusLabel;
    UIActivityIndicatorView *_activityIndicator;
    NSLayoutConstraint *_activityIndicatorVerticalConstraint;
}

@property (readonly, nonatomic) UIActivityIndicatorView *activityIndicator; // @synthesize activityIndicator=_activityIndicator;
@property (readonly, nonatomic) NSLayoutConstraint *activityIndicatorVerticalConstraint; // @synthesize activityIndicatorVerticalConstraint=_activityIndicatorVerticalConstraint;
@property (readonly, nonatomic) PRXLabel *statusLabel; // @synthesize statusLabel=_statusLabel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

