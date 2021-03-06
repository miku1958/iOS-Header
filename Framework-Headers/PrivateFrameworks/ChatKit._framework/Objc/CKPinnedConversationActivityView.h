//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKPinnedConversationActivityItemViewDelegate-Protocol.h>

@class CAShapeLayer, CKPinnedConversationActivitySnapshot, NSArray, NSMutableArray, NSString;

@interface CKPinnedConversationActivityView : UIView <CKPinnedConversationActivityItemViewDelegate>
{
    BOOL _suppressingActivity;
    BOOL _showContentAlignmentDebugFrames;
    long long _activityItemOriginationDirection;
    NSMutableArray *_activityItemViews;
    NSMutableArray *_contactItemViews;
    CKPinnedConversationActivitySnapshot *_latestSnapshot;
    CAShapeLayer *_innerContentAlignmentDebugLayer;
    CAShapeLayer *_outerContentAlignmentDebugLayer;
    CAShapeLayer *_activityItemAttachmentCircleDebugLayer;
    CAShapeLayer *_originationPointDebugLayer;
    struct CGPoint _activityItemOriginationPoint;
    struct CGRect _avatarFrame;
    struct CGRect _innerContentAlignmentFrame;
    struct CGRect _outerContentAlignmentFrame;
    struct CGRect _activityItemOriginationSubAvatarFrame;
}

@property (strong, nonatomic) CAShapeLayer *activityItemAttachmentCircleDebugLayer; // @synthesize activityItemAttachmentCircleDebugLayer=_activityItemAttachmentCircleDebugLayer;
@property (nonatomic) long long activityItemOriginationDirection; // @synthesize activityItemOriginationDirection=_activityItemOriginationDirection;
@property (nonatomic) struct CGPoint activityItemOriginationPoint; // @synthesize activityItemOriginationPoint=_activityItemOriginationPoint;
@property (nonatomic) struct CGRect activityItemOriginationSubAvatarFrame; // @synthesize activityItemOriginationSubAvatarFrame=_activityItemOriginationSubAvatarFrame;
@property (strong, nonatomic) NSMutableArray *activityItemViews; // @synthesize activityItemViews=_activityItemViews;
@property (nonatomic) struct CGRect avatarFrame; // @synthesize avatarFrame=_avatarFrame;
@property (strong, nonatomic) NSMutableArray *contactItemViews; // @synthesize contactItemViews=_contactItemViews;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *displayedContacts;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CAShapeLayer *innerContentAlignmentDebugLayer; // @synthesize innerContentAlignmentDebugLayer=_innerContentAlignmentDebugLayer;
@property (nonatomic) struct CGRect innerContentAlignmentFrame; // @synthesize innerContentAlignmentFrame=_innerContentAlignmentFrame;
@property (strong, nonatomic) CKPinnedConversationActivitySnapshot *latestSnapshot; // @synthesize latestSnapshot=_latestSnapshot;
@property (strong, nonatomic) CAShapeLayer *originationPointDebugLayer; // @synthesize originationPointDebugLayer=_originationPointDebugLayer;
@property (strong, nonatomic) CAShapeLayer *outerContentAlignmentDebugLayer; // @synthesize outerContentAlignmentDebugLayer=_outerContentAlignmentDebugLayer;
@property (nonatomic) struct CGRect outerContentAlignmentFrame; // @synthesize outerContentAlignmentFrame=_outerContentAlignmentFrame;
@property (nonatomic) BOOL showContentAlignmentDebugFrames; // @synthesize showContentAlignmentDebugFrames=_showContentAlignmentDebugFrames;
@property (readonly) Class superclass;
@property (nonatomic, getter=isSuppressingActivity) BOOL suppressingActivity; // @synthesize suppressingActivity=_suppressingActivity;

- (void).cxx_destruct;
- (id)_activityItemViewWithActivityItemIdentifier:(id)arg1;
- (struct CGPoint)_convertPointInOwnCoordinateSpace:(struct CGPoint)arg1 toUnscaledCoordinateSpaceOfSubview:(id)arg2;
- (void)_layoutUnattachedContactItemViews:(id)arg1 withContentScale:(id)arg2 applyingTransform:(BOOL)arg3;
- (void)_layoutViewsAssociatedWithActivityItemViews:(id)arg1 excludingContactItemViews:(id)arg2 withContentScale:(id)arg3 applyingTransform:(BOOL)arg4 updatingActivityItemViews:(BOOL)arg5 updatingAttachedContactItemViews:(BOOL)arg6;
- (id)_presentedActivityItems;
- (id)_unattachedContactItemViews;
- (void)_updateSnapshotAnimated:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (double)activityItemAttachmentCircleRadiusInsetForAvatarFrame:(struct CGRect)arg1;
- (void)activityItemViewNeedsResize:(id)arg1;
- (long long)activityViewContentAlignmentForContactItemAlignment:(long long)arg1;
- (void)applySnapshot:(id)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (double)circleXCoordinateForYCoordinate:(double)arg1 radius:(double)arg2 centerPoint:(struct CGPoint)arg3 contentAlignment:(long long)arg4;
- (double)contactItemViewCenterXCoordinateForYCoordinate:(double)arg1 avatarFrame:(struct CGRect)arg2 contentAlignment:(long long)arg3;
- (double)contactItemViewDiameterForAvatarFrame:(struct CGRect)arg1;
- (id)contactItemViewMatchingContactItemIdentifier:(id)arg1 fromContactItemViews:(id)arg2;
- (BOOL)haveAttachedContactItemViewsForActivityViews:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (BOOL)nextContactItemIsClockwiseForOriginationDirection:(long long)arg1 contactItemAlignment:(long long)arg2;
- (struct CGPoint)pointAlongCircle:(struct CGRect)arg1 atArcLength:(double)arg2 fromPoint:(struct CGPoint)arg3 clockwise:(BOOL)arg4;
- (void)resetToEmptySnapshot;
- (void)setSuppressingActivity:(BOOL)arg1 animated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (double)tailAttachmentXCoordinateForYCoordinate:(double)arg1 avatarFrame:(struct CGRect)arg2 contentAlignment:(long long)arg3;

@end

