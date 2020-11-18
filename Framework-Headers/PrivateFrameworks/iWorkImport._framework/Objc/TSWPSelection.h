//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

#import <iWorkImport/TSDTextSelection-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSWPSelection : TSKSelection <TSDTextSelection>
{
    int _type;
    struct _NSRange _range;
    unsigned long long _headChar;
    unsigned long long _tailChar;
    BOOL _leadingEdge;
    unsigned long long _leadingCharIndex;
    BOOL _validVisualRanges;
    int _styleInsertionBehavior;
    int _caretAffinity;
    struct _NSRange _smartFieldRange;
    struct TSWPRangeVector _visualRanges;
}

@property (readonly, nonatomic) int caretAffinity; // @synthesize caretAffinity=_caretAffinity;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long headChar; // @synthesize headChar=_headChar;
@property (readonly, nonatomic) BOOL isAtEndOfLine;
@property (readonly, nonatomic) BOOL isEmpty;
@property (readonly, nonatomic) BOOL isInsertionPoint;
@property (readonly, nonatomic) BOOL isRange;
@property (readonly, nonatomic) BOOL isValid;
@property (readonly, nonatomic) BOOL isVisual;
@property (readonly, nonatomic) unsigned long long leadingCharIndex; // @synthesize leadingCharIndex=_leadingCharIndex;
@property (readonly, nonatomic) BOOL leadingEdge; // @synthesize leadingEdge=_leadingEdge;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly, nonatomic) struct _NSRange rawRange; // @synthesize rawRange=_range;
@property (readonly, nonatomic) struct _NSRange smartFieldRange; // @synthesize smartFieldRange=_smartFieldRange;
@property (readonly, nonatomic) int styleInsertionBehavior; // @synthesize styleInsertionBehavior=_styleInsertionBehavior;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tailChar; // @synthesize tailChar=_tailChar;
@property (readonly, nonatomic) int type; // @synthesize type=_type;
@property (readonly, nonatomic) BOOL validVisualRanges; // @synthesize validVisualRanges=_validVisualRanges;

+ (Class)archivedSelectionClass;
+ (BOOL)p_checkEndOfLineFlagForRange:(struct _NSRange *)arg1 leadingEdge:(BOOL *)arg2 type:(int *)arg3 endOfLine:(BOOL)arg4 storage:(id)arg5;
+ (id)selectionFromWPSelection:(id)arg1;
+ (id)selectionWithRange:(struct _NSRange)arg1;
+ (id)selectionWithRange:(struct _NSRange)arg1 type:(int)arg2 leadingEdge:(BOOL)arg3 storage:(id)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)constrainToRange:(struct _NSRange)arg1;
- (BOOL)containsCharacterAtIndex:(unsigned long long)arg1;
- (BOOL)containsCharacterAtIndex:(unsigned long long)arg1 allowRightEdge:(BOOL)arg2;
- (id)copyWithNewRange:(struct _NSRange)arg1;
- (id)copyWithNewStyleInsertionBehavior:(int)arg1 newCaretAffinity:(int)arg2;
- (id)copyWithNewType:(int)arg1;
- (id)copyWithNewType:(int)arg1 range:(struct _NSRange)arg2;
- (id)copyWithNewType:(int)arg1 smartFieldRange:(struct _NSRange)arg2;
- (id)copyWithNewVisualRanges:(const struct TSWPRangeVector *)arg1;
- (id)copyWithNewVisualTypeRange:(struct _NSRange)arg1 head:(unsigned long long)arg2 tail:(unsigned long long)arg3;
- (id)copyWithVisualRanges:(const struct TSWPRangeVector *)arg1 headChar:(unsigned long long)arg2 tailChar:(unsigned long long)arg3 rightToLeft:(BOOL)arg4 sameLine:(BOOL)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)end;
- (void)i_setVisualRanges:(const struct TSWPRangeVector *)arg1;
- (struct TSWPRangeVector *)i_visualRanges;
- (id)initWithArchive:(const struct SelectionArchive *)arg1;
- (id)initWithRange:(struct _NSRange)arg1;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(BOOL)arg6 leadingCharIndex:(unsigned long long)arg7;
- (id)initWithType:(int)arg1 range:(struct _NSRange)arg2 styleInsertionBehavior:(int)arg3 caretAffinity:(int)arg4 smartFieldRange:(struct _NSRange)arg5 leadingEdge:(BOOL)arg6 storage:(id)arg7;
- (unsigned long long)insertionChar;
- (BOOL)intersectsRange:(struct _NSRange)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalentForInsertionStyle:(id)arg1;
- (unsigned long long)leftEdge;
- (BOOL)p_isEqual:(id)arg1;
- (unsigned long long)rightEdge;
- (void)saveToArchive:(struct SelectionArchive *)arg1 archiver:(id)arg2;
- (void)setHeadChar:(unsigned long long)arg1 tailChar:(unsigned long long)arg2;
- (unsigned long long)start;
- (struct _NSRange)superRange;
- (unsigned long long)visualRangeCount;
- (const struct TSWPRangeVector *)visualRanges;
- (id)visualRangesArray;

@end

