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
    vector_7c702c4c _unmappedIndexes;
    vector_7c702c4c _mappedIndexes;
}

@property (nonatomic) vector_7c702c4c mappedIndexes; // @synthesize mappedIndexes=_mappedIndexes;
@property (nonatomic) struct _NSRange subRange; // @synthesize subRange=_subRange;
@property (nonatomic) vector_7c702c4c unmappedIndexes; // @synthesize unmappedIndexes=_unmappedIndexes;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)adjustByDelta:(long long)arg1 startingAt:(unsigned long long)arg2;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const vector_06e666a8 *)arg2 affinity:(int)arg3;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedIndexes:(const vector_06e666a8 *)arg2 isBackwardAffinities:(const vector_553f084a *)arg3;
- (id)initWithSubRange:(struct _NSRange)arg1 unmappedPairIndexes:(const vector_06e666a8 *)arg2;
- (unsigned long long)mappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)mappedCharRange:(struct _NSRange)arg1;
- (unsigned long long)p_extendLeftMappedIndex:(unsigned long long)arg1;
- (unsigned long long)p_extendRightMappedIndex:(unsigned long long)arg1;
- (unsigned long long)unmappedCharIndex:(unsigned long long)arg1;
- (struct _NSRange)unmappedCharRange:(struct _NSRange)arg1;

@end

