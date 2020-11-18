//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PPEvictingMinPriorityQueue : NSObject
{
    unsigned long long _capacity;
    struct priority_queue<PPScoredItem *, std::__1::vector<PPScoredItem *, std::__1::allocator<PPScoredItem *>>, PPScoredItemCompareGreater> *_queue;
}

@property (readonly, nonatomic) double count;

- (void)addObject:(id)arg1;
- (void)dealloc;
- (id)extractSortedMutableArray;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (id)popItem;

@end
