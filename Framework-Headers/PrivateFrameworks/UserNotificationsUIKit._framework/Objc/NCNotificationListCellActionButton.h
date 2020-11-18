//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UserNotificationsUIKit/MTMaterialGrouping-Protocol.h>
#import <UserNotificationsUIKit/PLContentSizeCategoryAdjusting-Protocol.h>

@class BSUIFontProvider, MTMaterialView, NCNotificationAction, NSString, UILabel;

@interface NCNotificationListCellActionButton : UIControl <PLContentSizeCategoryAdjusting, MTMaterialGrouping>
{
    BOOL _adjustsFontForContentSizeCategory;
    NSString *_preferredContentSizeCategory;
    NSString *_materialGroupNameBase;
    NCNotificationAction *_notificationAction;
    NSString *_title;
    long long _backgroundMaterialRecipe;
    BSUIFontProvider *_fontProvider;
    UILabel *_titleLabel;
    MTMaterialView *_backgroundView;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory; // @synthesize adjustsFontForContentSizeCategory=_adjustsFontForContentSizeCategory;
@property (nonatomic) long long backgroundMaterialRecipe; // @synthesize backgroundMaterialRecipe=_backgroundMaterialRecipe;
@property (strong, nonatomic) MTMaterialView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic, getter=_fontProvider, setter=_setFontProvider:) BSUIFontProvider *fontProvider; // @synthesize fontProvider=_fontProvider;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *materialGroupNameBase; // @synthesize materialGroupNameBase=_materialGroupNameBase;
@property (strong, nonatomic) NCNotificationAction *notificationAction; // @synthesize notificationAction=_notificationAction;
@property (copy, nonatomic) NSString *preferredContentSizeCategory; // @synthesize preferredContentSizeCategory=_preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;

- (void).cxx_destruct;
- (void)_configureBackgroundViewIfNecessary;
- (void)_configureTitleLabelEffects;
- (void)_configureTitleLabelIfNecessary;
- (void)_handleHoverGestureRecognizerEvent:(id)arg1;
- (void)_highlightButton:(id)arg1;
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
- (void)willMoveToSuperview:(id)arg1;

@end
