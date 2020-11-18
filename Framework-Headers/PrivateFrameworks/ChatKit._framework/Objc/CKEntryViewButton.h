//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/_UICursorInteractionDelegate-Protocol.h>

@class NSString, UIButton, UIVisualEffectView;

@interface CKEntryViewButton : UIView <_UICursorInteractionDelegate>
{
    BOOL _ckTintColor;
    BOOL _wantsVibrancy;
    UIButton *_button;
    long long _entryViewButtonType;
    UIVisualEffectView *_vibrancyView;
}

@property (strong, nonatomic) UIButton *button; // @synthesize button=_button;
@property (nonatomic) BOOL ckTintColor; // @synthesize ckTintColor=_ckTintColor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) long long entryViewButtonType; // @synthesize entryViewButtonType=_entryViewButtonType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIVisualEffectView *vibrancyView; // @synthesize vibrancyView=_vibrancyView;
@property (nonatomic) BOOL wantsVibrancy; // @synthesize wantsVibrancy=_wantsVibrancy;

+ (id)entryViewButtonImageForType:(long long)arg1;
+ (id)entryViewButtonImageForType:(long long)arg1 color:(BOOL)arg2;
+ (id)entryViewButtonImageWithName:(id)arg1 tintColor:(BOOL)arg2 shouldSuppressHairline:(BOOL)arg3;
+ (id)entryViewButtonOfType:(long long)arg1;
+ (id)entryViewButtonOfType:(long long)arg1 wantsVibrancy:(BOOL)arg2;
+ (id)imageNameForEntryViewButtonType:(long long)arg1;
+ (id)overlayImageForImageNamed:(id)arg1 tintColor:(BOOL)arg2;
+ (void)prewarmEntryViewButtons;
- (void).cxx_destruct;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1 wantsVibrancy:(BOOL)arg2;
- (BOOL)isEnabled;
- (void)layoutSubviews;
- (void)setDefaultImage;
- (void)setEnabled:(BOOL)arg1;
- (void)setTintedImageForButtonType:(long long)arg1 tintColor:(BOOL)arg2;

@end
