//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSString.h>

#import <TSText/TSWPTextSource-Protocol.h>

@class TSWPDeletionRangeMap, TSWPRangeArray;

@interface TSWPFilteredString : NSString <TSWPTextSource>
{
    unsigned long long _length;
    NSString *_sourceString;
    TSWPDeletionRangeMap *_rangeMap;
    TSWPRangeArray *_sourceRanges;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSWPDeletionRangeMap *rangeMap; // @synthesize rangeMap=_rangeMap;
@property (readonly, nonatomic) TSWPRangeArray *sourceRanges; // @synthesize sourceRanges=_sourceRanges;
@property (strong, nonatomic) NSString *sourceString; // @synthesize sourceString=_sourceString;
@property (readonly) Class superclass;

+ (id)stringWithString:(id)arg1;
- (void).cxx_destruct;
- (BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)attachmentAtCharIndex:(unsigned long long)arg1;
- (id)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL *)arg2 attributesTable:(id *)arg3 effectiveRange:(struct _NSRange *)arg4;
- (unsigned long long)changeCount;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeRemappedFromStorage:(struct _NSRange)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (id)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (id)characterStyleForDropCapAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (void)checkDebug;
- (id)dropCapStyleAtCharIndex:(unsigned long long)arg1;
- (id)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(id)arg3 hyphenChar:(unsigned int *)arg4;
- (id)initWithString:(id)arg1;
- (id)initWithString:(id)arg1 subrange:(struct _NSRange)arg2 removeRanges:(id)arg3;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (struct _NSRange)rangeOfDropCapAtCharIndex:(unsigned long long)arg1;
- (id)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (id)smartFieldsWithAttributeKind:(unsigned long long)arg1 intersectingRange:(struct _NSRange)arg2;
- (unsigned long long)storageLength;
- (id)string;
- (void)updateStorageChangeCount;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 includeHyphenation:(BOOL)arg3;

@end

