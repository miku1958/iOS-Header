//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSWPRangeArray;

@interface TSWPDeletionRangeMap : NSObject
{
    unsigned long long _subRangeStart;
    TSWPRangeArray *_removedRanges;
}

- (void)adjustByDelta:(long long)arg1;
- (BOOL)containsCharIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithSubRange:(struct _NSRange)arg1 removeRanges:(id)arg2;
- (id)inverseRangesInStorageRange:(struct _NSRange)arg1;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;

@end
