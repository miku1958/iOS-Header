//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "__PDFPageViewAccessibility_super.h"

@interface PDFPageViewAccessibility : __PDFPageViewAccessibility_super
{
}

+ (void)_accessibilityPerformValidations:(id)arg1;
+ (Class)safeCategoryBaseClass;
+ (id)safeCategoryTargetClassName;
- (id)_accessibilityHitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (BOOL)_accessibilityIsFrameOutOfBounds;
- (id)_axAllElements;
- (id)_axAllNodeElements;
- (id)_axGetPDFView;
- (id)_axGetPage;
- (BOOL)_axIsUsingPDFExtensionView;
- (id)_axLineSelections;
- (struct CGPDFPage *)_axPageRef;
- (id)_axPageViewElements;
- (void)_axSetAllNodeElements:(id)arg1;
- (void)_axSetPageViewElements:(id)arg1;
- (struct CGPDFSelection *)_lineSelectionForSelection:(struct CGPDFSelection *)arg1;
- (id)accessibilityElements;
- (BOOL)isAccessibilityElement;
- (void)removeControlForAnnotation:(id)arg1;

@end

