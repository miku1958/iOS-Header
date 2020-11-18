//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GKDashboardPlayerPhotoView, GKMultiplayerParticipant, NSLayoutConstraint, UILabel, UIView;

@interface GKMultiplayerCollectionViewCell : UICollectionViewCell
{
    BOOL _removable;
    GKMultiplayerParticipant *_participant;
    long long _number;
    UILabel *_nameLabel;
    UILabel *_statusLabel;
    UIView *_accessoryContainerView;
    GKDashboardPlayerPhotoView *_iconView;
    NSLayoutConstraint *_cellLeadingConstraint;
    NSLayoutConstraint *_nameLabelBaselineConstraintToCenterLine;
    NSLayoutConstraint *_statusLabelTopConstraintToNameBaseline;
    NSLayoutConstraint *_statusLabelBaselineConstraintToNameBaseline;
    NSLayoutConstraint *_nameLabelCenterlineConstraintToCenterline;
}

@property (strong, nonatomic) UIView *accessoryContainerView; // @synthesize accessoryContainerView=_accessoryContainerView;
@property (strong, nonatomic) NSLayoutConstraint *cellLeadingConstraint; // @synthesize cellLeadingConstraint=_cellLeadingConstraint;
@property (strong, nonatomic) GKDashboardPlayerPhotoView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) NSLayoutConstraint *nameLabelBaselineConstraintToCenterLine; // @synthesize nameLabelBaselineConstraintToCenterLine=_nameLabelBaselineConstraintToCenterLine;
@property (strong, nonatomic) NSLayoutConstraint *nameLabelCenterlineConstraintToCenterline; // @synthesize nameLabelCenterlineConstraintToCenterline=_nameLabelCenterlineConstraintToCenterline;
@property (nonatomic) long long number; // @synthesize number=_number;
@property (copy, nonatomic) GKMultiplayerParticipant *participant; // @synthesize participant=_participant;
@property (nonatomic) BOOL removable; // @synthesize removable=_removable;
@property (strong, nonatomic) UILabel *statusLabel; // @synthesize statusLabel=_statusLabel;
@property (strong, nonatomic) NSLayoutConstraint *statusLabelBaselineConstraintToNameBaseline; // @synthesize statusLabelBaselineConstraintToNameBaseline=_statusLabelBaselineConstraintToNameBaseline;
@property (strong, nonatomic) NSLayoutConstraint *statusLabelTopConstraintToNameBaseline; // @synthesize statusLabelTopConstraintToNameBaseline=_statusLabelTopConstraintToNameBaseline;

+ (id)reuseIdentifier;
- (void)awakeFromNib;
- (void)configureConstraintsForCurrentTraitCollection;
- (void)dealloc;
- (id)description;
- (void)participantChanged;
- (void)prepareForReuse;
- (void)removeAccessorySubviews;
- (void)traitCollectionDidChange:(id)arg1;
- (void)updateAccessoryViewForType:(long long)arg1;

@end
