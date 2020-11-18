//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/MTContentSizeCategoryAdjusting-Protocol.h>
#import <UserNotificationsUIKit/NCCustomContentContainingLookView-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationContentViewDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationStaticContentAccepting-Protocol.h>
#import <UserNotificationsUIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UserNotificationsUIKit/UIScrollViewDelegate-Protocol.h>

@class MTMaterialView, MTPlatterHeaderContentView, NCKeyLineView, NCNotificationContentView, NSArray, NSDate, NSString, NSTimeZone, UIButton, UIImage, UIInterfaceActionGroupView, UIScrollView, UITapGestureRecognizer;
@protocol NCNotificationLongLookViewDelegate;

@interface NCNotificationLongLookView : UIView <UIGestureRecognizerDelegate, UIScrollViewDelegate, NCNotificationContentViewDelegate, NCNotificationStaticContentAccepting, NCCustomContentContainingLookView, MTContentSizeCategoryAdjusting>
{
    MTPlatterHeaderContentView *_headerContentView;
    UIView *_headerDivider;
    UIView *_contentView;
    UIView *_mainContentView;
    UIView *_topRubberbandingView;
    UIView *_customContentView;
    NCNotificationContentView *_notificationContentView;
    NCKeyLineView *_actionsKeyLineView;
    MTMaterialView *_actionsBackgroundView;
    UIInterfaceActionGroupView *_actionsView;
    UITapGestureRecognizer *_lookViewTapGestureRecognizer;
    BOOL _actionsHidden;
    BOOL _hidesNotificationContent;
    unsigned long long _customContentLocation;
    UIScrollView *_scrollView;
    id<NCNotificationLongLookViewDelegate> _delegate;
    struct CGSize _customContentSize;
}

@property (strong, nonatomic) UIView *accessoryView;
@property (nonatomic, getter=isActionsHidden) BOOL actionsHidden;
@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred;
@property (readonly, nonatomic) struct CGSize contentSizeExcludingActions;
@property (nonatomic) unsigned long long customContentLocation; // @synthesize customContentLocation=_customContentLocation;
@property (nonatomic) struct CGSize customContentSize; // @synthesize customContentSize=_customContentSize;
@property (readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property (copy, nonatomic) NSDate *date;
@property (readonly, nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NCNotificationLongLookViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasShadow;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesNotificationContent; // @synthesize hidesNotificationContent=_hidesNotificationContent;
@property (strong, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIButton *iconButton;
@property (strong, nonatomic) NSArray *interfaceActions;
@property (readonly, nonatomic) UITapGestureRecognizer *lookViewTapGestureRecognizer;
@property (nonatomic) unsigned long long messageNumberOfLines;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (copy, nonatomic) NSString *primarySubtitleText;
@property (copy, nonatomic) NSString *primaryText;
@property (readonly, nonatomic, getter=_scrollView) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (copy, nonatomic) NSString *secondaryText;
@property (readonly, nonatomic) struct CGSize sizeExcludingActions;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIImage *thumbnail;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) UIButton *utilityButton;

- (void).cxx_destruct;
- (struct CGSize)_actionsSizeThatFits:(struct CGSize)arg1 includingPadding:(BOOL)arg2;
- (void)_configureActionViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsBackgroundViewIfNecessaryWithActions:(id)arg1;
- (void)_configureActionsKeyLineViewIfNecessaryWithActions:(id)arg1;
- (void)_configureContentViewIfNecessary;
- (void)_configureCustomContentViewIfNecessary;
- (void)_configureHeaderContentViewIfNecessary;
- (void)_configureLookViewTapGestureRecognizerIfNecessary;
- (void)_configureMainContentViewIfNecessary;
- (void)_configureNotificationContentViewIfNecessary;
- (void)_configureScrollViewIfNecessary;
- (struct CGSize)_contentSizeThatFitsContentWithSizeExcludingActions:(struct CGSize)arg1;
- (void)_layoutActionsView;
- (void)_layoutContentView;
- (void)_layoutCustomContentView;
- (void)_layoutCustomContentViewInRelationToContentView;
- (void)_layoutHeader;
- (void)_layoutMainContentView;
- (void)_layoutNotificationContentView;
- (void)_layoutScrollView;
- (void)_layoutTopRubberbandingView;
- (BOOL)_lookViewTapGestureRecognizerShouldReceiveTouch:(id)arg1;
- (struct CGSize)_sizeThatFitsContentExcludingActionsWithSize:(struct CGSize)arg1;
- (struct CGSize)actionsSizeThatFits:(struct CGSize)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)layoutSubviews;
- (long long)lookStyle;
- (void)notificationContentView:(id)arg1 willInteractWithURL:(id)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (struct CGRect)scrollViewFrame;
- (void)setDateAllDay:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
