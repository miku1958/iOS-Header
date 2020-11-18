//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKCOAbstractOperation.h>

#import <iWorkImport/TSKCOIdOperation-Protocol.h>
#import <iWorkImport/TSKCOTransforming-Protocol.h>

@class TSKCOIdAddress;

__attribute__((visibility("hidden")))
@interface TSKCOIdPlacementBaseOperation : TSKCOAbstractOperation <TSKCOIdOperation, TSKCOTransforming>
{
    BOOL _isDominating;
    int _fromIndex;
    int _toIndex;
    int _placementType;
    TSKCOIdAddress *_address;
}

@property (readonly, nonatomic) TSKCOIdAddress *address; // @synthesize address=_address;
@property (readonly, nonatomic) int fromIndex; // @synthesize fromIndex=_fromIndex;
@property (readonly, nonatomic) BOOL isDominating; // @synthesize isDominating=_isDominating;
@property (readonly, nonatomic) int placementType; // @synthesize placementType=_placementType;
@property (readonly, nonatomic) int toIndex; // @synthesize toIndex=_toIndex;

+ (id)stringForPlacementType:(int)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 noop:(BOOL)arg5;
- (id)initWithIdAddress:(id)arg1 fromIndex:(int)arg2 toIndex:(int)arg3 dominating:(BOOL)arg4 placementType:(int)arg5 noop:(BOOL)arg6;
- (id)initWithUnarchiver:(id)arg1 message:(const struct Operation *)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFromToIndexEqual;
- (id)operationWithNewFromIndex:(int)arg1 toIndex:(int)arg2 dominating:(BOOL)arg3;
- (id)operationWithNewNoop:(BOOL)arg1;
- (void)saveToArchiver:(id)arg1 message:(struct Operation *)arg2;
- (id)toString;
- (id)transformAddOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (pair_65f741c2)transformBothIndexesByAdd:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(BOOL)arg3 history:(id)arg4;
- (pair_65f741c2)transformBothIndexesByRearrange:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(BOOL)arg3 history:(id)arg4;
- (pair_65f741c2)transformBothIndexesByRemove:(int)arg1 opToIndex:(int)arg2 isHigherPriority:(BOOL)arg3 history:(id)arg4;
- (id)transformDynamicByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 history:(id)arg3;
- (int)transformFromIndexByRearrange:(int)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformIdPlacementBaseOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (int)transformIndexByAdd:(int)arg1 isHigherPriority:(BOOL)arg2 isFromIndex:(BOOL)arg3 history:(id)arg4;
- (int)transformIndexByRemove:(int)arg1 isHigherPriority:(BOOL)arg2 isFromIndex:(BOOL)arg3 history:(id)arg4;
- (id)transformRearrangeOrPlacementOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformRemoveOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformReplaceRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformStaticByAnyOperation:(id)arg1 byHigherPriority:(BOOL)arg2 history:(id)arg3;
- (int)transformToIndexByRearrange:(int)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformUpdateIdOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)transformUpdateRangeOperation:(id)arg1 isHigherPriority:(BOOL)arg2 history:(id)arg3;
- (id)ut_transformByTransformer:(id)arg1;

@end
