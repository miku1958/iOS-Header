//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UserNotificationsUIKit/MTContentSizeCategoryAdjusting-Protocol.h>

@class MTFontProvider, MTMaterialView, NCNotificationAction, NSString, UILabel, UIView;

@interface NCNotificationListCellActionButton : UIControl <MTContentSizeCategoryAdjusting>
{
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
    NCNotificationAction *_notificationAction;
    NSString *_title;
    NSString *_backgroundGroupName;
    MTFontProvider *_fontProvider;
    UILabel *_titleLabel;
    MTMaterialView *_backgroundView;
    MTMaterialView *_backgroundOverlayView;
    UIView *_backgroundHighlightView;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (copy, nonatomic) NSString *backgroundGroupName; // @synthesize backgroundGroupName=_backgroundGroupName;
@property (strong, nonatomic) UIView *backgroundHighlightView; // @synthesize backgroundHighlightView=_backgroundHighlightView;
@property (strong, nonatomic) MTMaterialView *backgroundOverlayView; // @synthesize backgroundOverlayView=_backgroundOverlayView;
@property (strong, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, getter=_fontProvider, setter=_setFontProvider:) MTFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NCNotificationAction *notificationAction; // @synthesize notificationAction=_notificationAction;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_configureBackgroundHighlightViewIfNecessary;
- (void)_configureBackgroundOverlayViewIfNecessary;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureTitleLabelIfNecessary;
- (void)_highlightButton:(id)arg1;
- (void)_layoutBackgroundHighlightView;
- (void)_layoutBackgroundOverlayView;
- (void)_layoutBackgroundView;
- (void)_layoutTitleLabel;
- (void)_unHighlightButton:(id)arg1;
- (void)_updateTitleLabelFont;
- (long long)_wordCountForText:(id)arg1;
- (BOOL)adjustForContentSizeCategoryChange;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;

@end
