//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTextStorage.h>

#import <UIFoundation/NSLayoutManagerDelegate-Protocol.h>

@class CUICatalog, CUIStyleEffectConfiguration, NSConcreteNotifyingMutableAttributedString, NSLayoutManager, NSString, NSTextContainer;

@interface NSStringDrawingTextStorage : NSTextStorage <NSLayoutManagerDelegate>
{
    NSConcreteNotifyingMutableAttributedString *_contents;
    NSLayoutManager *_layoutManager;
    NSTextContainer *_textContainer;
    double _baselineDelta;
    struct {
        unsigned int _typesetterBehavior:4;
        unsigned int _needToFlushCache:1;
        unsigned int _baselineMode:1;
        unsigned int _forceWordWrapping:1;
        unsigned int _usesSimpleTextEffects:1;
        unsigned int _applicationFrameworkContext:3;
        unsigned int _reserved:21;
    } _sdflags;
    CUICatalog *_catalog;
    CUIStyleEffectConfiguration *_styleEffects;
    double _defaultTighteningFactor;
}

@property (strong, nonatomic) CUICatalog *cuiCatalog; // @synthesize cuiCatalog=_catalog;
@property (strong, nonatomic) CUIStyleEffectConfiguration *cuiStyleEffects; // @synthesize cuiStyleEffects=_styleEffects;
@property (readonly, copy) NSString *debugDescription;
@property double defaultTighteningFactor; // @synthesize defaultTighteningFactor=_defaultTighteningFactor;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, getter=_usesSimpleTextEffects, setter=_setUsesSimpleTextEffects:) BOOL usesSimpleTextEffects;

+ (BOOL)_hasCustomSettings;
+ (void)_setHasCustomSettings:(BOOL)arg1;
+ (void)initialize;
+ (void)performLayoutOperation:(CDUnknownBlockType)arg1;
+ (id)stringDrawingTextStorage;
- (long long)_applicationFrameworkContext;
- (double)_baselineDelta;
- (BOOL)_baselineMode;
- (BOOL)_forceWordWrapping;
- (BOOL)_isStringDrawingTextStorage;
- (void)_setApplicationFrameworkContext:(long long)arg1;
- (void)_setBaselineDelta:(double)arg1;
- (void)_setBaselineMode:(BOOL)arg1;
- (void)_setForceWordWrapping:(BOOL)arg1;
- (BOOL)_shouldSetOriginalFontAttribute;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)attribute:(id)arg1 atIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)dealloc;
- (struct CGPoint)defaultTextContainerOriginForRect:(struct CGRect)arg1;
- (void)drawTextContainer:(id)arg1 range:(struct _NSRange)arg2 withRect:(struct CGRect)arg3 graphicsContext:(struct CGContext *)arg4 baselineMode:(BOOL)arg5 scrollable:(BOOL)arg6 padding:(double)arg7;
- (void)drawTextContainer:(id)arg1 withRect:(struct CGRect)arg2 graphicsContext:(struct CGContext *)arg3 baselineMode:(BOOL)arg4 scrollable:(BOOL)arg5 padding:(double)arg6;
- (void)fontSetChanged;
- (id)init;
- (id)layoutManager;
- (unsigned long long)length;
- (void)processEditing;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (void)setGraphicsContext:(id)arg1;
- (id)string;
- (id)textContainer;
- (id)textContainerForAttributedString:(id)arg1;
- (id)textContainerForAttributedString:(id)arg1 containerSize:(struct CGSize)arg2 lineFragmentPadding:(double)arg3;
- (long long)typesetterBehavior;
- (struct CGRect)usedRectForTextContainer:(id)arg1;

@end

