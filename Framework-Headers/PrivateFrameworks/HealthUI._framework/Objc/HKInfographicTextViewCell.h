//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UILabel;

@interface HKInfographicTextViewCell : UITableViewCell
{
    UILabel *_descriptionLabel;
    NSLayoutConstraint *_heightConstraint;
}

@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) NSLayoutConstraint *heightConstraint; // @synthesize heightConstraint=_heightConstraint;

- (void).cxx_destruct;
- (id)_descriptionFont;
- (id)_labelWithFont:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
