//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TSWPTextWrapper : NSObject
{
}

+ (unsigned int)p_wrappedSubrectsForRectGPC:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double *)arg5;
+ (unsigned int)p_wrappedSubrectsForRectOptimized:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double *)arg5;
+ (unsigned int)splitLine:(struct CGRect)arg1 lineSegmentRects:(struct CGRect [128])arg2 polygon:(id)arg3 type:(int)arg4 skipHint:(double *)arg5;
+ (double)unobstructedSpanForPath:(id)arg1 startingSpan:(struct CGRect)arg2 columnBounds:(struct CGRect)arg3;

@end

