//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CNAvatarViewController, NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UIView, UIVisualEffectView;

@interface TPFavoritesEntryCell : UICollectionViewCell
{
    BOOL _contentViewLoaded;
    BOOL _contentViewLayoutConstraintsLoaded;
    UIView *_avatarContentView;
    UILabel *_contactNameLabel;
    UIImage *_transportImage;
    UILabel *_transportNameLabel;
    NSString *_actionType;
    CNAvatarViewController *_avatarViewController;
    UIImageView *_transportImageView;
    UIView *_transportView;
    UIVisualEffectView *_primaryVisualEffectView;
    UIVisualEffectView *_secondaryVisualEffectView;
    NSLayoutConstraint *_avatarContentViewHeightLayoutConstraint;
    NSLayoutConstraint *_avatarContentViewWidthLayoutConstraint;
    NSLayoutConstraint *_contactNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint *_transportNameLabelBaselineLayoutConstraint;
    NSLayoutConstraint *_transportNameLabelLeadingLayoutConstraint;
}

@property (copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property (readonly, nonatomic) UIView *avatarContentView; // @synthesize avatarContentView=_avatarContentView;
@property (strong, nonatomic) NSLayoutConstraint *avatarContentViewHeightLayoutConstraint; // @synthesize avatarContentViewHeightLayoutConstraint=_avatarContentViewHeightLayoutConstraint;
@property (readonly, nonatomic) double avatarContentViewHeightLayoutConstraintConstant;
@property (strong, nonatomic) NSLayoutConstraint *avatarContentViewWidthLayoutConstraint; // @synthesize avatarContentViewWidthLayoutConstraint=_avatarContentViewWidthLayoutConstraint;
@property (readonly, nonatomic) double avatarContentViewWidthLayoutConstraintConstant;
@property (strong, nonatomic) CNAvatarViewController *avatarViewController; // @synthesize avatarViewController=_avatarViewController;
@property (strong, nonatomic) UILabel *contactNameLabel; // @synthesize contactNameLabel=_contactNameLabel;
@property (strong, nonatomic) NSLayoutConstraint *contactNameLabelBaselineLayoutConstraint; // @synthesize contactNameLabelBaselineLayoutConstraint=_contactNameLabelBaselineLayoutConstraint;
@property (readonly, nonatomic) double contactNameLabelBaselineLayoutConstraintConstant;
@property (nonatomic, getter=isContentViewLayoutConstraintsLoaded) BOOL contentViewLayoutConstraintsLoaded; // @synthesize contentViewLayoutConstraintsLoaded=_contentViewLayoutConstraintsLoaded;
@property (nonatomic, getter=isContentViewLoaded) BOOL contentViewLoaded; // @synthesize contentViewLoaded=_contentViewLoaded;
@property (strong, nonatomic) UIVisualEffectView *primaryVisualEffectView; // @synthesize primaryVisualEffectView=_primaryVisualEffectView;
@property (strong, nonatomic) UIVisualEffectView *secondaryVisualEffectView; // @synthesize secondaryVisualEffectView=_secondaryVisualEffectView;
@property (strong, nonatomic) UIImage *transportImage; // @synthesize transportImage=_transportImage;
@property (strong, nonatomic) UIImageView *transportImageView; // @synthesize transportImageView=_transportImageView;
@property (strong, nonatomic) UILabel *transportNameLabel; // @synthesize transportNameLabel=_transportNameLabel;
@property (strong, nonatomic) NSLayoutConstraint *transportNameLabelBaselineLayoutConstraint; // @synthesize transportNameLabelBaselineLayoutConstraint=_transportNameLabelBaselineLayoutConstraint;
@property (readonly, nonatomic) double transportNameLabelBaselineLayoutConstraintConstant;
@property (strong, nonatomic) NSLayoutConstraint *transportNameLabelLeadingLayoutConstraint; // @synthesize transportNameLabelLeadingLayoutConstraint=_transportNameLabelLeadingLayoutConstraint;
@property (readonly, nonatomic) double transportNameLabelLeadingLayoutConstraintConstant;
@property (strong, nonatomic) UIView *transportView; // @synthesize transportView=_transportView;

+ (id)imageForActionType:(id)arg1;
+ (BOOL)requiresConstraintBasedLayout;
+ (id)reuseIdentifier;
- (void).cxx_destruct;
- (void)commonInit;
- (void)dealloc;
- (void)handleContentSizeCategoryDidChangeNotification:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)loadContentView;
- (void)loadContentViewLayoutConstraints;
- (void)updateConstraints;
- (void)updateConstraintsConstants;
- (void)updateFonts;

@end

