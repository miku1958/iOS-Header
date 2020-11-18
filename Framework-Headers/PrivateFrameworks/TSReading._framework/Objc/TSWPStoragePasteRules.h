//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSPObject, TSWPColumnStyle, TSWPListStyle, TSWPParagraphStyle, TSWPStorage;

@interface TSWPStoragePasteRules : NSObject
{
    unsigned int _flags;
    unsigned int _actionFlags[4];
    unsigned int _lastFlag;
    struct _NSRange _srcLeadRange;
    struct _NSRange _srcTrailRange;
    BOOL _mapDestTrailCS;
    TSWPStorage *_destStorage;
    unsigned long long _sourceColumnStyleCount;
    unsigned long long _sourceSectionCount;
    struct {
        TSWPParagraphStyle *parStyle;
        TSPObject *section;
        TSWPColumnStyle *columnStyle;
        TSWPListStyle *listStyle;
        CDStruct_8a5ee6e3 parData;
        CDStruct_8a5ee6e3 parStartData;
        CDStruct_8a5ee6e3 parBidiData;
    } _paragraphs[4];
}

- (void)addActionFlag:(int)arg1;
- (void)applyParagraph:(int)arg1 toCharIndex:(unsigned long long)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)dealloc;
- (void)didPasteWithIOTransaction:(struct TSWPStorageTransaction *)arg1 atDestRange:(struct _NSRange)arg2;
- (void)mapCharacterStyleProperties:(id)arg1 toRange:(struct _NSRange)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)mapCharacterStyles:(int)arg1 toRange:(struct _NSRange)arg2 ioTransaction:(struct TSWPStorageTransaction *)arg3;
- (void)setupFlagsForPastingSrcStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange)arg3;
- (void)willPasteStorage:(id)arg1 intoDestStorage:(id)arg2 atDestRange:(struct _NSRange)arg3;

@end

