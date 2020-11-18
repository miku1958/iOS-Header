//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <PhotosUICore/PXGReusableView-Protocol.h>
#import <PhotosUICore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, PXCuratedLibraryOverlayButtonConfiguration, UIImageView, UILabel, UIPointerInteraction, UIView, UIVisualEffectView;

@interface PXCuratedLibraryOverlayButton : UIControl <UIPointerInteractionDelegate, PXGReusableView>
{
    PXCuratedLibraryOverlayButtonConfiguration *_userData;
    UIPointerInteraction *_pointerInteraction;
    UIVisualEffectView *_effectView;
    UIView *_contentView;
    UIView *_solidBackgroundView;
    UIImageView *_iconImageView;
    UILabel *_titleLabel;
    UILabel *_captionLabel;
    NSString *_axLabel;
    struct CGRect _clippingRect;
}

@property (strong, nonatomic) NSString *axLabel; // @synthesize axLabel=_axLabel;
@property (strong, nonatomic) UILabel *captionLabel; // @synthesize captionLabel=_captionLabel;
@property (nonatomic) struct CGRect clippingRect; // @synthesize clippingRect=_clippingRect;
@property (strong, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property (strong, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property (strong, nonatomic) UIView *solidBackgroundView; // @synthesize solidBackgroundView=_solidBackgroundView;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property (copy, nonatomic) PXCuratedLibraryOverlayButtonConfiguration *userData; // @synthesize userData=_userData;

+ (void)_getSize:(out struct CGSize *)arg1 titleFrame:(out struct CGRect *)arg2 captionFrame:(out struct CGRect *)arg3 iconFrame:(out struct CGRect *)arg4 forConfiguration:(id)arg5 title:(id)arg6;
+ (struct CGSize)_sizeOfTitle:(id)arg1 withFont:(id)arg2;
+ (id)buttonSizeCache;
+ (id)defaultTitleColor;
+ (id)defaultTitleFont;
+ (id)roundedCornerMaskImage:(CDStruct_2bd92d94)arg1 size:(struct CGSize)arg2;
+ (struct CGSize)sizeWithConfiguration:(id)arg1;
+ (id)titleSizeCache;
- (void).cxx_destruct;
- (void)_performAction:(id)arg1;
- (void)_platformSpecificViewSetup;
- (void)_setupViews;
- (void)_updateBackgroundView;
- (void)_updateButtonWithConfiguration:(id)arg1;
- (void)_updateEffectView;
- (void)_updateEffectViewBackgroundStyle;
- (void)becomeReusable;
- (BOOL)canBecomeFocused;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
