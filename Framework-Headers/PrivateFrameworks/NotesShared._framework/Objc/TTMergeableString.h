//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSMutableAttributedString, NSUUID, TTVectorMultiTimestamp;
@protocol TTMergeableStringDelegate;

@interface TTMergeableString : NSObject
{
    vector_6c07be0f _startNodes;
    vector_6c07be0f _endNodes;
    vector_6c07be0f _orderedSubstrings;
    unsigned int _unserializedClock;
    unsigned long long _editCount;
    BOOL _cacheInvalid;
    CDUnknownBlockType _updateRangeBlock;
    BOOL _hasLocalChanges;
    BOOL _hasDeltas;
    NSUUID *_replicaUUID;
    TTVectorMultiTimestamp *_timestamp;
    NSObject<TTMergeableStringDelegate> *_delegate;
    NSHashTable *_objectsNeedingUpdatedRanges;
    NSMutableAttributedString *_attributedString;
}

@property (strong, nonatomic) NSMutableAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (nonatomic) NSObject<TTMergeableStringDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL hasDeltas; // @synthesize hasDeltas=_hasDeltas;
@property (nonatomic) BOOL hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property (readonly, nonatomic) NSHashTable *objectsNeedingUpdatedRanges; // @synthesize objectsNeedingUpdatedRanges=_objectsNeedingUpdatedRanges;
@property (strong, nonatomic) NSUUID *replicaUUID; // @synthesize replicaUUID=_replicaUUID;
@property (strong, nonatomic) TTVectorMultiTimestamp *timestamp; // @synthesize timestamp=_timestamp;

+ (id)unserialisedReplicaID;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)beginEditing;
- (BOOL)canMergeString:(id)arg1;
- (id)characterRangesForSelection:(id)arg1;
- (BOOL)check:(id *)arg1;
- (void)cleanupObjectsNeedingUpdatedRanges;
- (void)coalesce;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)deleteCharactersInRange:(struct _NSRange)arg1;
- (void)deleteSubstrings:(vector_6c07be0f *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (id)description;
- (id)dotDescription:(unsigned long long)arg1;
- (void)dumpMergeData:(id)arg1;
- (void)endEditing;
- (vector_6c07be0f *)endNodes;
- (void)generateIdsForLocalChanges;
- (unsigned long long)getCharacterIndexForCharID:(struct TopoID)arg1;
- (void)getCharacterRanges:(vector_7053a16b *)arg1 forSubstrings:(vector_6c07be0f *)arg2;
- (struct TopoSubstring *)getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(vector_6c07be0f *)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)getSubstrings:(vector_6c07be0f *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (void)getSubstrings:(vector_6c07be0f *)arg1 inOrderedSubstrings:(vector_6c07be0f *)arg2 forCharacterRange:(struct _NSRange)arg3;
- (BOOL)graphIsEqual:(id)arg1;
- (unsigned long long)hash;
- (id)i_saveDeltasSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (id)init;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2;
- (id)initWithArchive:(const struct String *)arg1 andReplicaID:(id)arg2 withOrderedSubstrings:(vector_6c07be0f *)arg3;
- (id)initWithData:(id)arg1 andReplicaID:(id)arg2;
- (id)initWithReplicaID:(id)arg1;
- (id)initWithReplicaID:(id)arg1 asFragment:(BOOL)arg2;
- (struct TopoIDRange)insertAttributedString:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)insertAttributedString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)insertString:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateCache;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFragment;
- (unsigned long long)length;
- (unsigned long long)mergeWithString:(id)arg1;
- (void)moveRange:(struct _NSRange)arg1 toIndex:(unsigned long long)arg2;
- (vector_6c07be0f *)orderedSubstrings;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (void)saveDeltaSinceTimestamp:(id)arg1 toArchive:(struct String *)arg2;
- (void)saveSubstrings:(vector_6c07be0f *)arg1 archiveSet:(unordered_set_cb0b1a0f *)arg2 linkSet:(unordered_set_cb0b1a0f *)arg3 archivedString:(id *)arg4 toArchive:(struct String *)arg5;
- (void)saveToArchive:(struct String *)arg1;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (id)serialize;
- (id)serializeDeltaSinceTimestamp:(id)arg1;
- (void)sortSplitNodes;
- (struct TopoSubstring *)splitTopoSubstring:(struct TopoSubstring *)arg1 atIndex:(unsigned int)arg2;
- (vector_6c07be0f *)startNodes;
- (id)string;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;
- (void)updateAttributedStringAfterMerge;
- (void)updateCache;
- (void)updateClock;
- (void)updateSubstringIndexes;
- (void)updateTimestampsInRange:(struct _NSRange)arg1;
- (void)updateTopoIDRange:(struct TopoIDRange)arg1 toNewRangeID:(struct TopoIDRange)arg2;

@end

