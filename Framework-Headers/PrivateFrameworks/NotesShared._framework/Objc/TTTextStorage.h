//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/NSTextStorage.h>

#import <NotesShared/TTMergeableStringDelegate-Protocol.h>

@class NSArray, NSAttributedString, NSMutableArray, NSMutableAttributedString, NSString, NSUndoManager, TTMergeableAttributedString, TTMergeableStringVersionedDocument;
@protocol TTTextStorageStyler;

@interface TTTextStorage : NSTextStorage <TTMergeableStringDelegate>
{
    NSMutableAttributedString *_attributedString;
    unsigned long long _temporaryAttributeEditing;
    BOOL _directlyEditing;
    BOOL _previouslyHadMarkedText;
    BOOL _wantsUndoCommands;
    BOOL _convertAttributes;
    BOOL _retainOriginalFormatting;
    BOOL _filterSubstringAttributes;
    BOOL _filterPastedAttributes;
    BOOL _filterSubstringAttributesForPlainText;
    BOOL _disableUndoCoalesceBreaking;
    BOOL _isDictating;
    BOOL _isHandlingTextCheckingResults;
    BOOL _isTypingSelectingOrMarkingText;
    BOOL _isDragging;
    BOOL _isResettingBaseWritingDirection;
    BOOL _isEndingEditing;
    BOOL _isFixing;
    BOOL _isApplyingUndoCommand;
    BOOL _pendingFixupAfterEditing;
    NSUndoManager *_undoManager;
    id<TTTextStorageStyler> _styler;
    NSMutableArray *_deletedRanges;
    TTMergeableStringVersionedDocument *_document;
    NSMutableArray *_undoCommands;
    NSMutableArray *_coalescingUndoCommands;
    unsigned long long _editingCount;
    unsigned long long _ttEditedMask;
    long long _ttChangeInLength;
    struct _NSRange _beforeEndEditedRange;
    struct _NSRange _lastUndoEditRange;
    struct _NSRange _ttEditedRange;
}

