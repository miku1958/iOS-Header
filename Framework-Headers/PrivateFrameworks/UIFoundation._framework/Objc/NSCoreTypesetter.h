//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIFoundation/NSTypesetter.h>

@protocol NSCoreTypesetterDelegate;

@interface NSCoreTypesetter : NSTypesetter
{
    CDUnknownBlockType laidOutLineFragment;
    id<NSCoreTypesetterDelegate> delegate;
    struct _NSRange characterRange;
    struct CGSize textContainerSize;
}

@property struct _NSRange characterRange; // @synthesize characterRange;
@property (weak) id<NSCoreTypesetterDelegate> delegate; // @synthesize delegate;
@property (copy) CDUnknownBlockType laidOutLineFragment; // @synthesize laidOutLineFragment;
@property struct CGSize textContainerSize; // @synthesize textContainerSize;

+ (BOOL)_allowsDefaultLineBreakStrategy;
+ (void)_lineMetricsForAttributes:(id)arg1 typesetterBehavior:(long long)arg2 usesFontLeading:(BOOL)arg3 applySpacings:(BOOL)arg4 usesSystemFontLeading:(BOOL)arg5 usesNegativeFontLeading:(BOOL)arg6 lineHeight:(double *)arg7 baselineOffset:(double *)arg8 spacing:(double *)arg9 applicationFrameworkContext:(long long)arg10;
+ (void)_lineMetricsFromAttributedString:(id)arg1 range:(struct _NSRange)arg2 typesetterBehavior:(long long)arg3 usesFontLeading:(BOOL)arg4 applySpacings:(BOOL)arg5 usesSystemFontLeading:(BOOL)arg6 usesNegativeFontLeading:(BOOL)arg7 lineHeight:(double *)arg8 baselineOffset:(double *)arg9 spacing:(double *)arg10 applicationFrameworkContext:(long long)arg11;
+ (void)_maximumAscentAndDescentForRuns:(struct __CFArray *)arg1 ascender:(double *)arg2 descender:(double *)arg3;
+ (BOOL)_supportsStringDrawingPath:(unsigned char)arg1;
- (void).cxx_destruct;
- (int)_NSFastDrawString:(id)arg1 length:(unsigned long long)arg2 attributes:(id)arg3 paragraphStyle:(id)arg4 typesetterBehavior:(long long)arg5 lineBreakMode:(long long)arg6 rect:(struct CGRect)arg7 padding:(double)arg8 cgContext:(struct CGContext *)arg9 baselineRendering:(BOOL)arg10 usesFontLeading:(BOOL)arg11 usesScreenFont:(BOOL)arg12 scrollable:(BOOL)arg13 syncAlignment:(BOOL)arg14 mirrored:(BOOL)arg15 boundingRectPointer:(struct CGRect *)arg16 baselineOffsetPointer:(double *)arg17 wantsTextLineFragments:(BOOL)arg18 applicationFrameworkContext:(long long)arg19;
- (struct CGRect)_stringDrawingCoreTextEngineWithOriginalString:(id)arg1 rect:(struct CGRect)arg2 padding:(double)arg3 context:(struct CGContext *)arg4 forceClipping:(BOOL)arg5 styledTextOptions:(id)arg6 attributes:(id)arg7 stringDrawingOptions:(long long)arg8 drawingContext:(id)arg9 wantsTextLineFragments:(BOOL)arg10 validatedAttributedString:(id)arg11 firstNonRenderedCharacterIndex:(long long *)arg12 foundSoftHyphenAtEOL:(BOOL *)arg13 enginePathUsed:(unsigned char *)arg14;
- (void)dealloc;
- (id)init;
- (void)layout;

@end

