//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicAppDefinedColor : UIDynamicColor
{
    NSDictionary *_colorsByThemeKey;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_generateColorsByTraitCollection;
- (id)_initWithColorsByThemeKey:(id)arg1;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithColorsByTraitCollection:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
