//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

__attribute__((visibility("hidden")))
@interface WDClinicalOnboardingRetrievingRecordsMessageCell : UITableViewCell
{
    UILabel *_titleLabel;
    UILabel *_messageLabel;
    NSLayoutConstraint *_bottomLayoutConstraint;
}

@property (strong, nonatomic) NSLayoutConstraint *bottomLayoutConstraint; // @synthesize bottomLayoutConstraint=_bottomLayoutConstraint;
@property (nonatomic) double bottomPadding;
@property (strong, nonatomic) UILabel *messageLabel; // @synthesize messageLabel=_messageLabel;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

