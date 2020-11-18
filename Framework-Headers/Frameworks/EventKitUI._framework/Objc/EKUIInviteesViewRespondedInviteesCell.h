//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSArray, NSLayoutConstraint, UIImageView, UILabel;

@interface EKUIInviteesViewRespondedInviteesCell : UITableViewCell
{
    UILabel *_nameLabel;
    UILabel *_commentLabel;
    UIImageView *_participationStatusImageView;
    NSArray *_persistentConstraints;
    NSArray *_removableConstraints;
    NSLayoutConstraint *_minimumHeightConstraint;
    NSLayoutConstraint *_nameBaselineToTopConstraint;
}

@property (strong, nonatomic) UILabel *commentLabel; // @synthesize commentLabel=_commentLabel;
@property (strong, nonatomic) NSLayoutConstraint *minimumHeightConstraint; // @synthesize minimumHeightConstraint=_minimumHeightConstraint;
@property (strong, nonatomic) NSLayoutConstraint *nameBaselineToTopConstraint; // @synthesize nameBaselineToTopConstraint=_nameBaselineToTopConstraint;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UIImageView *participationStatusImageView; // @synthesize participationStatusImageView=_participationStatusImageView;
@property (strong, nonatomic) NSArray *persistentConstraints; // @synthesize persistentConstraints=_persistentConstraints;
@property (strong, nonatomic) NSArray *removableConstraints; // @synthesize removableConstraints=_removableConstraints;

+ (id)_commentLabelFont;
+ (double)_leftTextInset;
+ (id)_nameLabelFont;
- (void).cxx_destruct;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)updateConstraints;
- (void)updateWithParticipantForSorting:(id)arg1;

@end
