//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCollectionLayoutItem, _UICollectionLayoutItemSolver;

__attribute__((visibility("hidden")))
@interface _UICollectionSolutionGroupArrangementItem : NSObject
{
    _UICollectionLayoutItemSolver *_solution;
    struct CGRect _layoutFrame;
}

@property (readonly, nonatomic) NSCollectionLayoutItem *item;
@property (nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property (readonly, nonatomic) _UICollectionLayoutItemSolver *solution; // @synthesize solution=_solution;

- (void).cxx_destruct;
- (id)initWithSolution:(id)arg1;

@end
