//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@interface MLInt64ProbabilityDictionaryEnumerator : NSEnumerator
{
    __map_iterator_7eacffce _iter;
    __map_iterator_7eacffce _iterEnd;
}

@property (nonatomic) __map_iterator_7eacffce iter; // @synthesize iter=_iter;
@property (nonatomic) __map_iterator_7eacffce iterEnd; // @synthesize iterEnd=_iterEnd;

+ (id)enumeratorFromMap:(map_f8690629 *)arg1;
- (id).cxx_construct;
- (id)initWithIntMap:(map_f8690629 *)arg1;
- (id)nextObject;

@end

