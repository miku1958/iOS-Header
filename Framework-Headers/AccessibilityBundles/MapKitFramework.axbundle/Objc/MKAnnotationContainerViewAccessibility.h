//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapKitFramework/__MKAnnotationContainerViewAccessibility_super.h>

@interface MKAnnotationContainerViewAccessibility : __MKAnnotationContainerViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityAnnotationCalloutView;
- (id)_accessibilityAnnotationViews;
- (id)_accessibilityFilterVisibleElements:(id)arg1;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)_accessibilityZoom:(BOOL)arg1 point:(struct CGPoint)arg2;
- (id)accessibilityContainerElements;
- (BOOL)accessibilityIsShowingAnnotationCallout;
- (BOOL)accessibilityPerformEscape;
- (void)accessibilityZoomInAtPoint:(struct CGPoint)arg1;
- (void)accessibilityZoomOutAtPoint:(struct CGPoint)arg1;
- (void)deselectAnnotationView:(id)arg1 animated:(BOOL)arg2;
- (BOOL)isAccessibilityElement;
- (void)selectAnnotationView:(id)arg1 animated:(BOOL)arg2 avoid:(struct CGRect)arg3;

@end
