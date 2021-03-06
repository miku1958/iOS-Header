//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CNAvatarViewDelegate-Protocol.h>

@class CAFilter, CKAvatarView, CKConversation, CKPinnedConversationActivityView, NSArray, NSMutableArray, NSString, UIImage, UIImageView, UILabel, VNFaceLandmarkRegion2D;
@protocol CKPinnedConversationViewDelegate;

@interface CKPinnedConversationView : UIView <CNAvatarViewDelegate>
{
    BOOL _dimmed;
    BOOL _showsLiveActivity;
    BOOL _preferShortConversationName;
    BOOL _needsUnreadIndicatorLeadingEdgePadding;
    BOOL _isSelectedWithDarkAppearance;
    CKConversation *_conversation;
    NSArray *_recentMessagesInPinnedConversations;
    CKAvatarView *_avatarView;
    UIImage *_avatarSnapshot;
    UILabel *_titleLabel;
    UIImageView *_unreadIndicator;
    UIImageView *_radiantShadowImageView;
    long long _layoutStyle;
    UIView *_activityBoundingParentView;
    double _activityItemTopInset;
    id<CKPinnedConversationViewDelegate> _delegate;
    CAFilter *_dimmingFilter;
    CKPinnedConversationActivityView *_activityView;
    UIImageView *_avatarSnapshotImageView;
    VNFaceLandmarkRegion2D *_avatarMouthRegion;
    NSMutableArray *_activeActivitySuppressionReasons;
}

@property (strong, nonatomic) NSMutableArray *activeActivitySuppressionReasons; // @synthesize activeActivitySuppressionReasons=_activeActivitySuppressionReasons;
@property (weak, nonatomic) UIView *activityBoundingParentView; // @synthesize activityBoundingParentView=_activityBoundingParentView;
@property (nonatomic) long long activityItemOriginationDirection;
@property (nonatomic) double activityItemTopInset; // @synthesize activityItemTopInset=_activityItemTopInset;
@property (strong, nonatomic) CKPinnedConversationActivityView *activityView; // @synthesize activityView=_activityView;
@property (strong, nonatomic) VNFaceLandmarkRegion2D *avatarMouthRegion; // @synthesize avatarMouthRegion=_avatarMouthRegion;
@property (strong, nonatomic) UIImage *avatarSnapshot; // @synthesize avatarSnapshot=_avatarSnapshot;
@property (strong, nonatomic) UIImageView *avatarSnapshotImageView; // @synthesize avatarSnapshotImageView=_avatarSnapshotImageView;
@property (strong, nonatomic) CKAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property (strong, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKPinnedConversationViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isDimmed) BOOL dimmed; // @synthesize dimmed=_dimmed;
@property (strong, nonatomic) CAFilter *dimmingFilter; // @synthesize dimmingFilter=_dimmingFilter;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isSelectedWithDarkAppearance; // @synthesize isSelectedWithDarkAppearance=_isSelectedWithDarkAppearance;
@property (nonatomic) long long layoutStyle; // @synthesize layoutStyle=_layoutStyle;
@property (nonatomic) BOOL needsUnreadIndicatorLeadingEdgePadding; // @synthesize needsUnreadIndicatorLeadingEdgePadding=_needsUnreadIndicatorLeadingEdgePadding;
@property (nonatomic) BOOL preferShortConversationName; // @synthesize preferShortConversationName=_preferShortConversationName;
@property (strong, nonatomic) UIImageView *radiantShadowImageView; // @synthesize radiantShadowImageView=_radiantShadowImageView;
@property (copy, nonatomic) NSArray *recentMessagesInPinnedConversations; // @synthesize recentMessagesInPinnedConversations=_recentMessagesInPinnedConversations;
@property (nonatomic) BOOL showsLiveActivity; // @synthesize showsLiveActivity=_showsLiveActivity;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=isSuppressingActivity) BOOL suppressingActivity;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (strong, nonatomic) UIImageView *unreadIndicator; // @synthesize unreadIndicator=_unreadIndicator;
@property (nonatomic, getter=isUnreadIndicatorHidden) BOOL unreadIndicatorHidden;

+ (id)_cachedMouthRegionForContact:(id)arg1;
+ (void)_determineMouthRegionForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (double)_maximumAvatarViewWidthFittingSize:(struct CGSize)arg1;
+ (id)_mouthRegionDetectionDispatchQueue;
+ (BOOL)_mouthRegionDetectionEnabled;
+ (id)_mouthRegionForContactImageCache;
+ (id)_mouthRegionForContactImageCacheKeyForContact:(id)arg1;
+ (double)_preferredAvatarViewDiameterForLayoutStyle:(long long)arg1;
+ (id)_requiredContactKeys;
+ (void)_updateCachedMouthRegionIfNecessaryForContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (struct UIEdgeInsets)avatarViewPadding;
+ (struct CGSize)avatarViewSizeFittingSize:(struct CGSize)arg1 layoutStyle:(long long)arg2;
+ (struct UIEdgeInsets)titleLabelVerticalPadding;
- (void).cxx_destruct;
- (BOOL)_activityIsSuppressedForLayoutStyle:(long long)arg1;
- (struct CGPoint)_centerPointOfFaceLandmarkRegion:(id)arg1 inImageOfSize:(struct CGSize)arg2;
- (id)_unreadIndicatorColor;
- (id)_unreadIndicatorImage;
- (double)_unreadIndicatorLeadingEdgePadding;
- (void)_updateAvatarMouthRegion;
- (void)_updateAvatarView;
- (void)_updateRadiantShadowAffineTranform;
- (void)_updateRadiantShadowImageView;
- (void)_updateTitleLabel;
- (void)_updateTitleLabelColor;
- (void)_updateTitleLabelFont;
- (void)_updateTitleLabelWithText:(id)arg1;
- (void)_updateUnreadIndicator;
- (struct CGRect)avatarViewFrameForSize:(struct CGSize)arg1 layoutStyle:(long long)arg2;
- (void)beginSuppressingActivityWithReason:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (void)configureAsPrototypeCell;
- (void)contentSizeCategoryChanged:(id)arg1;
- (void)didEndDisplaying;
- (void)didUpdateContentForAvatarView:(id)arg1;
- (void)dimAvatarView;
- (void)endSuppressingActivityWithReason:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)reapplyPreviouslyDisplayedActivitySnapshot:(id)arg1;
- (void)removeDimmingFilter;
- (void)setUnreadIndicatorHidden:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)titleLabelSizeFittingSize:(struct CGSize)arg1;
- (struct NSDirectionalEdgeInsets)unreadIndicatorMinimumPadding;
- (struct NSDirectionalEdgeInsets)unreadIndicatorPreferredPadding;
- (struct CGSize)unreadIndicatorSize;
- (void)updateActivityViewAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;

@end

