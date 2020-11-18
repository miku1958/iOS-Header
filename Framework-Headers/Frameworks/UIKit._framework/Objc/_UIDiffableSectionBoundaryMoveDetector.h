//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol UIDiffableDataSourceInfo, _UIIdentifierDiffer;

__attribute__((visibility("hidden")))
@interface _UIDiffableSectionBoundaryMoveDetector : NSObject
{
    id<_UIIdentifierDiffer> _differ;
    id<UIDiffableDataSourceInfo> _beforeInfo;
    id<UIDiffableDataSourceInfo> _afterInfo;
    NSSet *_movePairs;
    BOOL _didShortCircuit;
}

@property (readonly, nonatomic) BOOL didShortCircuit; // @synthesize didShortCircuit=_didShortCircuit;
@property (readonly, nonatomic) NSSet *movePairs; // @synthesize movePairs=_movePairs;

- (void).cxx_destruct;
- (id)_computeMovePairsFoundation;
- (id)_computeMovePairsSTL;
- (id)initWithItemDiffer:(id)arg1 beforeDataSourceInfo:(id)arg2 afterDataSourceInfo:(id)arg3;

@end
