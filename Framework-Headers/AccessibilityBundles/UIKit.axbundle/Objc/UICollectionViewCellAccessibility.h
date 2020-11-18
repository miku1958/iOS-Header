//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/__UICollectionViewCellAccessibility_super.h>

@interface UICollectionViewCellAccessibility : __UICollectionViewCellAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityChildren;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)_accessibilityIndexPath;
- (BOOL)_accessibilityIsOutsideParentBounds;
- (id)_accessibilityParentCollectionView;
- (id)_accessibilityParentScrollView;
- (void)accessibilityClearInternalData;
- (id)accessibilityDragSourceDescriptors;
- (id)accessibilityDropPointDescriptors;
- (id)accessibilityElementAtIndex:(long long)arg1;
- (long long)accessibilityElementCount;
- (void)accessibilityReuseChildren:(id)arg1 forMockParent:(id)arg2;
- (BOOL)accessibilityScrollToVisible;
- (unsigned long long)accessibilityTraits;
- (void)addSubview:(id)arg1;
- (id)axData;
- (long long)indexOfAccessibilityElement:(id)arg1;
- (void)insertSubview:(id)arg1 aboveSubview:(id)arg2;
- (void)insertSubview:(id)arg1 atIndex:(long long)arg2;
- (void)insertSubview:(id)arg1 belowSubview:(id)arg2;
- (void)prepareForReuse;
- (BOOL)shouldGroupAccessibilityChildren;
- (void)willRemoveSubview:(id)arg1;

@end

