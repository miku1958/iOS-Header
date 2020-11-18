//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PDFKit/PDFAnnotation.h>

#import <PDFKit/NSCopying-Protocol.h>

@class PDFAnnotationButtonWidgetPrivateVars;

@interface PDFAnnotationButtonWidget : PDFAnnotation <NSCopying>
{
    PDFAnnotationButtonWidgetPrivateVars *_private2;
}

- (void).cxx_destruct;
- (BOOL)accessibilityIsIgnored;
- (void)addNormalAndDownAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNormalAndDownAppearanceWithStateToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNormalAppearanceWithStateToDictionaryRef:(struct __CFDictionary *)arg1;
- (BOOL)allowsToggleToOff;
- (id)appearanceCharacteristics;
- (id)backgroundColor;
- (id)caption;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (long long)controlType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)drawCheckBox:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawPushButton:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawRadioButton:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (id)fieldName;
- (id)font;
- (id)fontColor;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (BOOL)isHighlighted;
- (id)onStateValue;
- (int)rotation;
- (void)secondaryInit;
- (void)setAllowsToggleToOff:(BOOL)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setCaption:(id)arg1;
- (void)setControlType:(long long)arg1;
- (void)setFieldName:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setFontColor:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOnStateValue:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setView:(id)arg1;
- (long long)state;

@end

