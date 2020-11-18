//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class KNAnimationRegistry, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationRegistryWithFallbacks : NSObject
{
    KNAnimationRegistry *mRegistry;
    NSMutableDictionary *mFallbacks;
}

- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)init;
- (void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2;

@end

