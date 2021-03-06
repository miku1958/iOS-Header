//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class GKLeaderboard, GKLeaderboardSet, NSString, UIColor, UIImageView, UILabel, UIView;

@interface GKDashboardLeaderboardCell : UICollectionViewCell
{
    NSString *_bundleIdentifier;
    NSString *_imageName;
    GKLeaderboardSet *_leaderboardSet;
    GKLeaderboard *_leaderboard;
    UIImageView *_iconView;
    UILabel *_titleLabel;
    UILabel *_countLabel;
    UIView *_overlayView;
    UIColor *_titleLabelColor;
}

@property (strong, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (strong, nonatomic) UILabel *countLabel; // @synthesize countLabel=_countLabel;
@property (strong, nonatomic) UIImageView *iconView; // @synthesize iconView=_iconView;
@property (strong, nonatomic) NSString *imageName; // @synthesize imageName=_imageName;
@property (strong, nonatomic) GKLeaderboard *leaderboard; // @synthesize leaderboard=_leaderboard;
@property (strong, nonatomic) GKLeaderboardSet *leaderboardSet; // @synthesize leaderboardSet=_leaderboardSet;
@property (strong, nonatomic) UIView *overlayView; // @synthesize overlayView=_overlayView;
@property (readonly, nonatomic) UIView *popoverSourceView;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIColor *titleLabelColor; // @synthesize titleLabelColor=_titleLabelColor;

- (void).cxx_destruct;
- (void)awakeFromNib;
- (BOOL)canBecomeFocused;
- (void)setHighlighted:(BOOL)arg1;
- (void)setSelected:(BOOL)arg1;
- (void)updateImage;
- (void)updateOverlay;
- (void)updateRank;

@end

