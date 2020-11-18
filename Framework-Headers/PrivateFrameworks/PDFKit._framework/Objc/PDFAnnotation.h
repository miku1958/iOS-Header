//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PDFKit/NSCoding-Protocol.h>
#import <PDFKit/NSCopying-Protocol.h>

@class NSDate, NSString, PDFAction, PDFAnnotationPopup, PDFAnnotationPrivateVars, PDFBorder, PDFPage, UIColor;

@interface PDFAnnotation : NSObject <NSCopying, NSCoding>
{
    PDFAnnotationPrivateVars *_private;
}

@property (strong, nonatomic) PDFBorder *border;
@property (nonatomic) struct CGRect bounds;
@property (strong, nonatomic) UIColor *color;
@property (strong, nonatomic) NSString *contents;
@property (readonly, nonatomic) BOOL hasAppearanceStream;
@property (strong, nonatomic) NSDate *modificationDate;
@property (strong, nonatomic) PDFAction *mouseUpAction;
@property (weak, nonatomic) PDFPage *page;
@property (strong, nonatomic) PDFAnnotationPopup *popup;
@property (nonatomic) BOOL shouldDisplay;
@property (nonatomic) BOOL shouldPrint;
@property (readonly, nonatomic) NSString *toolTip;
@property (readonly, nonatomic) NSString *type;
@property (strong, nonatomic) NSString *userName;

+ (Class)classForAnnotationDictionary:(struct CGPDFDictionary *)arg1;
- (void).cxx_destruct;
- (void)addActionToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addAdditionalActionsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addAppearanceForKey:(struct __CFString *)arg1 toDictionaryRef:(struct __CFDictionary *)arg2;
- (void)addBorderStyleToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addBorderToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addBoundsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addColor:(id)arg1 forKey:(struct __CFString *)arg2 toDictionaryRef:(struct __CFDictionary *)arg3;
- (void)addDefaultAppearanceDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addFlagsToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addModificationDateToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addNormalAppearanceToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addPageReferenceToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addPopupToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addQuaddingToDictionaryRef:(struct __CFDictionary *)arg1;
- (void)addTextLabelToDictionaryRef:(struct __CFDictionary *)arg1;
- (struct CGPDFForm *)appearance:(int)arg1;
- (id)colorFromAppearanceTokens:(id)arg1;
- (struct __CFDictionary *)commonCreateDictionaryRef;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)derotateContext:(struct CGContext *)arg1;
- (id)description;
- (struct __CFDictionary *)dictionaryRef;
- (void)drawAppearance:(struct CGPDFForm *)arg1 withBox:(long long)arg2 inContext:(struct CGContext *)arg3;
- (void)drawAppearance:(struct CGPDFForm *)arg1 withBox:(long long)arg2 inContext:(struct CGContext *)arg3 scaleProportional:(BOOL)arg4;
- (void)drawWithBox:(long long)arg1;
- (void)drawWithBox:(long long)arg1 inContext:(struct CGContext *)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)fillOval:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
- (void)fillRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
- (unsigned long long)flags;
- (id)fontNameFromAppearanceTokens:(id)arg1;
- (BOOL)forExport;
- (struct __CFDictionary *)gcCreateAttributesForFont:(id)arg1 color:(id)arg2;
- (void)getAppearancesFromDictionary:(struct CGPDFDictionary *)arg1 ofType:(int)arg2;
- (id)getColorFromAppearanceString:(struct CGPDFString *)arg1;
- (id)getFontFromAppearanceString:(struct CGPDFString *)arg1;
- (id)getFullFieldNameFromDictionary:(struct CGPDFDictionary *)arg1;
- (id)getPDFKeyMappingDictionary;
- (id)init;
- (id)initCommonWithBounds:(struct CGRect)arg1;
- (id)initWithAnnotationDictionary:(struct CGPDFDictionary *)arg1 forPage:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1 forPage:(id)arg2;
- (BOOL)isHidden;
- (BOOL)isMarkupAnnotation;
- (BOOL)isSelected;
- (id)mouseDownAction;
- (id)newUserControlWithFrame:(struct CGRect)arg1;
- (double)pointSizeFromAppearanceTokens:(id)arg1;
- (struct CGPDFDictionary *)popupDictionary;
- (void)removeAllAppearanceStreams;
- (void)removeValueForAnnotationKey:(id)arg1;
- (BOOL)renderString:(id)arg1 forRect:(struct CGRect)arg2 font:(id)arg3 color:(id)arg4 alignment:(long long)arg5 rotation:(int)arg6 breaks:(BOOL)arg7 context:(struct CGContext *)arg8;
- (BOOL)savesAppearanceStream;
- (void)secondaryInit;
- (void)setAppearance:(struct CGPDFForm *)arg1 forType:(int)arg2;
- (BOOL)setArray:(id)arg1 forKey:(id)arg2;
- (BOOL)setBoolean:(BOOL)arg1 forAnnotationKey:(id)arg2;
- (BOOL)setDictionary:(id)arg1 forKey:(id)arg2;
- (void)setDictionaryRef:(struct __CFDictionary *)arg1;
- (void)setForExport:(BOOL)arg1;
- (void)setIsHidden:(BOOL)arg1;
- (void)setIsSelected:(BOOL)arg1;
- (void)setMouseDownAction:(id)arg1;
- (void)setPDFAnnotationDictionary:(id)arg1;
- (BOOL)setRect:(struct CGRect)arg1 forAnnotationKey:(id)arg2;
- (void)setSavesAppearanceStream:(BOOL)arg1;
- (BOOL)setString:(id)arg1 forKey:(id)arg2;
- (void)setType:(id)arg1;
- (BOOL)setValue:(id)arg1 forAnnotationKey:(id)arg2;
- (BOOL)setVarious:(id)arg1 forKey:(id)arg2;
- (struct CGPDFDictionary *)sourceDictionary;
- (void)strokeOval:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
- (void)strokeRect:(struct CGRect)arg1 color:(id)arg2 context:(struct CGContext *)arg3;
- (BOOL)supportsNSCoding;
- (id)tokenizeAppearanceString:(id)arg1;
- (BOOL)updatesBoundsFromUserControlBounds;
- (id)valueForAnnotationKey:(id)arg1;

@end
