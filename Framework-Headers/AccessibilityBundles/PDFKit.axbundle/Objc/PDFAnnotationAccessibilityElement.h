//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import "AXPDFNodeElement.h"

@class NSMutableArray, PDFAnnotation, PDFPage;

@interface PDFAnnotationAccessibilityElement : AXPDFNodeElement
{
    PDFPage *_page;
    PDFAnnotation *_annotation;
    NSMutableArray *_cachedAXElements;
}

@property (weak, nonatomic) PDFAnnotation *annotation; // @synthesize annotation=_annotation;
@property (strong, nonatomic) NSMutableArray *cachedAXElements; // @synthesize cachedAXElements=_cachedAXElements;
@property (weak, nonatomic) PDFPage *page; // @synthesize page=_page;

- (void).cxx_destruct;
- (id)_accessibilityAnnotationFieldType;
- (id)_accessibilityAnnotationType;
- (BOOL)_accessibilityIsButtonWidget;
- (id)_accessibilityLineStyleStringForLineStyle:(long long)arg1;
- (void)_axAnnotationHit:(id)arg1;
- (void)_axRemovedFromSuperview:(id)arg1;
- (id)accessibilityElements;
- (struct CGRect)accessibilityFrame;
- (id)accessibilityHint;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)initWithPage:(id)arg1 annotation:(id)arg2 withParent:(id)arg3;
- (BOOL)isAccessibilityElement;

@end

