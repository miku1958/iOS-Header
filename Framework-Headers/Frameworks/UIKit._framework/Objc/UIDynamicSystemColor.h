//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIDynamicColor.h>

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIDynamicSystemColor : UIDynamicColor
{
    NSDictionary *_colorsByThemeKey;
}

- (void).cxx_destruct;
- (id)_colorsByThemeKey;
- (id)_resolvedColorWithTraitCollection:(id)arg1;
- (void)_setColorsByThemeKey:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithName:(id)arg1 colorsByThemeKey:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
