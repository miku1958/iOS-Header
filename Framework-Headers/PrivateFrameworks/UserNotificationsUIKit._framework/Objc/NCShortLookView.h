//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UserNotificationsUIKit/NCLookView-Protocol.h>
#import <UserNotificationsUIKit/NCLookViewInternal-Protocol.h>
#import <UserNotificationsUIKit/_UISettingsKeyObserver-Protocol.h>

@class MTMaterialSettings, NCLookHeaderContentView, NSDate, NSString, NSTimeZone, UIButton, UIImage, UIImageView;

@interface NCShortLookView : UIView <NCLookViewInternal, _UISettingsKeyObserver, NCLookView>
{
    UIImageView *_shadowView;
    UIView *_headerContainerView;
    UIView *_headerOverlayView;
    NCLookHeaderContentView *_headerContentView;
    UIView *_mainContainerView;
    UIView *_mainOverlayView;
    UIView *_customContentView;
    MTMaterialSettings *_materialSettings;
    BOOL _banner;
    BOOL _backgroundBlurred;
    BOOL _usesBackgroundView;
    UIView *_backgroundView;
    double _cornerRadius;
}

@property (nonatomic) BOOL adjustsFontForContentSizeCategory;
@property (nonatomic, getter=isBackgroundBlurred) BOOL backgroundBlurred; // @synthesize backgroundBlurred=_backgroundBlurred;
@property (strong, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (nonatomic, getter=isBanner) BOOL banner; // @synthesize banner=_banner;
@property (nonatomic) double cornerRadius; // @synthesize cornerRadius=_cornerRadius;
@property (readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property (copy, nonatomic) NSDate *date;
@property (nonatomic, getter=isDateAllDay) BOOL dateAllDay;
@property (nonatomic) long long dateFormatStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *groupName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *icon;
@property (readonly, nonatomic) UIButton *iconButton;
@property (readonly, nonatomic) long long lookStyle;
@property (copy, nonatomic) NSString *preferredContentSizeCategory;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSTimeZone *timeZone;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL usesBackgroundView; // @synthesize usesBackgroundView=_usesBackgroundView;
@property (readonly, nonatomic) UIButton *utilityButton;

+ (struct CGRect)_shadowImage:(id)arg1 frameForShortLookBounds:(struct CGRect)arg2;
+ (id)_shadowImageMask;
+ (unsigned long long)_styleOptionsForBackgroundWithBlur:(BOOL)arg1;
+ (double)titleInset;
- (void).cxx_destruct;
- (id)_backgroundMaterialView;
- (void)_configureBackgroundView:(id)arg1;
- (void)_configureBackgroundViewIfNecessary;
- (BOOL)_configureCustomContentViewIfNecessary;
- (void)_configureHeaderContainerViewIfNecessary;
- (BOOL)_configureHeaderContentViewIfNecessary;
- (void)_configureHeaderOverlayViewIfNecessary;
- (void)_configureMainContainerViewIfNecessary;
- (void)_configureMainOverlayViewIfNecessary;
- (void)_configureShadowViewIfNecessary;
- (id)_headerContentView;
- (id)_newDefaultBackgroundView;
- (BOOL)adjustForContentSizeCategoryChange;
- (struct CGSize)contentSizeForSize:(struct CGSize)arg1;
- (void)dealloc;
- (BOOL)headerHeedsHorizontalLayoutMargins;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithMaterialSettings:(id)arg1;
- (BOOL)isHeaderHidden;
- (void)layoutSubviews;
- (void)setHeaderHeedsHorizontalLayoutMargins:(BOOL)arg1;
- (void)setHeaderNeedsLayout;
- (void)setUtilityView:(id)arg1;
- (void)settings:(id)arg1 changedValueForKey:(id)arg2;
- (struct CGSize)sizeThatFitsContentWithSize:(struct CGSize)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (id)utilityView;

@end

