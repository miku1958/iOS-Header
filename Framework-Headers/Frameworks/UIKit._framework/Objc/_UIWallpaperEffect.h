//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class UIColor;

@interface _UIWallpaperEffect : UIVisualEffect
{
    UIColor *_color;
}

+ (id)wallpaperEffectWithStyle:(long long)arg1;
- (void).cxx_destruct;
- (long long)_expectedUsage;
- (id)_initWithStyle:(long long)arg1;
- (BOOL)_needsUpdateForTransitionFromEnvironment:(id)arg1 toEnvironment:(id)arg2 usage:(long long)arg3;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (id)description;
- (BOOL)isEqual:(id)arg1;

@end
