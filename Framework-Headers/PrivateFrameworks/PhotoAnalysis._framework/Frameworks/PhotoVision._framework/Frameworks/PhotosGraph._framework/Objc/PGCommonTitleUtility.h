//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PGCommonTitleUtility : NSObject
{
}

+ (id)_closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(CDUnknownBlockType)arg3 reverse:(BOOL)arg4;
+ (id)_closestSpaceMatchFromMatches:(id)arg1 withUsedNameRange:(struct _NSRange)arg2 searchForward:(BOOL)arg3;
+ (id)_locationLabelForDimension:(unsigned long long)arg1;
+ (id)_sortedAreaNodesByWeightFromAreaNodes:(id)arg1;
+ (id)addressNodesFromMomentNodes:(id)arg1;
+ (id)bestAddressNodeForMomentNodes:(id)arg1;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 remapMatchingDimensionBlock:(CDUnknownBlockType)arg3;
+ (id)closestLocationNodeFromNode:(id)arg1 withDimension:(unsigned long long)arg2 reverse:(BOOL)arg3;
+ (BOOL)containsCelebrationForDateNodes:(id)arg1 holidayName:(id *)arg2;
+ (unsigned long long)dimensionForLabel:(id)arg1;
+ (id)holidayNameForDateNodes:(id)arg1;
+ (BOOL)isLargeCountryForAddressNode:(id)arg1;
+ (BOOL)locationIsInSupersetCategoryForAddressNode:(id)arg1 dimension:(unsigned long long)arg2;
+ (id)locationNodeWithDimension:(unsigned long long)arg1 rootNode:(id)arg2;
+ (void)startAndEndDateFromDateNodes:(id)arg1 result:(CDUnknownBlockType)arg2;
+ (id)titleWithLineBreakForTitle:(id)arg1;
+ (id)titleWithLineBreakForTitle:(id)arg1 andUsedNames:(id)arg2;

@end

