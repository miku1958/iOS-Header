//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/UIPDFAnnotation.h>

@interface UIPDFPopupAnnotation : UIPDFAnnotation
{
    UIPDFAnnotation *parent;
    struct CGRect _adjustedBounds;
}

@property (nonatomic) struct CGRect adjustedBounds; // @synthesize adjustedBounds=_adjustedBounds;
@property (nonatomic) UIPDFAnnotation *parent; // @synthesize parent;

- (int)annotationType;
- (struct CGRect)bounds;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1;
- (BOOL)recognizeGestures;
- (Class)viewClass;

@end

