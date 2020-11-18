//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class NSAttributedString, NSTextLayoutFragment, UIFont;

@interface NSTextLineFragment : NSObject <NSSecureCoding>
{
    long long _applicationFrameworkContext;
    struct __CTLine *_lineRef;
    unsigned short *_glyphs;
    struct CGSize *_advances;
    long long _glyphCount;
    long long _elasticGlyphCount;
    UIFont *_font;
    struct __CTRun *_activeRun;
    long long _activeRunIndex;
    struct CGRect _imageBounds;
    BOOL _rendersTextCorrectionMarkers;
    NSTextLayoutFragment *_textLayoutFragment;
    CDUnknownBlockType __renderingAttributesProvider;
    NSAttributedString *_attributedString;
    double _padding;
    struct _NSRange _characterRange;
    struct CGPoint _glyphOrigin;
    struct CGRect _typographicBounds;
}

@property (copy) CDUnknownBlockType _renderingAttributesProvider; // @synthesize _renderingAttributesProvider=__renderingAttributesProvider;
@property (readonly, copy) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (readonly) struct _NSRange characterRange; // @synthesize characterRange=_characterRange;
@property struct CGPoint glyphOrigin; // @synthesize glyphOrigin=_glyphOrigin;
@property double padding; // @synthesize padding=_padding;
@property BOOL rendersTextCorrectionMarkers; // @synthesize rendersTextCorrectionMarkers=_rendersTextCorrectionMarkers;
@property (weak) NSTextLayoutFragment *textLayoutFragment; // @synthesize textLayoutFragment=_textLayoutFragment;
@property struct CGRect typographicBounds; // @synthesize typographicBounds=_typographicBounds;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_defaultRenderingAttributesAtCharacterIndex:(long long)arg1 effectiveRange:(out struct _NSRange *)arg2;
- (void)_drawMarkedTextUnderline:(id)arg1 inTextRange:(id)arg2 atOrigin:(struct CGPoint)arg3 graphicsContext:(id)arg4;
- (void)_drawTexCorrectionMarker:(long long)arg1 characterRange:(struct _NSRange)arg2 atOrigin:(struct CGPoint)arg3 graphicsContext:(id)arg4;
- (void)_enumerateTextSegmentsInCharacterRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (struct __CTRun *)_findRunForStringIndex:(long long)arg1 runIndex:(out long long *)arg2;
- (void)_getCaretPositionsForCharactersInRange:(struct _NSRange)arg1 positionsCache:(inout double **)arg2 positionsCacheSize:(inout unsigned long long *)arg3 block:(CDUnknownBlockType)arg4;
- (void)_processCaretGlyphRunForTextSelectionProvider:(id)arg1 baseLocation:(id)arg2 runRange:(struct _NSRange)arg3 glyphOffset:(double)arg4 positionsCache:(inout double **)arg5 positionsCacheSize:(inout unsigned long long *)arg6 stop:(inout BOOL *)arg7 usingBlock:(CDUnknownBlockType)arg8;
- (struct _NSRange)_rangeOfLigatureContainingCharacterIndex:(unsigned long long)arg1;
- (long long)applicationFrameworkContext;
- (struct CGRect)boundsWithType:(long long)arg1 options:(unsigned long long)arg2;
- (long long)characterIndexForPoint:(struct CGPoint)arg1 fractionOfDistanceThroughGlyph:(double *)arg2;
- (void)dealloc;
- (id)description;
- (void)drawAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
- (void)drawAtPoint:(struct CGPoint)arg1 graphicsContext:(id)arg2;
- (void)drawMarkedTextUnderlineAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
- (void)drawMarkedTextUnderlineAtPoint:(struct CGPoint)arg1 graphicsContext:(id)arg2;
- (void)drawTextAttachmentsAtPoint:(struct CGPoint)arg1 graphicsContext:(id)arg2;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint)arg1 context:(struct CGContext *)arg2;
- (void)drawTextCorrectionMarkersAtPoint:(struct CGPoint)arg1 graphicsContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateCaretOffsetsWithTextSelectionDataSource:(id)arg1 baseLocation:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateTextSegmentBoundsInTextRange:(id)arg1 withTextSElementProvider:(id)arg2 baseLocation:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (struct CGRect)imageBounds;
- (id)initWithAttributedString:(id)arg1 range:(struct _NSRange)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1 attributes:(id)arg2 range:(struct _NSRange)arg3;
- (void)invalidateCache;
- (const struct __CTLine *)lineRef;
- (struct CGPoint)locationForCharacterAtIndex:(long long)arg1;
- (unsigned long long)numberOfGlyphs;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setGlyphs:(const unsigned short *)arg1 advances:(const struct CGSize *)arg2 count:(long long)arg3 elasticCount:(unsigned long long)arg4 font:(id)arg5;
- (void)setLineRef:(struct __CTLine *)arg1;
- (struct CGRect)typographicUsedBounds;

@end
