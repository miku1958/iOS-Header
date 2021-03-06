//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCoding-Protocol.h>
#import <PDFKit/NSCopying-Protocol.h>

@class NSArray, NSDictionary, PDFBorderPrivateVars;

@interface PDFBorder : NSObject <NSCopying, NSCoding>
{
    PDFBorderPrivateVars *_private;
}

@property (readonly, copy, nonatomic) NSDictionary *borderKeyValues;
@property (copy, nonatomic) NSArray *dashPattern;
@property (nonatomic) double lineWidth;
@property (nonatomic) long long style;

- (void).cxx_destruct;
- (BOOL)_isRectangular;
- (void)_setDashFromArray:(struct CGPDFArray *)arg1;
- (void)_setStyleFromDictionary:(struct CGPDFDictionary *)arg1;
- (void)_updateDashPatternRaw;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (const struct __CFDictionary *)createDictionaryRef;
- (unsigned int)dashCountRaw;
- (const double *)dashPatternRaw;
- (void)dealloc;
- (id)description;
- (void)drawInRect:(struct CGRect)arg1;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (double)horizontalCornerRadius;
- (id)init;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)setAnnotation:(id)arg1;
- (BOOL)setBorderCharacteristicsFromArray:(struct CGPDFArray *)arg1;
- (void)setHorizontalCornerRadius:(double)arg1;
- (void)setVerticalCornerRadius:(double)arg1;
- (void)updateCornerBorderStyle;
- (double)verticalCornerRadius;

@end

