//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class MISSING_TYPE, NSString;

@interface HRContentStatusView : UIView
{
    MISSING_TYPE *titleLabel;
    MISSING_TYPE *subtitleLabel;
    MISSING_TYPE *spinnerView;
    MISSING_TYPE *title;
    MISSING_TYPE *subtitle;
}

@property (nonatomic, copy) NSString *subtitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2;
- (void)layoutSubviews;
- (void)startAnimating;
- (void)stopAnimating;
- (void)traitCollectionDidChange:(id)arg1;

@end
