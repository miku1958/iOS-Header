//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffect.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface _UICompoundEffect : UIVisualEffect
{
    NSArray *_effects;
}

- (void).cxx_destruct;
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;
- (long long)_expectedUsage;
- (BOOL)_needsUpdateForOption:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffects:(id)arg1;

@end