@property (readonly, nonatomic) NSAttributedString *_icaxUnfilteredAttributedString;
@property (strong, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (nonatomic) struct _NSRange beforeEndEditedRange; // @synthesize beforeEndEditedRange=_beforeEndEditedRange;
@property (strong, nonatomic) NSMutableArray *coalescingUndoCommands; // @synthesize coalescingUndoCommands=_coalescingUndoCommands;
@property (nonatomic) BOOL convertAttributes; // @synthesize convertAttributes=_convertAttributes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMutableArray *deletedRanges; // @synthesize deletedRanges=_deletedRanges;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableUndoCoalesceBreaking; // @synthesize disableUndoCoalesceBreaking=_disableUndoCoalesceBreaking;
@property (readonly, nonatomic) TTMergeableStringVersionedDocument *document; // @synthesize document=_document;
@property (nonatomic) unsigned long long editingCount; // @synthesize editingCount=_editingCount;
@property (nonatomic) BOOL filterPastedAttributes; // @synthesize filterPastedAttributes=_filterPastedAttributes;
@property (nonatomic) BOOL filterSubstringAttributes; // @synthesize filterSubstringAttributes=_filterSubstringAttributes;
@property (nonatomic) BOOL filterSubstringAttributesForPlainText; // @synthesize filterSubstringAttributesForPlainText=_filterSubstringAttributesForPlainText;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isApplyingUndoCommand; // @synthesize isApplyingUndoCommand=_isApplyingUndoCommand;
@property (nonatomic) BOOL isDictating; // @synthesize isDictating=_isDictating;
@property (nonatomic) BOOL isDragging; // @synthesize isDragging=_isDragging;
@property (readonly, nonatomic) BOOL isEditingTemporaryAttributes;
@property (nonatomic) BOOL isEndingEditing; // @synthesize isEndingEditing=_isEndingEditing;
@property (nonatomic) BOOL isFixing; // @synthesize isFixing=_isFixing;
@property (nonatomic) BOOL isHandlingTextCheckingResults; // @synthesize isHandlingTextCheckingResults=_isHandlingTextCheckingResults;
@property (nonatomic) BOOL isResettingBaseWritingDirection; // @synthesize isResettingBaseWritingDirection=_isResettingBaseWritingDirection;
@property (nonatomic) BOOL isTypingSelectingOrMarkingText; // @synthesize isTypingSelectingOrMarkingText=_isTypingSelectingOrMarkingText;
@property (nonatomic) struct _NSRange lastUndoEditRange; // @synthesize lastUndoEditRange=_lastUndoEditRange;
@property (readonly, nonatomic) TTMergeableAttributedString *mergeableString;
@property (nonatomic) BOOL pendingFixupAfterEditing; // @synthesize pendingFixupAfterEditing=_pendingFixupAfterEditing;
@property (nonatomic) BOOL retainOriginalFormatting; // @synthesize retainOriginalFormatting=_retainOriginalFormatting;
@property (strong, nonatomic) id<TTTextStorageStyler> styler; // @synthesize styler=_styler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *textViews;
@property (nonatomic) long long ttChangeInLength; // @synthesize ttChangeInLength=_ttChangeInLength;
@property (nonatomic) unsigned long long ttEditedMask; // @synthesize ttEditedMask=_ttEditedMask;
@property (nonatomic) struct _NSRange ttEditedRange; // @synthesize ttEditedRange=_ttEditedRange;
@property (strong, nonatomic) NSMutableArray *undoCommands; // @synthesize undoCommands=_undoCommands;
@property (strong, nonatomic) NSUndoManager *undoManager; // @synthesize undoManager=_undoManager;
@property (nonatomic) BOOL wantsUndoCommands; // @synthesize wantsUndoCommands=_wantsUndoCommands;

+ (id)filteredAttributedSubstring:(id)arg1 fromRange:(struct _NSRange)arg2 forPlainText:(BOOL)arg3 fixAttachments:(BOOL)arg4;
+ (void)fixAttachmentsForRenderingInAttributedString:(id)arg1;
+ (id)removeTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(BOOL)arg2;
+ (id)standardizedAttributedStringWithoutTextAttachmentsForAttributedString:(id)arg1 translateTTFont:(BOOL)arg2;
- (void).cxx_destruct;
- (BOOL)_shouldSetOriginalFontAttribute;
- (BOOL)_usesSimpleTextEffects;
- (void)addAttribute:(id)arg1 value:(id)arg2 range:(struct _NSRange)arg3;
- (void)addUndoCommand:(id)arg1;
- (void)applyUndoCommands:(id)arg1;
- (id)attributedSubstringFromRange:(struct _NSRange)arg1;
- (id)attributesAtIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)beginEditing;
- (void)beginTemporaryAttributeEditing;
- (void)beginTemporaryAttributes;
- (void)breakUndoCoalescing;
- (void)convertNSTablesToTabs:(id)arg1;
- (void)coordinateAccess:(CDUnknownBlockType)arg1;
- (void)coordinateEditing:(CDUnknownBlockType)arg1;
- (void)coordinateReading:(CDUnknownBlockType)arg1;
- (id)dataFromRange:(struct _NSRange)arg1 documentAttributes:(id)arg2 error:(id *)arg3;
- (void)dd_makeLinksForResultsInAttributesOfType:(unsigned long long)arg1 context:(id)arg2;
- (void)dd_resetResults;
- (void)edited:(unsigned long long)arg1 range:(struct _NSRange)arg2 changeInLength:(long long)arg3;
- (void)editedAttributeRange:(struct _NSRange)arg1;
- (void)editedRange:(struct _NSRange)arg1 changeInLength:(long long)arg2;
- (void)endEditing;
- (void)endTemporaryAttributeEditing;
- (void)endTemporaryAttributes;
- (id)filteredAttributedSubstringFromRange:(struct _NSRange)arg1;
- (void)fixupAfterEditing;
- (void)fixupAfterEditingDelayedToEndOfRunLoop;
- (void)forceFixupAfterEditingIfDelayed;
- (BOOL)ic_containsAttribute:(id)arg1 InRange:(struct _NSRange)arg2;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (BOOL)isDeletingDictationAttachmentWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;
- (BOOL)isEditing;
- (BOOL)isEditingOrConvertingMarkedText;
- (unsigned long long)mergeWithDocument:(id)arg1;
- (void)preReplaceCharactersInRange:(struct _NSRange)arg1 withStringLength:(unsigned long long)arg2;
- (void)removeAttribute:(id)arg1 range:(struct _NSRange)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceWithDocument:(id)arg1;
- (void)resetTTEdits;
- (void)restoreSelection:(id)arg1;
- (void)saveSelectionDuringBlock:(CDUnknownBlockType)arg1;
- (void)saveSelectionDuringBlock:(CDUnknownBlockType)arg1 affinity:(unsigned long long)arg2;
- (id)savedSelectionWithSelectionAffinity:(unsigned long long)arg1;
- (void)setAttributes:(id)arg1 range:(struct _NSRange)arg2;
- (BOOL)shouldBreakUndoCoalescingWithReplacementRange:(struct _NSRange)arg1 replacementLength:(unsigned long long)arg2;
- (id)standardizedAttributedStringWithoutTextAttachments;
- (id)string;

@end

