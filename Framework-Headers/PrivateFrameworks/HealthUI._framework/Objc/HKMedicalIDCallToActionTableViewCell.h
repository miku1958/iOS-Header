//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIButton, UILabel;

@interface HKMedicalIDCallToActionTableViewCell : UITableViewCell
{
    UILabel *_callToActionLabel;
    UIButton *_actionButton;
}

@property (strong, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property (strong, nonatomic) UILabel *callToActionLabel; // @synthesize callToActionLabel=_callToActionLabel;

+ (id)defaultReuseIdentifier;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)setupConstraints;
- (void)setupSubviews;

@end

