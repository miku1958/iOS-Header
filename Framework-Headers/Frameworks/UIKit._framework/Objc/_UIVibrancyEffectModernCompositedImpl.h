//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernCompositedImpl : _UIVibrancyEffectImpl
{
    long long _compositingMode;
    NSString *_filterType;
    UIColor *_compositingColor;
}

- (void).cxx_destruct;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCompositingMode:(long long)arg1 compositingColor:(id)arg2;

@end

