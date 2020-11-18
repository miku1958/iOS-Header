//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class NSString, UIColor;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectModernVibrancyImpl : _UIVibrancyEffectImpl
{
    NSString *_filterType;
    UIColor *_inputColor1;
    UIColor *_inputColor2;
    UIColor *_compositingColor;
    BOOL _inputReversed;
}

- (void).cxx_destruct;
- (void)_updateEffectDescriptor:(id)arg1 forEnvironment:(id)arg2 usage:(long long)arg3;
- (void)appendDescriptionTo:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithFilter:(id)arg1 inputColor1:(id)arg2 inputColor2:(id)arg3 compositingColor:(id)arg4 inputReversed:(BOOL)arg5;
- (BOOL)isEqual:(id)arg1;

@end

