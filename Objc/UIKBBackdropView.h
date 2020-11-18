//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIBackdropView.h>

@class NSMutableArray, UIImage;

__attribute__((visibility("hidden")))
@interface UIKBBackdropView : _UIBackdropView
{
    BOOL _primaryBackdrop;
    NSMutableArray *_secondaryBackdrops;
    BOOL _hasUpdatedFrame;
    UIImage *_imageForCorners;
}

@property (readonly, nonatomic) BOOL _hasUpdatedFrame; // @synthesize _hasUpdatedFrame;
@property (strong, nonatomic) UIImage *imageForCorners; // @synthesize imageForCorners=_imageForCorners;

+ (void)_registerSecondaryBackdropView:(id)arg1;
+ (void)_unregisterSecondaryBackdropView:(id)arg1;
+ (void)_updatedSecondaryBackdropsWithSettings:(id)arg1;
+ (void)overlayRelevantSettings:(id)arg1 ontoSettings:(id)arg2;
+ (id)triggerNotificationNames;
+ (id)unconditionalTriggerNotificationNames;
- (id)_generateCornerContentsImage:(int)arg1;
- (void)_setRenderConfig:(id)arg1;
- (void)applySettings:(id)arg1;
- (void)dealloc;
- (void)didCallRenderInContextOnBackdropViewLayer;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 primaryBackdrop:(BOOL)arg3;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)arg1;
- (void)triggerUpdate:(id)arg1;
- (void)updateFrame:(struct CGRect)arg1 withCorners:(int)arg2;
- (void)willCallRenderInContextOnBackdropViewLayer;

@end

