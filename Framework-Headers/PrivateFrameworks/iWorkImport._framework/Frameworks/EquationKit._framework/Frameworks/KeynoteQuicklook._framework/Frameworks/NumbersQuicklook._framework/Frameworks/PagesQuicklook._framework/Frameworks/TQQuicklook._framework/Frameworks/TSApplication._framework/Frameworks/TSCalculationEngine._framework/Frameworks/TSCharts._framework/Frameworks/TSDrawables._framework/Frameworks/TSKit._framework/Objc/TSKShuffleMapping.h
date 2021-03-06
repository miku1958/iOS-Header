//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSKit/NSCopying-Protocol.h>

@interface TSKShuffleMapping : NSObject <NSCopying>
{
    vector_12da65de _mapping;
    vector_12da65de _reverseMapping;
    BOOL _reverseMappingValid;
    BOOL _isMoveOperation;
    BOOL _isVertical;
    unsigned int _startIndex;
    unsigned int _endIndex;
    unsigned int _firstMovedIndex;
    unsigned int _destinationIndexForMove;
    unsigned int _numberOfIndexesMoved;
}

@property (nonatomic) unsigned int destinationIndexForMove; // @synthesize destinationIndexForMove=_destinationIndexForMove;
@property (readonly, nonatomic) unsigned int endIndex; // @synthesize endIndex=_endIndex;
@property (nonatomic) unsigned int firstMovedIndex; // @synthesize firstMovedIndex=_firstMovedIndex;
@property (readonly, nonatomic) BOOL isIdentityMapping;
@property (readonly, nonatomic) BOOL isMoveOperation; // @synthesize isMoveOperation=_isMoveOperation;
@property (nonatomic) BOOL isVertical; // @synthesize isVertical=_isVertical;
@property (readonly, nonatomic) vector_12da65de *mapping; // @synthesize mapping=_mapping;
@property (readonly, nonatomic) unsigned int mappingSize;
@property (nonatomic) unsigned int numberOfIndexesMoved; // @synthesize numberOfIndexesMoved=_numberOfIndexesMoved;
@property (readonly, nonatomic) unsigned int startIndex; // @synthesize startIndex=_startIndex;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyMappingToIndexSet:(id)arg1;
- (id)copyInverse;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)enumerateMappingFollowingSwapsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMappingRange:(struct _NSRange)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initForMovedIndexesStartingAtIndex:(unsigned int)arg1 destinationIndex:(unsigned int)arg2 numberOfIndexes:(unsigned int)arg3 vertical:(BOOL)arg4;
- (id)initWithArchive:(const struct ShuffleMappingArchive *)arg1;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2;
- (id)initWithStartIndex:(unsigned int)arg1 endIndex:(unsigned int)arg2 mapping:(const vector_12da65de *)arg3;
- (void)insert:(unsigned int)arg1 IndexesAtIndex:(unsigned int)arg2 insertingBefore:(BOOL)arg3;
- (BOOL)isMove;
- (unsigned int)mapIndex:(unsigned int)arg1;
- (void)p_buildReverseMapping;
- (id)p_copyWithZone:(struct _NSZone *)arg1 mapping:(const vector_12da65de *)arg2;
- (void)p_invalidateReverseMapping;
- (void)remove:(unsigned int)arg1 IndexesAtIndex:(unsigned int)arg2;
- (unsigned int)reverseMapIndex:(unsigned int)arg1;
- (void)saveToArchive:(struct ShuffleMappingArchive *)arg1;
- (id)sourceIndexes;
- (void)swapIndex:(unsigned int)arg1 withIndex:(unsigned int)arg2;

@end

