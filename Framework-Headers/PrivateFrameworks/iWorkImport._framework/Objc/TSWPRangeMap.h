//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSWPRangeMap : NSObject
{
    struct _NSRange _subRange;
    vector_ea6649b6 _unmappedIndexes;
    vector_ea6649b6 _mappedIndexes;
}

@property (nonatomic) vector_ea6649b6 mappedIndexes; // @synthesize mappedIndexes=_mappedIndexes;
@property (nonatomic) struct _NSRange subRange; // @synthesize subRange=_subRange;
@property (nonatomic) vector_ea6649b6 unmappedIndexes; // @synthesize unmappedIndexes=_unmappedIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const vector_88016b54 *)arg2 affinity:(int)arg3;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const vector_88016b54 *)arg2 isBackwardAffinities:(const vector_277e069e *)arg3;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedPairIndexes:(const vector_88016b54 *)arg2;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;

@end

