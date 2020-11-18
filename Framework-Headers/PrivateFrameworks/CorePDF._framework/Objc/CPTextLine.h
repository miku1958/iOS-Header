//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CorePDF/CPTextObject.h>

#import <CorePDF/CPDisposable-Protocol.h>

@class CPCharSequence, NSArray;

__attribute__((visibility("hidden")))
@interface CPTextLine : CPTextObject <CPDisposable>
{
    CPCharSequence *charSequence;
    CDStruct_2e2afed4 *wordArray;
    unsigned int wordCount;
    struct CPInlineContainer *inlineList;
    int lineNumber;
    int columnNumber;
    double baseline;
    BOOL baseLineIsNull;
    BOOL hasBeenSplit;
    BOOL hasBeenProcessed;
    BOOL maySplit;
    BOOL hasTabs;
    NSArray *columnBreaks;
    NSArray *xsegments;
    int levels;
    float maximumLetterGap;
    float maximumWordGap;
    int tabsBefore;
    BOOL irregular;
    unsigned int leftSpacerIndex;
    unsigned int rightSpacerIndex;
    BOOL isListItem;
    unsigned int listSpacerIndex;
    BOOL lineBreakAfter;
    struct CPPDFStyle *uniformStyle;
    unsigned short uniformStyleFlags;
    double monospaceWidth;
    unsigned int *spacesBefore;
    BOOL disposed;
}

@property (nonatomic) BOOL isListItem; // @synthesize isListItem;
@property (nonatomic) unsigned int leftSpacerIndex; // @synthesize leftSpacerIndex;
@property (nonatomic) BOOL lineBreakAfter; // @synthesize lineBreakAfter;
@property (nonatomic) unsigned int listSpacerIndex; // @synthesize listSpacerIndex;
@property (nonatomic) unsigned int rightSpacerIndex; // @synthesize rightSpacerIndex;

- (void)accept:(id)arg1;
- (int)align;
- (struct CGPoint)anchor;
- (void)anchorChunk:(id)arg1 atWordIndex:(unsigned int)arg2;
- (id)attributes;
- (long long)baseLineAscending:(id)arg1;
- (long long)baseLineDescending:(id)arg1;
- (double)baseline;
- (struct CGRect)bounds;
- (struct CGRect)boundsOfWordAtIndex:(unsigned int)arg1;
- (BOOL)changesFontAt:(id)arg1;
- (id)charSequence;
- (id)columnBreaks;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)dispose;
- (void)finalize;
- (CDStruct_2e2afed4 *)firstWord;
- (void)fitBoundsToChildren;
- (BOOL)hasBeenProcessed;
- (BOOL)hasBeenSplit;
- (BOOL)hasDropCap;
- (BOOL)hasJustifiedAlignment;
- (BOOL)hasTabs;
- (BOOL)hyphenated;
- (id)init;
- (unsigned int)inlineCount;
- (struct CPInlineContainer *)inlineList;
- (BOOL)irregular;
- (BOOL)isIndivisible;
- (BOOL)isMonospaced;
- (CDStruct_2e2afed4 *)lastWord;
- (int)levels;
- (BOOL)mapToWordPairs:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToWordPairsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToWords:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (BOOL)mapToWordsWithIndex:(CDUnknownFunctionPointerType)arg1 passing:(void *)arg2;
- (float)maximumLetterGap;
- (float)maximumWordGap;
- (double)medianFontSize;
- (double)monospaceWidth;
- (id)newTextLineFromWordAt:(unsigned int)arg1 lengthInWords:(unsigned int)arg2;
- (BOOL)overlapsHorizontally:(struct CGRect)arg1;
- (BOOL)overlapsWith:(id)arg1;
- (id)properties;
- (void)recomputeBaseline;
- (void)recomputeLevels;
- (BOOL)removeTextLines:(id)arg1 whereTrue:(CDUnknownFunctionPointerType)arg2 passing:(void *)arg3;
- (void)setBaseline:(double)arg1;
- (void)setBaselineToNull;
- (void)setCharSequence:(id)arg1;
- (void)setColumnBreaks:(id)arg1;
- (void)setHasBeenProcessed:(BOOL)arg1;
- (void)setHasBeenSplit:(BOOL)arg1;
- (void)setHasTabs:(BOOL)arg1;
- (void)setIrregular:(BOOL)arg1;
- (void)setLevels:(int)arg1;
- (void)setMaximumLetterGap:(float)arg1;
- (void)setMaximumWordGap:(float)arg1;
- (void)setSpaces:(unsigned int)arg1 beforeWordAtIndex:(unsigned int)arg2;
- (void)setTabsBefore:(int)arg1;
- (unsigned int)spacesBeforeWordAtIndex:(unsigned int)arg1;
- (BOOL)styleIsUniform:(struct CPPDFStyle **)arg1 styleFlags:(unsigned short)arg2;
- (int)tabsBefore;
- (long long)topIsAbove:(id)arg1;
- (void)translateObjectYBy:(double)arg1;
- (CDStruct_2e2afed4 *)wordArray;
- (CDStruct_2e2afed4 *)wordArrayOfSize:(unsigned int)arg1;
- (CDStruct_2e2afed4 *)wordAtIndex:(unsigned int)arg1;
- (unsigned int)wordCount;
- (long long)zOrder;

@end

