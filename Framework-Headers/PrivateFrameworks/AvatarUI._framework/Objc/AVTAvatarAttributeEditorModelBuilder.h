//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVTAvatarAttributeEditorModelBuilder : NSObject
{
}

+ (void)addTags:(struct NSDictionary *)arg1 toMutableTagSet:(struct NSMutableDictionary *)arg2;
+ (id)buildDataSourceCategoriesFromCoreModel:(id)arg1 selectingFromAvatarConfiguration:(id)arg2 imageProvider:(id)arg3 currentlySelectedCategory:(id)arg4;
+ (id)filterPresets:(id)arg1 forRowRepresentingTags:(id)arg2 currentTagSelection:(struct NSDictionary *)arg3 fixedTags:(struct NSDictionary *)arg4 availableTags:(struct NSDictionary *)arg5;
+ (id)filterPresets:(id)arg1 matchingTagValues:(struct NSDictionary *)arg2;
+ (int)scoreForTags:(struct NSDictionary *)arg1 forCombination:(struct NSDictionary *)arg2 currentSelection:(struct NSDictionary *)arg3;
+ (id)sectionColorItemsForColors:(id)arg1 selectedPreset:(id)arg2 configuration:(id)arg3 imageProvider:(id)arg4 colorVariationStore:(id)arg5;
+ (id)sectionForModelColorPalette:(id)arg1 selectedPreset:(id)arg2 configuration:(id)arg3 imageProvider:(id)arg4 colorVariationStore:(id)arg5 subSection:(id)arg6;
+ (id)sectionForModelRow:(id)arg1 fromModelPresets:(id)arg2 selectedModelPreset:(id)arg3 tagSelection:(struct NSDictionary *)arg4 fixedTags:(struct NSDictionary *)arg5 availableTags:(struct NSDictionary *)arg6 imageProvider:(id)arg7 configuration:(id)arg8 previousSection:(id)arg9;
+ (void)setTags:(struct NSDictionary *)arg1 onMutableTagSet:(struct NSMutableDictionary *)arg2;
+ (id)tagCombinationsForTagNames:(id)arg1 availableTags:(struct NSDictionary *)arg2;
+ (struct NSDictionary *)tagSetByRemovingTagNames:(id)arg1 fromTagSet:(struct NSDictionary *)arg2;
+ (struct NSDictionary *)tagSetForTagNames:(id)arg1 inTagSet:(struct NSDictionary *)arg2;

@end

