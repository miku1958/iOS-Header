//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFAnnotationLinkPrivateVars;

@interface PDFAnnotationLink : PDFAnnotation <NSCopying>
{
    PDFAnnotationLinkPrivateVars *_private2;
}

- (void).cxx_destruct;
- (id)URL;
- (BOOL)addDestinationToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addHighlightingModeToDictionaryRef:(struct __CFDictionary *)arg1;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)createPillBezier:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)destination;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (BOOL)isHighlighted;
- (int)mouseDownStyle;
- (id)mouseUpAction;
- (void)secondaryInit;
- (void)setDestination:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setMouseDownStyle:(int)arg1;
- (void)setURL:(id)arg1;

@end
