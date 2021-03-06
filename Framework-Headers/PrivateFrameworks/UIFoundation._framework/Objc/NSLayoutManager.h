//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIFoundation/NSSecureCoding-Protocol.h>

@class CUIStyleEffectConfiguration, NSArray, NSFont, NSGlyphGenerator, NSMutableArray, NSParagraphArbitrator, NSRunStorage, NSStorage, NSTextContainer, NSTextStorage, NSTypesetter;
@protocol NSLayoutManagerDelegate;

@interface NSLayoutManager : NSObject <NSSecureCoding>
{
    NSTextStorage *_textStorage;
    NSGlyphGenerator *_glyphGenerator;
    NSTypesetter *_typesetter;
    NSMutableArray *_textContainers;
    NSStorage *_containerUsedRects;
    NSRunStorage *_containerRuns;
    NSTextContainer *_extraLineFragmentContainer;
    struct __lmFlags {
        unsigned int containersAreFull:1;
        unsigned int glyphsMightDrawOutsideLines:1;
        unsigned int backgroundLayoutEnabled:1;
        unsigned int resizingInProgress:1;
        unsigned int allowScreenFonts:1;
        unsigned int cachedRectArrayInUse:1;
        unsigned int displayInvalidationInProgress:1;
        unsigned int insertionPointNeedsUpdate:1;
        unsigned int layoutManagerInDirtyList:1;
        unsigned int originalFontOverride:1;
        unsigned int showInvisibleCharacters:1;
        unsigned int showControlCharacters:1;
        unsigned int delegateRespondsToDidInvalidate:1;
        unsigned int delegateRespondsToDidComplete:1;
        unsigned int glyphFormat:2;
        unsigned int textStorageRespondsToIsEditing:1;
        unsigned int notifyEditedInProgress:1;
        unsigned int containersChanged:1;
        unsigned int isGeneratingGlyphs:1;
        unsigned int hasNonGeneratedGlyphData:1;
        unsigned int syncAlignmentToDirection:1;
        unsigned int defaultAttachmentScaling:2;
        unsigned int usesFontLeading:1;
        unsigned int seenRightToLeft:1;
        unsigned int ignoresViewTransformations:1;
        unsigned int needToFlushGlyph:1;
        unsigned int flipsIfNeeded:1;
        unsigned int allowNonContig:1;
        unsigned int useNonContig:1;
        unsigned int inBackgroundLayout:1;
    } _lmFlags;
    id _delegate;
    unsigned short _textViewResizeDisableStack;
    unsigned short _displayInvalidationDisableStack;
    struct _NSRange _deferredDisplayCharRange;
    id _firstTextView;
    struct CGRect *_cachedRectArray;
    unsigned long long _cachedRectArrayCapacity;
    char *_glyphBuffer;
    unsigned long long _glyphBufferSize;
    struct _NSRange _cachedLocationNominalGlyphRange;
    unsigned long long _cachedLocationGlyphIndex;
    struct CGPoint _cachedLocation;
    struct _NSRange _cachedFontCharRange;
    NSFont *_cachedFont;
    unsigned long long _firstUnlaidGlyphIndex;
    unsigned long long _firstUnlaidCharIndex;
    struct _NSRange _newlyFilledGlyphRange;
    id _extraData;
    NSTextContainer *_cachedTextContainer;
    BOOL _cachedTextContainerIsVertical;
    BOOL _delegateIsWeakValue;
}

