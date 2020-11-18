//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKPinnedConversationActivityItemView-Protocol.h>

@class CAShapeLayer, CKPinnedConversationActivityItemViewBackdropLayer, CKPinnedConversationActivityItemViewShadowLayer;
@protocol CKPinnedConversationActivityItem, CKPinnedConversationActivityItemViewDelegate;

@interface CKPinnedConversationTailedActivityItemView : UIView <CKPinnedConversationActivityItemView>
{
    id<CKPinnedConversationActivityItem> _activityItem;
    long long _originationDirection;
    long long _originationHorizontalDirection;
    double _preferredTailAttachmentPointXCoordinate;
    id<CKPinnedConversationActivityItemViewDelegate> _activityItemViewDelegate;
    long long _activityItemViewContentScale;
    UIView *_contentView;
    double _pillCornerRadius;
    CKPinnedConversationActivityItemViewBackdropLayer *_backdropLayer;
    CAShapeLayer *_backdropMaskShapeLayer;
    CKPinnedConversationActivityItemViewShadowLayer *_broadShadowLayer;
    CKPinnedConversationActivityItemViewShadowLayer *_tightShadowLayer;
    CAShapeLayer *_contentViewStrokeLayer;
    struct CGPoint _originationPoint;
    struct CGSize _parentAvatarViewSize;
}

@property (strong, nonatomic) id<CKPinnedConversationActivityItem> activityItem; // @synthesize activityItem=_activityItem;
@property (nonatomic) long long activityItemViewContentScale; // @synthesize activityItemViewContentScale=_activityItemViewContentScale;
@property (weak, nonatomic) id<CKPinnedConversationActivityItemViewDelegate> activityItemViewDelegate; // @synthesize activityItemViewDelegate=_activityItemViewDelegate;
@property (strong, nonatomic) CKPinnedConversationActivityItemViewBackdropLayer *backdropLayer; // @synthesize backdropLayer=_backdropLayer;
@property (strong, nonatomic) CAShapeLayer *backdropMaskShapeLayer; // @synthesize backdropMaskShapeLayer=_backdropMaskShapeLayer;
@property (strong, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *broadShadowLayer; // @synthesize broadShadowLayer=_broadShadowLayer;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, nonatomic) long long contentViewContentMode;
@property (readonly, nonatomic) double contentViewHorizontalInsetForPillCornerRadius;
@property (readonly, nonatomic) struct UIEdgeInsets contentViewPadding;
@property (strong, nonatomic) CAShapeLayer *contentViewStrokeLayer; // @synthesize contentViewStrokeLayer=_contentViewStrokeLayer;
@property (nonatomic) long long originationDirection; // @synthesize originationDirection=_originationDirection;
@property (nonatomic) long long originationHorizontalDirection; // @synthesize originationHorizontalDirection=_originationHorizontalDirection;
@property (nonatomic) struct CGPoint originationPoint; // @synthesize originationPoint=_originationPoint;
@property (nonatomic) struct CGSize parentAvatarViewSize; // @synthesize parentAvatarViewSize=_parentAvatarViewSize;
@property (readonly, nonatomic) double pillCornerRadius; // @synthesize pillCornerRadius=_pillCornerRadius;
@property (nonatomic) double preferredTailAttachmentPointXCoordinate; // @synthesize preferredTailAttachmentPointXCoordinate=_preferredTailAttachmentPointXCoordinate;
@property (readonly, nonatomic) BOOL supportsActivityItemViewContentScale;
@property (readonly, nonatomic) BOOL supportsAlignmentWithOriginationSubAvatarFrame;
@property (readonly, nonatomic) struct CGPoint tailAttachmentPoint;
@property (strong, nonatomic) CKPinnedConversationActivityItemViewShadowLayer *tightShadowLayer; // @synthesize tightShadowLayer=_tightShadowLayer;

- (void).cxx_destruct;
- (id)_pathForTailedBalloonSegmentWithStartPoint:(struct CGPoint)arg1 endPoint:(struct CGPoint)arg2 anchorPoint:(struct CGPoint)arg3 originationHorizontalDirection:(long long)arg4 originationDirection:(long long)arg5;
- (void)_updateUserInterfaceStyles;
- (double)activityItemToContactItemVerticalOverlap;
- (double)balloonCornerRadius;
- (double)balloonTailHeight;
- (double)balloonTailRadius;
- (double)balloonTailWidth;
- (id)initWithActivityItem:(id)arg1 contentView:(id)arg2 needsContentViewStroke:(BOOL)arg3;
- (void)layoutSubviews;
- (struct CGRect)pillRect;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGPoint)tailAttachmentPointWithOutputForMinimumContinousAnchorX:(double *)arg1 maximumContinuousAnchorX:(double *)arg2;
- (void)traitCollectionDidChange:(id)arg1;

@end
