//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface KNAnimationRegistry : NSObject
{
    NSDictionary *_classesForTypeAndName;
    NSDictionary *_classesForTypeAndCategory;
    NSDictionary *_classesForTypeAndFilter;
    NSDictionary *_classesForTypeAndObsoleteName;
    NSDictionary *_alternateEffectIdentifiersForEffectIdentifierAndFilter;
    NSArray *_animationInfos;
}

+ (id)animationsInBundle;
+ (id)categoryNameForPluginClass:(Class)arg1;
+ (id)instance;
+ (id)localizedCategoryNameForCategory:(long long)arg1;
+ (id)localizedNameForUnsupportedAnimation:(id)arg1;
- (void).cxx_destruct;
- (id)allAnimationInfos;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 includeObsoleteNames:(BOOL)arg3;
- (id)animationInfoForEffectIdentifier:(id)arg1 animationType:(long long)arg2 includeObsoleteNames:(BOOL)arg3 drawable:(id)arg4;
- (id)animationInfosForAnimationType:(long long)arg1 category:(id)arg2;
- (id)animationInfosForAnimationType:(long long)arg1 filter:(id)arg2;
- (BOOL)canMapEffectIdentifier:(id)arg1 animationType:(long long)arg2 toEffectIdentifier:(id)arg3 includeObsoleteNames:(BOOL)arg4 forDrawable:(id)arg5;
- (id)distinctCategoriesForType:(long long)arg1;
- (id)init;
- (id)p_buildAlternateFilterMap;

@end

