//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UIBarItemAppearanceStorage.h>

@class NSMutableDictionary, UIColor;

__attribute__((visibility("hidden")))
@interface _UITabBarItemAppearanceStorage : _UIBarItemAppearanceStorage
{
    NSMutableDictionary *_badgeTextAttributesForState;
    UIColor *_badgeColor;
    struct UIOffset _titleOffset;
}

@property (copy, nonatomic) UIColor *badgeColor; // @synthesize badgeColor=_badgeColor;
@property (nonatomic) struct UIOffset titleOffset; // @synthesize titleOffset=_titleOffset;

- (void).cxx_destruct;
- (id)badgeTextAttributesForState:(unsigned long long)arg1;
- (void)enumerateBadgeTextAttributesWithBlock:(CDUnknownBlockType)arg1;
- (void)setBadgeTextAttributes:(id)arg1 forState:(unsigned long long)arg2;

@end