@property (nonatomic) BOOL allowsNonContiguousLayout;
@property BOOL allowsOriginalFontMetricsOverride;
@property (weak, nonatomic) id<NSLayoutManagerDelegate> delegate;
@property (readonly, nonatomic) struct CGRect extraLineFragmentRect;
@property (readonly, nonatomic) NSTextContainer *extraLineFragmentTextContainer;
@property (readonly, nonatomic) struct CGRect extraLineFragmentUsedRect;
@property (readonly, nonatomic) BOOL hasNonContiguousLayout;
@property BOOL limitsLayoutForSuspiciousContents;
@property (readonly, nonatomic) unsigned long long numberOfGlyphs;
@property (strong) NSParagraphArbitrator *paragraphArbitrator;
@property (readonly, getter=isScrolling) BOOL scrolling;
@property (nonatomic) BOOL showsControlCharacters;
@property (nonatomic) BOOL showsInvisibleCharacters;
@property (copy) CUIStyleEffectConfiguration *styleEffectConfiguration;
@property (readonly, nonatomic) NSArray *textContainers;
@property (nonatomic) NSTextStorage *textStorage;
@property BOOL usesDefaultHyphenation;
@property (nonatomic) BOOL usesFontLeading;

+ (id)_defaultLinkAttributes;
+ (void)_doSomeBackgroundLayout;
+ (BOOL)_ignoresViewTransformations;
+ (BOOL)_inBackgroundLayout;
+ (BOOL)_showsControlCharacters;
+ (BOOL)_showsInvisibleCharacters;
+ (BOOL)_usesScreenFonts;
+ (void)initialize;
+ (BOOL)supportsSecureCoding;
- (unsigned short)CGGlyphAtIndex:(unsigned long long)arg1;
- (unsigned short)CGGlyphAtIndex:(unsigned long long)arg1 isValidIndex:(BOOL *)arg2;
- (void)_adjustCharacterIndicesForRawGlyphRange:(struct _NSRange)arg1 byDelta:(long long)arg2;
- (BOOL)_alwaysDrawsActive;
- (id)_attachmentSizesRun;
- (id)_blockDescription;
- (struct _NSRange)_blockRangeForCharRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRangeForGlyphRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRowRangeForCharRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRowRangeForCharRange:(struct _NSRange)arg1 completeRows:(BOOL *)arg2;
- (struct _NSRange)_blockRowRangeForGlyphRange:(struct _NSRange)arg1;
- (struct _NSRange)_blockRowRangeForGlyphRange:(struct _NSRange)arg1 completeRows:(BOOL *)arg2;
- (struct CGRect)_boundingRectForGlyphRange:(struct _NSRange)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 fullLineRectsOnly:(BOOL)arg4;
- (BOOL)_canDoLayout;
- (struct _NSRange)_characterRangeCurrentlyInAndAfterContainer:(id)arg1;
- (void)_clearCurrentAttachmentSettings;
- (void)_clearTemporaryAttributes;
- (void)_clearTemporaryAttributesForCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)_commonInit;
- (id)_containerDescription;
- (unsigned long long)_currentAttachmentIndex;
- (struct CGRect)_currentAttachmentRect;
- (void)_doLayoutWithFullContainerStartingAtGlyphIndex:(unsigned long long)arg1 nextGlyphIndex:(unsigned long long *)arg2;
- (BOOL)_doOptimizedLayoutStartingAtGlyphIndex:(unsigned long long)arg1 forCharacterRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 lineLimit:(unsigned long long)arg4 nextGlyphIndex:(unsigned long long *)arg5;
- (void)_drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)_drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)_drawLineForGlyphRange:(struct _NSRange)arg1 inContext:(struct CGContext *)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(struct CGPoint)arg7 breakForDescenders:(BOOL)arg8;
- (void)_drawLineForGlyphRange:(struct _NSRange)arg1 inContext:(struct CGContext *)arg2 from:(double)arg3 to:(double)arg4 at:(double)arg5 thickness:(double)arg6 lineOrigin:(struct CGPoint)arg7 breakForDescenders:(BOOL)arg8 flipped:(BOOL)arg9;
- (void)_drawLineForGlyphRange:(struct _NSRange)arg1 type:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6 isStrikethrough:(BOOL)arg7;
- (BOOL)_drawsDebugBaselines;
- (BOOL)_drawsUnderlinesLikeWebKit;
- (struct _NSRange)_exactGlyphRangeForCharacterRange:(struct _NSRange)arg1;
- (struct _NSRange)_extendedCharRangeForInvalidation:(struct _NSRange)arg1 editedCharRange:(struct _NSRange)arg2;
- (void)_fillGlyphHoleAtIndex:(unsigned long long)arg1 desiredNumberOfCharacters:(unsigned long long)arg2;
- (void)_fillGlyphHoleForCharacterRange:(struct _NSRange)arg1 startGlyphIndex:(unsigned long long)arg2 desiredNumberOfCharacters:(unsigned long long)arg3;
- (void)_fillLayoutHoleAtIndex:(unsigned long long)arg1 desiredNumberOfLines:(unsigned long long)arg2;
- (void)_fillLayoutHoleForCharacterRange:(struct _NSRange)arg1 desiredNumberOfLines:(unsigned long long)arg2 isSoft:(BOOL)arg3;
- (struct _NSRange)_firstPassGlyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2 hintGlyphRange:(struct _NSRange)arg3 okToFillHoles:(BOOL)arg4;
- (struct _NSRange)_firstPassGlyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2 okToFillHoles:(BOOL)arg3;
- (void)_firstTextViewChanged;
- (void)_fixSelectionAfterChangeInCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)_forceDisplayToBeCorrectForViewsWithUnlaidGlyphs;
- (BOOL)_forcesTrackingFloor;
- (unsigned int)_glyphAtIndex:(unsigned long long)arg1 characterIndex:(unsigned long long *)arg2 glyphInscription:(unsigned long long *)arg3 isValidIndex:(BOOL *)arg4;
- (id)_glyphDescription;
- (id)_glyphDescriptionForGlyphRange:(struct _NSRange)arg1;
- (id)_glyphGenerator;
- (id)_glyphHoleDescription;
- (unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (unsigned long long)_glyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (id)_glyphLocationDescription;
- (struct _NSRange)_glyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2 fast:(BOOL)arg3 okToFillHoles:(BOOL)arg4;
- (struct _NSRange)_glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2 okToFillHoles:(BOOL)arg3;
- (id)_glyphTreeDescription;
- (void)_growCachedRectArrayToSize:(unsigned long long)arg1;
- (BOOL)_hasSeenRightToLeft;
- (double)_hyphenationFactor;
- (unsigned long long)_indexOfFirstGlyphInTextContainer:(id)arg1 okToFillHoles:(BOOL)arg2;
- (void)_insertGlyphs:(unsigned int *)arg1 elasticAttributes:(BOOL *)arg2 count:(unsigned long long)arg3 atGlyphIndex:(unsigned long long)arg4 characterIndex:(unsigned long long)arg5;
- (id)_insertionPointHelperForGlyphAtIndex:(unsigned long long)arg1;
- (void)_invalidateDisplayIfNeeded;
- (void)_invalidateGlyphsForCharacterRange:(struct _NSRange)arg1 editedCharacterRange:(struct _NSRange)arg2 changeInLength:(long long)arg3 actualCharacterRange:(struct _NSRange *)arg4;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)_invalidateGlyphsForExtendedCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2 includeBlocks:(BOOL)arg3;
- (void)_invalidateInsertionPoint;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange)arg1 isSoft:(BOOL)arg2;
- (void)_invalidateLayoutForExtendedCharacterRange:(struct _NSRange)arg1 isSoft:(BOOL)arg2 invalidateUsage:(BOOL)arg3;
- (void)_invalidateUsageForTextContainersInRange:(struct _NSRange)arg1;
- (id)_layoutHoleDescription;
- (id)_layoutTreeDescription;
- (id)_lineFragmentDescription;
- (id)_lineFragmentDescription:(BOOL)arg1;
- (id)_lineFragmentDescriptionForGlyphRange:(struct _NSRange)arg1 includeGlyphLocations:(BOOL)arg2;
- (void)_lineGlyphRange:(struct _NSRange)arg1 type:(long long)arg2 lineFragmentRect:(struct CGRect)arg3 lineFragmentGlyphRange:(struct _NSRange)arg4 containerOrigin:(struct CGPoint)arg5 isStrikethrough:(BOOL)arg6;
- (void)_markSelfAsDirtyForBackgroundLayout:(id)arg1;
- (void)_mergeGlyphHoles;
- (void)_mergeLayoutHoles;
- (BOOL)_mirrorsTextAlignment;
- (BOOL)_needToFlushGlyph;
- (void)_noteFirstTextViewVisibleCharacterRangeIfAfterIndex:(unsigned long long)arg1;
- (char *)_packedGlyphs:(unsigned long long)arg1 range:(struct _NSRange)arg2 length:(unsigned long long *)arg3;
- (struct _NSRange)_primitiveCharacterRangeForGlyphRange:(struct _NSRange)arg1;
- (void)_primitiveDeleteGlyphsInRange:(struct _NSRange)arg1;
- (struct _NSRange)_primitiveGlyphRangeForCharacterRange:(struct _NSRange)arg1;
- (void)_primitiveInvalidateDisplayForGlyphRange:(struct _NSRange)arg1;
- (void)_promoteGlyphStoreToFormat:(unsigned long long)arg1;
- (void)_recalculateUsageForTextContainerAtIndex:(unsigned long long)arg1;
- (struct CGRect *)_rectArrayForRange:(struct _NSRange)arg1 withinSelectionRange:(struct _NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long *)arg7 rangeWithinContainer:(struct _NSRange *)arg8 glyphsDrawOutsideLines:(BOOL *)arg9;
- (struct CGRect *)_rectArrayForRange:(struct _NSRange)arg1 withinSelectionRange:(struct _NSRange)arg2 rangeIsCharRange:(BOOL)arg3 singleRectOnly:(BOOL)arg4 fullLineRectsOnly:(BOOL)arg5 inTextContainer:(id)arg6 rectCount:(unsigned long long *)arg7 rangeWithinContainer:(struct _NSRange *)arg8 glyphsDrawOutsideLines:(BOOL *)arg9 rectArray:(struct CGRect *)arg10 rectArrayCapacity:(unsigned long long)arg11;
- (void)_resetCachedTextContainer;
- (void)_resizeTextViewForTextContainer:(id)arg1;
- (id)_rowArrayCache;
- (id)_selectedRanges;
- (id)_selectionRangesForInsertionPointRange:(struct _NSRange)arg1;
- (void)_setAlwaysDrawsActive:(BOOL)arg1;
- (void)_setCachedTextContainer:(id)arg1 isVertical:(BOOL)arg2;
- (void)_setCurrentAttachmentRect:(struct CGRect)arg1 index:(unsigned long long)arg2;
- (void)_setDrawsDebugBaselines:(BOOL)arg1;
- (void)_setDrawsUnderlinesLikeWebKit:(BOOL)arg1;
- (void)_setExtraLineFragmentRect:(struct CGRect)arg1 usedRect:(struct CGRect)arg2 textContainer:(id)arg3;
- (void)_setForcesTrackingFloor:(BOOL)arg1;
- (void)_setGlyphGenerator:(id)arg1;
- (void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 integerOffsetPerLineEstimate:(unsigned long long)arg2;
- (void)_setGlyphsPerLineEstimate:(unsigned long long)arg1 offsetPerLineEstimate:(double)arg2;
- (void)_setHasSeenRightToLeft:(BOOL)arg1;
- (void)_setHyphenationFactor:(double)arg1;
- (void)_setMirrorsTextAlignment:(BOOL)arg1;
- (void)_setNeedToFlushGlyph:(BOOL)arg1;
- (void)_setRowArrayCache:(id)arg1;
- (void)_setTextContainer:(id)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)_showAttachmentCell:(id)arg1 inRect:(struct CGRect)arg2 characterIndex:(unsigned long long)arg3;
- (void)_showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)_simpleDeleteGlyphsInRange:(struct _NSRange)arg1;
- (void)_simpleInsertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3 elastic:(BOOL)arg4;
- (unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3;
- (unsigned long long)_smallEncodingGlyphIndexForCharacterIndex:(unsigned long long)arg1 startOfRange:(BOOL)arg2 okToFillHoles:(BOOL)arg3 considerNulls:(BOOL)arg4;
- (id)_stringForLoggingLineFragmentForGlyphAtIndex:(long long)arg1;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)_temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)_temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)_updateUsageForTextContainer:(id)arg1 addingUsedRect:(struct CGRect)arg2;
- (struct _NSStoredContainerUsage *)_validatedStoredUsageForTextContainerAtIndex:(unsigned long long)arg1;
- (void)addTemporaryAttribute:(id)arg1 value:(id)arg2 forCharacterRange:(struct _NSRange)arg3;
- (void)addTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)addTextContainer:(id)arg1;
- (long long)applicationFrameworkContext;
- (struct CGSize)attachmentSizeForGlyphAtIndex:(unsigned long long)arg1;
- (id)attributedString;
- (BOOL)backgroundColorProvidesOpaqueSurface;
- (BOOL)backgroundLayoutEnabled;
- (double)baselineOffsetForGlyphAtIndex:(unsigned long long)arg1;
- (void)beginScrollingForView:(id)arg1 textContainer:(id)arg2;
- (struct CGRect)boundingRectForGlyphRange:(struct _NSRange)arg1 inTextContainer:(id)arg2;
- (struct CGRect)boundsRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct CGRect)boundsRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange)arg2;
- (unsigned long long)characterIndexForGlyphAtIndex:(unsigned long long)arg1;
- (unsigned long long)characterIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceBetweenInsertionPoints:(double *)arg3;
- (struct _NSRange)characterRangeForGlyphRange:(struct _NSRange)arg1 actualGlyphRange:(struct _NSRange *)arg2;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (double)defaultBaselineOffsetForFont:(id)arg1;
- (double)defaultLineHeightForFont:(id)arg1;
- (void)deleteGlyphsInRange:(struct _NSRange)arg1;
- (id)description;
- (id)destinationTextContainerForRange:(struct _NSRange)arg1 inTextContainer:(id)arg2;
- (CDUnknownBlockType)didCompleteLayoutObserverBlock;
- (void)drawBackgroundForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawGlyphsForGlyphRange:(struct _NSRange)arg1 atPoint:(struct CGPoint)arg2;
- (void)drawSpellingUnderlineForGlyphRange:(struct _NSRange)arg1 spellingState:(long long)arg2 inGlyphRange:(struct _NSRange)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)drawStrikethroughForGlyphRange:(struct _NSRange)arg1 strikethroughType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (void)drawUnderlineForGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 baselineOffset:(double)arg3 lineFragmentRect:(struct CGRect)arg4 lineFragmentGlyphRange:(struct _NSRange)arg5 containerOrigin:(struct CGPoint)arg6;
- (BOOL)drawsOutsideLineFragmentForGlyphAtIndex:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)endScrollingForView:(id)arg1 textContainer:(id)arg2;
- (void)ensureGlyphsForCharacterRange:(struct _NSRange)arg1;
- (void)ensureGlyphsForGlyphRange:(struct _NSRange)arg1;
- (void)ensureLayoutForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2;
- (void)ensureLayoutForCharacterRange:(struct _NSRange)arg1;
- (void)ensureLayoutForGlyphRange:(struct _NSRange)arg1;
- (void)ensureLayoutForTextContainer:(id)arg1;
- (void)enumerateEnclosingRectsForCharacterRange:(struct _NSRange)arg1 withinSelectedCharacterRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateEnclosingRectsForGlyphRange:(struct _NSRange)arg1 withinSelectedGlyphRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 usingBlock:(CDUnknownBlockType)arg4;
- (void)enumerateLineFragmentsForGlyphRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)fillBackgroundRectArray:(const struct CGRect *)arg1 count:(unsigned long long)arg2 forCharacterRange:(struct _NSRange)arg3 color:(id)arg4;
- (void)fillMarkedBackgroundRectArray:(const struct CGRect *)arg1 count:(unsigned long long)arg2 forCharacterRange:(struct _NSRange)arg3 color:(id)arg4;
- (void)finalize;
- (unsigned long long)firstUnlaidCharacterIndex;
- (unsigned long long)firstUnlaidGlyphIndex;
- (BOOL)flipsIfNeeded;
- (double)fractionOfDistanceThroughGlyphForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2;
- (void)getFirstUnlaidCharacterIndex:(unsigned long long *)arg1 glyphIndex:(unsigned long long *)arg2;
- (unsigned long long)getGlyphs:(unsigned int *)arg1 range:(struct _NSRange)arg2;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(BOOL *)arg5;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned int *)arg2 characterIndexes:(unsigned long long *)arg3 glyphInscriptions:(unsigned long long *)arg4 elasticBits:(BOOL *)arg5 bidiLevels:(char *)arg6;
- (unsigned long long)getGlyphsInRange:(struct _NSRange)arg1 glyphs:(unsigned short *)arg2 properties:(long long *)arg3 characterIndexes:(unsigned long long *)arg4 bidiLevels:(char *)arg5;
- (long long)getLineFragmentInsertionPointArraysForCharacterAtIndex:(unsigned long long)arg1 inDisplayOrder:(BOOL)arg2 positions:(double **)arg3 characterIndexes:(unsigned long long **)arg4 count:(unsigned long long *)arg5 alternatePositions:(double **)arg6 characterIndexes:(unsigned long long **)arg7 count:(unsigned long long *)arg8;
- (unsigned long long)getLineFragmentInsertionPointsForCharacterAtIndex:(unsigned long long)arg1 alternatePositions:(BOOL)arg2 inDisplayOrder:(BOOL)arg3 positions:(double *)arg4 characterIndexes:(unsigned long long *)arg5;
- (unsigned short)glyphAtIndex:(unsigned long long)arg1;
- (unsigned short)glyphAtIndex:(unsigned long long)arg1 isValidIndex:(BOOL *)arg2;
- (id)glyphGenerator;
- (unsigned long long)glyphIndexForCharacterAtIndex:(unsigned long long)arg1;
- (unsigned long long)glyphIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2;
- (unsigned long long)glyphIndexForPoint:(struct CGPoint)arg1 inTextContainer:(id)arg2 fractionOfDistanceThroughGlyph:(double *)arg3;
- (struct _NSRange)glyphRangeForBoundingRect:(struct CGRect)arg1 inTextContainer:(id)arg2;
- (struct _NSRange)glyphRangeForBoundingRectWithoutAdditionalLayout:(struct CGRect)arg1 inTextContainer:(id)arg2;
- (struct _NSRange)glyphRangeForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (struct _NSRange)glyphRangeForTextContainer:(id)arg1;
- (double)hyphenationFactor;
- (BOOL)ignoresAntialiasThreshold;
- (BOOL)ignoresViewTransformations;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)insertGlyph:(unsigned int)arg1 atGlyphIndex:(unsigned long long)arg2 characterIndex:(unsigned long long)arg3;
- (void)insertGlyphs:(const unsigned int *)arg1 length:(unsigned long long)arg2 forStartingGlyphAtIndex:(unsigned long long)arg3 characterIndex:(unsigned long long)arg4;
- (void)insertTextContainer:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)intAttribute:(long long)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)invalidateDisplayForCharacterRange:(struct _NSRange)arg1;
- (void)invalidateDisplayForGlyphRange:(struct _NSRange)arg1;
- (void)invalidateGlyphsForCharacterRange:(struct _NSRange)arg1 changeInLength:(long long)arg2 actualCharacterRange:(struct _NSRange *)arg3;
- (void)invalidateGlyphsOnLayoutInvalidationForGlyphRange:(struct _NSRange)arg1;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange)arg1 actualCharacterRange:(struct _NSRange *)arg2;
- (void)invalidateLayoutForCharacterRange:(struct _NSRange)arg1 isSoft:(BOOL)arg2 actualCharacterRange:(struct _NSRange *)arg3;
- (BOOL)isValidGlyphIndex:(unsigned long long)arg1;
- (id)layoutFragmentsForReplacingCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2 rect:(struct CGRect)arg3 textContainer:(id)arg4;
- (unsigned long long)layoutOptions;
- (struct CGRect)layoutRectForTextBlock:(id)arg1 atIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (struct CGRect)layoutRectForTextBlock:(id)arg1 glyphRange:(struct _NSRange)arg2;
- (struct CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct CGRect)lineFragmentRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (struct CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 allowLayout:(BOOL)arg3;
- (struct CGRect)lineFragmentUsedRectForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (id)linkAttributesForLink:(id)arg1 forCharacterAtIndex:(unsigned long long)arg2;
- (struct CGPoint)locationForGlyphAtIndex:(unsigned long long)arg1;
- (BOOL)notShownAttributeForGlyphAtIndex:(unsigned long long)arg1;
- (struct CGRect)prepareLayoutForBoundingRect:(struct CGRect)arg1 textContainer:(id)arg2;
- (void)processEditingForTextStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (long long)propertyForGlyphAtIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeOfCharacterClusterAtIndex:(unsigned long long)arg1 type:(long long)arg2;
- (struct _NSRange)rangeOfNominallySpacedGlyphsContainingIndex:(unsigned long long)arg1;
- (struct CGRect *)rectArrayForCharacterRange:(struct _NSRange)arg1 withinSelectedCharacterRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long *)arg4;
- (struct CGRect *)rectArrayForGlyphRange:(struct _NSRange)arg1 withinSelectedGlyphRange:(struct _NSRange)arg2 inTextContainer:(id)arg3 rectCount:(unsigned long long *)arg4;
- (void)removeTemporaryAttribute:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)removeTextContainerAtIndex:(unsigned long long)arg1;
- (id)renderingColorForDocumentColor:(id)arg1;
- (void)replaceGlyphAtIndex:(unsigned long long)arg1 withGlyph:(unsigned int)arg2;
- (void)replaceTextStorage:(id)arg1;
- (id)selectedTextAttributesForCharacterAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)setApplicationFrameworkContext:(long long)arg1;
- (void)setAttachmentSize:(struct CGSize)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setBackgroundLayoutEnabled:(BOOL)arg1;
- (void)setBaselineOffset:(double)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setBoundsRect:(struct CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange)arg3;
- (void)setCharacterIndex:(unsigned long long)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setDidCompleteLayoutObserverBlock:(CDUnknownBlockType)arg1;
- (void)setDrawsOutsideLineFragment:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setEllipsisGlyphAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setExtraLineFragmentRect:(struct CGRect)arg1 usedRect:(struct CGRect)arg2 textContainer:(id)arg3;
- (void)setFlipsIfNeeded:(BOOL)arg1;
- (void)setGlyphGenerator:(id)arg1;
- (void)setGlyphs:(const unsigned short *)arg1 properties:(const long long *)arg2 characterIndexes:(const unsigned long long *)arg3 font:(id)arg4 forGlyphRange:(struct _NSRange)arg5;
- (void)setHyphenationFactor:(double)arg1;
- (void)setIgnoresAntialiasThreshold:(BOOL)arg1;
- (void)setIgnoresViewTransformations:(BOOL)arg1;
- (void)setIntAttribute:(long long)arg1 value:(long long)arg2 forGlyphAtIndex:(unsigned long long)arg3;
- (void)setLayoutRect:(struct CGRect)arg1 forTextBlock:(id)arg2 glyphRange:(struct _NSRange)arg3;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3;
- (void)setLineFragmentRect:(struct CGRect)arg1 forGlyphRange:(struct _NSRange)arg2 usedRect:(struct CGRect)arg3 baselineOffset:(double)arg4;
- (void)setLocation:(struct CGPoint)arg1 forStartOfGlyphRange:(struct _NSRange)arg2;
- (void)setLocation:(struct CGPoint)arg1 forStartOfGlyphRange:(struct _NSRange)arg2 coalesceRuns:(BOOL)arg3;
- (void)setLocations:(struct CGPoint *)arg1 startingGlyphIndexes:(unsigned long long *)arg2 count:(unsigned long long)arg3 forGlyphRange:(struct _NSRange)arg4;
- (void)setNotShownAttribute:(BOOL)arg1 forGlyphAtIndex:(unsigned long long)arg2;
- (void)setSynchronizesAlignmentToDirection:(BOOL)arg1;
- (void)setTemporaryAttributes:(id)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)setTextContainer:(id)arg1 forGlyphRange:(struct _NSRange)arg2;
- (void)setTypesetter:(id)arg1;
- (void)setTypesetterBehavior:(long long)arg1;
- (void)setUnderlineColorForSpelling:(id)arg1;
- (void)setUnderlineColorForTextAlternatives:(id)arg1;
- (void)setUsesScreenFonts:(BOOL)arg1;
- (void)setViewProvider:(id)arg1 forTextAttachment:(id)arg2 characterIndex:(unsigned long long)arg3;
- (void)showAttachment:(id)arg1 inRect:(struct CGRect)arg2 textContainer:(id)arg3 characterIndex:(unsigned long long)arg4;
- (void)showAttachmentCell:(id)arg1 inRect:(struct CGRect)arg2 characterIndex:(unsigned long long)arg3;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(unsigned long long)arg3 font:(id)arg4 matrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)showCGGlyphs:(const unsigned short *)arg1 positions:(const struct CGPoint *)arg2 count:(long long)arg3 font:(id)arg4 textMatrix:(struct CGAffineTransform)arg5 attributes:(id)arg6 inContext:(struct CGContext *)arg7;
- (void)strikethroughGlyphRange:(struct _NSRange)arg1 strikethroughType:(long long)arg2 lineFragmentRect:(struct CGRect)arg3 lineFragmentGlyphRange:(struct _NSRange)arg4 containerOrigin:(struct CGPoint)arg5;
- (id)substituteFontForFont:(id)arg1;
- (BOOL)synchronizesAlignmentToDirection;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)temporaryAttribute:(id)arg1 atCharacterIndex:(unsigned long long)arg2 longestEffectiveRange:(struct _NSRange *)arg3 inRange:(struct _NSRange)arg4;
- (id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)temporaryAttributesAtCharacterIndex:(unsigned long long)arg1 longestEffectiveRange:(struct _NSRange *)arg2 inRange:(struct _NSRange)arg3;
- (void)textContainerChangedGeometry:(id)arg1;
- (void)textContainerChangedTextView:(id)arg1;
- (void)textContainerChangedTextView:(id)arg1 fromTextView:(id)arg2;
- (id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)textContainerForGlyphAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2 withoutAdditionalLayout:(BOOL)arg3;
- (void)textStorage:(id)arg1 edited:(unsigned long long)arg2 range:(struct _NSRange)arg3 changeInLength:(long long)arg4 invalidatedRange:(struct _NSRange)arg5;
- (struct _NSRange)truncatedGlyphRangeInLineFragmentForGlyphAtIndex:(unsigned long long)arg1;
- (id)typesetter;
- (long long)typesetterBehavior;
- (id)underlineColorForSpelling;
- (id)underlineColorForTextAlternatives;
- (void)underlineGlyphRange:(struct _NSRange)arg1 underlineType:(long long)arg2 lineFragmentRect:(struct CGRect)arg3 lineFragmentGlyphRange:(struct _NSRange)arg4 containerOrigin:(struct CGPoint)arg5;
- (struct CGRect)usedRectForTextContainer:(id)arg1;
- (BOOL)usesScreenFonts;
- (id)viewProviderForTextAttachment:(id)arg1 characterIndex:(unsigned long long)arg2;

@end

