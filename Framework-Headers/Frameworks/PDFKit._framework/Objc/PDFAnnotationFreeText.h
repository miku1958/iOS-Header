//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import <PDFKit/NSCoding-Protocol.h>
#import <PDFKit/NSCopying-Protocol.h>

@class PDFAnnotationFreeTextPrivateVars;

@interface PDFAnnotationFreeText : PDFAnnotation <NSCopying, NSCoding>
{
    PDFAnnotationFreeTextPrivateVars *_private2;
}

- (void).cxx_destruct;
- (long long)alignment;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAlignment:(long long)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;

@end

