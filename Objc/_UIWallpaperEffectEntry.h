//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVisualEffectViewEntry.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIWallpaperEffectEntry : _UIVisualEffectViewEntry
{
    UIColor *_backgroundColor;
}

@property (strong) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;

- (void).cxx_destruct;
- (void)addEffectToView:(id)arg1;
- (void)applyIdentityEffectToView:(id)arg1;
- (void)applyRequestedEffectToView:(id)arg1;
- (BOOL)canTransitionToEffect:(id)arg1;
- (BOOL)isSameTypeOfEffect:(id)arg1;

@end

