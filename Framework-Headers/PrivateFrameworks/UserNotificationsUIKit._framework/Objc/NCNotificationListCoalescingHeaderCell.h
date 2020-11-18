//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import <UserNotificationsUIKit/NCLegibilitySettingsAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsHandler-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationListCoalescingControlsViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class NCNotificationListCoalescingControlsView, NCNotificationListHeaderTitleView, NSString, _UILegibilitySettings;
@protocol NCNotificationListCoalescingControlsHandlerDelegate;

@interface NCNotificationListCoalescingHeaderCell : UICollectionViewCell <NCNotificationListCoalescingControlsViewDelegate, NCLegibilitySettingsAdjusting, PLContentSizeCategoryAdjusting, NCNotificationListCoalescingControlsHandler>
{
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_coalescingIdentifier;
    unsigned long long _groupingSection;
    id<NCNotificationListCoalescingControlsHandlerDelegate> _handlerDelegate;
    NSString *_title;
    NSString *_backgroundGroupName;
    NCNotificationListCoalescingControlsView *_coalescingControlsView;
    NCNotificationListHeaderTitleView *_headerTitleView;
    _UILegibilitySettings *_legibilitySettings;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property (strong, nonatomic) NCNotificationListCoalescingControlsView *coalescingControlsView; // @synthesize coalescingControlsView=_coalescingControlsView;
@property (copy, nonatomic) NSString *coalescingIdentifier; // @synthesize coalescingIdentifier=_coalescingIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long groupingSection; // @synthesize groupingSection=_groupingSection;
@property (weak, nonatomic) id<NCNotificationListCoalescingControlsHandlerDelegate> handlerDelegate; // @synthesize handlerDelegate=_handlerDelegate;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCNotificationListHeaderTitleView *headerTitleView; // @synthesize headerTitleView=_headerTitleView;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (struct CGSize)_coalescingControlsViewPreferredSize;
+ (void)_contentSizeCategoryDidChange:(id)arg1;
+ (double)coalescingHeaderCellHeightForWidth:(double)arg1 title:(id)arg2;
+ (void)initialize;
- (void).cxx_destruct;
- (struct CGRect)_coalescingControlsViewFrameForBounds:(struct CGRect)arg1;
- (void)_configureCoalescingControlsViewIfNecessary;
- (void)_configureHeaderTitleViewIfNecessary;
- (void)_layoutCoalescingControlsView;
- (void)_layoutHeaderTitleView;
- (BOOL)adjustForContentSizeCategoryChange;
- (void)adjustForLegibilitySettingsChange:(id)arg1;
- (id)containerViewForCoalescingControlsPreviewInteractionPresentedContent:(id)arg1;
- (BOOL)dismissModalFullScreenIfNeeded;
- (void)layoutSubviews;
- (void)notificationListCoalescingControlsView:(id)arg1 didTransitionToClearState:(BOOL)arg2;
- (void)notificationListCoalescingControlsViewDidBeginPreviewInteraction:(id)arg1;
- (void)notificationListCoalescingControlsViewDidDismissPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewDidPresentPreviewInteractionPresentedContent:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClear:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsClearAll:(id)arg1;
- (void)notificationListCoalescingControlsViewRequestsRestack:(id)arg1;
- (void)prepareForReuse;
- (void)resetClearButtonStateAnimated:(BOOL)arg1;
- (BOOL)shouldReceiveTouchAtPointInWindowSpace:(struct CGPoint)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end

