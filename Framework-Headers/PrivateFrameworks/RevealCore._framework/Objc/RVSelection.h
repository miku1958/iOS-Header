//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface RVSelection : NSObject
{
}

+ (unsigned long long)maxContextLength;
+ (struct _NSRange)revealRangeAtIndex:(unsigned long long)arg1 selectedRanges:(id)arg2 shouldUpdateSelection:(BOOL *)arg3;
+ (struct _NSRange)searchRangeForString:(id)arg1 aroundLocation:(unsigned long long)arg2;

@end

