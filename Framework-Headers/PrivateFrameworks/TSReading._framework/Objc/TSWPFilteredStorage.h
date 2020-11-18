//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/TSWPTextSource-Protocol.h>

@class NSString, TSWPDeletionRangeMap, TSWPStorage;

@interface TSWPFilteredStorage : NSObject <TSWPTextSource>
{
    TSWPStorage *_storage;
    TSWPDeletionRangeMap *_rangeMap;
    unsigned long long _length;
    unsigned long long _storageLength;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)adjustRangesByDelta:(long long)arg1;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL [19])arg2 attributesTable:(id [19])arg3 effectiveRange:(struct _NSRange *)arg4;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct __CFDictionary *)createFilteredCoreTextAttributes:(struct __CFDictionary *)arg1 effectiveRange:(struct _NSRange *)arg2 filterDelegate:(id)arg3;
- (void)dealloc;
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateWithAttributeKind:(unsigned int)arg1 inRange:(struct _NSRange)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (BOOL)hasSmartFieldsInRange:(struct _NSRange)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(struct __CFLocale *)arg3 hyphenChar:(unsigned int *)arg4;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange)arg2;
- (id)initWithStorage:(id)arg1 subRange:(struct _NSRange)arg2 removeRanges:(id)arg3;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (unsigned long long)nextCharacterIndex:(unsigned long long)arg1;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (unsigned long long)previousCharacterIndex:(unsigned long long)arg1;
- (struct _NSRange)rangeForSelectionAtCharIndex:(unsigned long long)arg1 caretIndex:(unsigned long long)arg2;
- (struct _NSRange)scanBackwardForWordAtCharIndex:(unsigned long long)arg1;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned int)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)smartFieldsWithAttributeKind:(unsigned int)arg1 intersectingRange:(struct _NSRange)arg2;
- (unsigned long long)storageLength;
- (id)string;
- (id)substringWithRange:(struct _NSRange)arg1;
- (struct _NSRange)whiteSpaceRangeAtCharIndex:(unsigned long long)arg1 includingBreaks:(BOOL)arg2;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2;

@end

