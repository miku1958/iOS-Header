//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface MUCGPDFAnnotationAdaptor : NSObject
{
}

+ (id)_concreteAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ofPage:(struct CGPDFPage *)arg2;
+ (id)_concreteDictionaryRepresentationOfAKAnnotation:(id)arg1;
+ (id)newAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ofPage:(struct CGPDFPage *)arg2;
+ (id)newPlaceholderAKAnnotationWithCGPDFAnnotation:(struct CGPDFAnnotation *)arg1 ofPage:(struct CGPDFPage *)arg2;
+ (id)pdfDictionaryRepresentationOfAKAnnotation:(id)arg1;
+ (id)supportedAnnotationTypes;

@end

