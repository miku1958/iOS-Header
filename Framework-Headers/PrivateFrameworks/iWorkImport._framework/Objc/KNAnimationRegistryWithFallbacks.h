//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class KNAnimationRegistry, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface KNAnimationRegistryWithFallbacks : NSObject
{
    KNAnimationRegistry *_registry;
    NSMutableDictionary *_fallbacks;
}

- (void).cxx_destruct;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)init;
- (void)registerFallbackEffectIdentifer:(id)arg1 forEffectIdentifer:(id)arg2;

@end

