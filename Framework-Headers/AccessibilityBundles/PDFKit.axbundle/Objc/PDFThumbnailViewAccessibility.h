//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__PDFThumbnailViewAccessibility_super.h"

@interface PDFThumbnailViewAccessibility : __PDFThumbnailViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAnnouncementTimer;
- (void)_accessibilitySetAnnouncementTimer:(id)arg1;
- (id)_accessibilityUserTestingChildren;
- (long long)_axCurrentPageNumber;
- (void)_axMoveOnePage:(BOOL)arg1;
- (id)_axPageDescriptionForPage:(id)arg1;
- (long long)_axPageNumberForPage:(id)arg1;
- (id)_axThumbnailSelf;
- (struct CGPoint)accessibilityActivationPoint;
- (void)accessibilityDecrement;
- (struct CGRect)accessibilityFrame;
- (void)accessibilityIncrement;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (BOOL)isAccessibilityElement;
- (id)scrubbingAtFraction:(double)arg1 betweenIndexPath:(id)arg2 andIndexPath:(id)arg3 outDiscreteFraction:(double *)arg4;

@end

