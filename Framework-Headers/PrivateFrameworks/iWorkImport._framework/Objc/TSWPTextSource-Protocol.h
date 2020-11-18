//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, NSLocale, NSString, TSWPAttachment, TSWPCharacterStyle, TSWPFootnoteReferenceAttachment, TSWPParagraphStyle, TSWPSmartField;

@protocol TSWPTextSource <NSObject>
- (BOOL)adjustRangesByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (TSWPAttachment *)attachmentAtCharIndex:(unsigned long long)arg1;
- (TSWPAttachment *)attachmentOrFootnoteAtCharIndex:(unsigned long long)arg1;
- (void)attributesAtCharIndex:(unsigned long long)arg1 attributesOfInterest:(BOOL [22])arg2 attributesTable:(id [22])arg3 effectiveRange:(struct _NSRange *)arg4;
- (unsigned long long)changeCount;
- (unsigned long long)charIndexMappedFromStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexMappedToStorage:(unsigned long long)arg1;
- (unsigned long long)charIndexRemappedFromStorage:(unsigned long long)arg1;
- (struct _NSRange)charRangeMappedFromStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeMappedToStorage:(struct _NSRange)arg1;
- (struct _NSRange)charRangeRemappedFromStorage:(struct _NSRange)arg1;
- (unsigned short)characterAtIndex:(unsigned long long)arg1;
- (TSWPCharacterStyle *)characterStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (TSWPFootnoteReferenceAttachment *)footnoteReferenceAtCharIndex:(unsigned long long)arg1;
- (void)getCharacters:(unsigned short *)arg1 range:(struct _NSRange)arg2;
- (BOOL)hasColumnBreakAtCharIndex:(unsigned long long)arg1;
- (BOOL)hasColumnStyleForParagraphBreakAtCharIndex:(unsigned long long)arg1;
- (long long)hyphenationLocationBeforeIndex:(long long)arg1 inRange:(struct _NSRange)arg2 locale:(NSLocale *)arg3 hyphenChar:(unsigned int *)arg4;
- (BOOL)isWritingDirectionRightToLeftForParagraphAtCharIndex:(unsigned long long)arg1;
- (unsigned long long)length;
- (id)objectAtLocationPriorToMappedCharIndex:(unsigned long long)arg1 forAttributeKind:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (TSWPParagraphStyle *)paragraphStyleAtCharIndex:(unsigned long long)arg1 effectiveRange:(struct _NSRange *)arg2;
- (TSWPSmartField *)smartFieldAtCharIndex:(unsigned long long)arg1 attributeKind:(unsigned long long)arg2 effectiveRange:(struct _NSRange *)arg3;
- (NSArray *)smartFieldsWithAttributeKind:(unsigned long long)arg1 intersectingRange:(struct _NSRange)arg2;
- (unsigned long long)storageLength;
- (NSString *)string;
- (void)updateStorageChangeCount;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2;
- (struct _NSRange)wordAtCharIndex:(unsigned long long)arg1 includePreviousWord:(BOOL)arg2 includeHyphenation:(BOOL)arg3;

@optional
- (void)enumerateSmartFieldsWithAttributeKind:(unsigned long long)arg1 inRange:(struct _NSRange)arg2 usingBlock:(void (^)(id, struct _NSRange, BOOL *))arg3;
- (void)enumerateWithAttributeKind:(unsigned long long)arg1 inRange:(struct _NSRange)arg2 usingBlock:(void (^)(id, struct _NSRange, BOOL *))arg3;
- (BOOL)hasSmartFieldsInRange:(struct _NSRange)arg1;
- (NSString *)substringWithRange:(struct _NSRange)arg1;
@end

