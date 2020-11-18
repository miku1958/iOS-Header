//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>
#import <UIKit/NSSecureCoding-Protocol.h>

@class _UIBackdropViewSettings, _UIVisualEffectConfig;

@interface UIVisualEffect : NSObject <NSCopying, NSSecureCoding>
{
    _UIVisualEffectConfig *_effectConfig;
}

@property (readonly, nonatomic) BOOL _isATVStyle;
@property (readonly, nonatomic) BOOL _isAutomaticStyle;
@property (readonly, nonatomic) _UIVisualEffectConfig *effectConfig; // @synthesize effectConfig=_effectConfig;
@property (readonly, nonatomic) _UIBackdropViewSettings *effectSettings;

+ (id)effectCombiningEffects:(id)arg1;
+ (id)effectCompositingColor:(id)arg1;
+ (id)effectCompositingColor:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)effectCompositingImage:(id)arg1;
+ (id)effectCompositingImage:(id)arg1 withMode:(long long)arg2 alpha:(double)arg3;
+ (id)emptyEffect;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_enumerateEffects:(CDUnknownBlockType)arg1;
- (long long)_expectedUsage;
- (BOOL)_needsUpdateForOption:(id)arg1;
- (BOOL)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (BOOL)_selectorOverriden:(SEL)arg1;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectConfigForOptions:(id)arg1;
- (id)effectConfigForQuality:(long long)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
