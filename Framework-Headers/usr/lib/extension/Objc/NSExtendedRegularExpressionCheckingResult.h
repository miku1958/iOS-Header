//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSRegularExpressionCheckingResult.h>

@class NSRegularExpression;

@interface NSExtendedRegularExpressionCheckingResult : NSRegularExpressionCheckingResult
{
    NSRegularExpression *_regularExpression;
    struct _NSRange _ranges[7];
}

- (BOOL)_adjustRangesWithOffset:(long long)arg1;
- (void)dealloc;
- (id)initWithRangeArray:(id)arg1 regularExpression:(id)arg2;
- (id)initWithRanges:(struct _NSRange *)arg1 count:(unsigned long long)arg2 regularExpression:(id)arg3;
- (unsigned long long)numberOfRanges;
- (struct _NSRange)range;
- (id)rangeArray;
- (struct _NSRange)rangeAtIndex:(unsigned long long)arg1;
- (id)regularExpression;

@end

