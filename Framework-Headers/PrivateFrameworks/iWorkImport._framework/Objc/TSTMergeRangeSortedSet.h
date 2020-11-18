//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface TSTMergeRangeSortedSet : NSObject
{
    struct set<TSTMergeRangeElem, TSTMergeRangeElemCompare, std::__1::allocator<TSTMergeRangeElem>> *mSet;
    struct __tree_const_iterator<TSTMergeRangeElem, std::__1::__tree_node<TSTMergeRangeElem, void *>*, long> {
        struct __tree_end_node<std::__1::__tree_node_base<void *>*> *__ptr_;
    } mIter;
    NSObject<OS_dispatch_semaphore> *mSem;
}

- (id).cxx_construct;
- (void)addRange:(struct TSUCellRect)arg1 andSize:(struct CGSize)arg2 andPaddingInsets:(struct UIEdgeInsets)arg3 andIsCheckbox:(BOOL)arg4;
- (struct TSUCellRect)begin;
- (unsigned long long)count;
- (void)dealloc;
- (struct UIEdgeInsets)getPaddingInsets;
- (struct CGSize)getSize;
- (id)init;
- (BOOL)isCheckbox;
- (struct TSUCellRect)iter;
- (void)reset;

@end

