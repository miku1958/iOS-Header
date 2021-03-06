//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSTables/NSCopying-Protocol.h>

@class NSMutableArray, TSTMasterLayout;

@interface TSTLayoutTask : NSObject <NSCopying>
{
    TSTMasterLayout *_masterLayout;
    NSMutableArray *_cellStatesToLayout;
}

@property (readonly, nonatomic) NSMutableArray *cellStatesToLayout; // @synthesize cellStatesToLayout=_cellStatesToLayout;
@property (readonly, weak, nonatomic) TSTMasterLayout *masterLayout; // @synthesize masterLayout=_masterLayout;
@property (readonly, nonatomic) unsigned long long numberOfCellStates;

- (void).cxx_destruct;
- (void)addCellState:(id)arg1;
- (void)clear;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateCellStatesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithLayoutTask:(id)arg1;
- (id)initWithMasterLayout:(id)arg1;
- (void)writeToMasterLayoutCaches:(id)arg1;

@end

