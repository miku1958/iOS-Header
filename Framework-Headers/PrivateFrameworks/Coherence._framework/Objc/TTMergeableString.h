//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUUID, _TtC9Coherence11ObjCReplica, _TtC9Coherence11ObjCVersion, _TtC9Coherence9CRContext;

@interface TTMergeableString : NSObject
{
    vector_c5c053b6 _startNodes;
    vector_c5c053b6 _endNodes;
    vector_c5c053b6 _orderedSubstrings;
    unsigned long long _editCount;
    BOOL _cacheInvalid;
    TTMergeableString *_renamedString;
    BOOL _hasLocalChanges;
    _TtC9Coherence9CRContext *_context;
    _TtC9Coherence11ObjCVersion *_version;
    _TtC9Coherence11ObjCVersion *_addedByVersion;
    id _attributedString;
    NSUUID *_uuid;
    long long _localCounter;
    _TtC9Coherence11ObjCReplica *_addedByReplica;
    long long _addedByLocalCounter;
    long long _renameGeneration;
    struct TopoReplica _replica;
}

@property (nonatomic) long long addedByLocalCounter; // @synthesize addedByLocalCounter=_addedByLocalCounter;
@property (readonly, nonatomic) _TtC9Coherence11ObjCReplica *addedByReplica; // @synthesize addedByReplica=_addedByReplica;
@property (strong, nonatomic) _TtC9Coherence11ObjCVersion *addedByVersion; // @synthesize addedByVersion=_addedByVersion;
@property (strong, nonatomic) id attributedString; // @synthesize attributedString=_attributedString;
@property (readonly, nonatomic) _TtC9Coherence9CRContext *context; // @synthesize context=_context;
@property (nonatomic) BOOL hasLocalChanges; // @synthesize hasLocalChanges=_hasLocalChanges;
@property (nonatomic) long long localCounter; // @synthesize localCounter=_localCounter;
@property (nonatomic) long long renameGeneration; // @synthesize renameGeneration=_renameGeneration;
@property (readonly, nonatomic) struct TopoReplica replica; // @synthesize replica=_replica;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) _TtC9Coherence11ObjCVersion *version; // @synthesize version=_version;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3;
- (void)_updateCache;
- (void)addNewAddedByFor:(struct TopoSubstring *)arg1;
- (void)apply:(id)arg1;
- (void)applyRenamesAndRetainOrRelease:(id)arg1;
- (void)applyTimestampRenames:(id)arg1;
- (void)beginEditing;
- (BOOL)canMergeString:(id)arg1;
- (unsigned long long)characterIndexForIndex:(id)arg1;
- (id)characterRangesForSelection:(id)arg1;
- (id)characterRangesForSelection:(id)arg1 selectedSubstringsBlock:(CDUnknownBlockType)arg2;
- (BOOL)check:(id *)arg1;
- (void)coalesce;
- (id)copyRenamedIfAvailable:(BOOL)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)deleteAllSubstrings;
- (void)deleteSubstrings:(vector_c5c053b6 *)arg1 withCharacterRanges:(vector_7053a16b *)arg2;
- (void)deltaTo:(id)arg1 added:(CDUnknownBlockType)arg2 deleted:(CDUnknownBlockType)arg3;
- (void)deltaTo:(id)arg1 edited:(CDUnknownBlockType)arg2;
- (id)description;
- (id)dotDescription:(unsigned long long)arg1;
- (void)dumpMergeData:(id)arg1;
- (void)endEditing;
- (vector_c5c053b6 *)endNodes;
- (void)enumerateSubstrings:(CDUnknownBlockType)arg1;
- (void)finalizeTimestamps;
- (id)fullyRenamed;
- (void)getCharacterRanges:(vector_7053a16b *)arg1 forSubstrings:(vector_c5c053b6 *)arg2;
- (struct TopoSubstring *)getSubstringBeforeTopoID:(struct TopoID)arg1;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forCharacterRange:(struct _NSRange)arg2;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 forTopoIDRange:(struct TopoIDRange)arg2;
- (void)getSubstrings:(vector_c5c053b6 *)arg1 inOrderedSubstrings:(vector_c5c053b6 *)arg2 forCharacterRange:(struct _NSRange)arg3;
- (BOOL)graphIsEqual:(id)arg1;
- (BOOL)hasDeltaTo:(id)arg1 compareElements:(CDUnknownBlockType)arg2;
- (id)initAsFragment:(BOOL)arg1 storage:(id)arg2 uuid:(id)arg3 context:(id)arg4;
- (id)initWithDecoder:(id)arg1 error:(id *)arg2;
- (void)insertStorage:(id)arg1 after:(struct TopoSubstring *)arg2 before:(struct TopoSubstring *)arg3;
- (void)insertStorage:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)invalidateCache;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isFragment;
- (unsigned long long)length;
- (unsigned long long)mergeWithString:(id)arg1;
- (id)mergeableIndexForCharacterIndex:(long long)arg1 affinity:(unsigned long long)arg2;
- (BOOL)needToFinalizeTimestamps;
- (vector_c5c053b6 *)orderedSubstrings;
- (void)removeObjectsInRange:(struct _NSRange)arg1;
- (void)rename:(id)arg1;
- (id)renamed:(id)arg1;
- (id)renamedIfAvailable;
- (void)replaceStorageInRange:(struct _NSRange)arg1 withStorage:(id)arg2;
- (id)replicaUUIDForCharacterAtIndex:(unsigned long long)arg1;
- (void)saveSubstrings:(vector_c5c053b6 *)arg1 encoder:(id)arg2;
- (void)saveToEncoder:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1;
- (id)selectionForCharacterRanges:(id)arg1 selectionAffinity:(unsigned long long)arg2;
- (void)setContext:(id)arg1;
- (void)sortSplitNodes;
- (struct TopoSubstring *)splitTopoSubstring:(struct TopoSubstring *)arg1 atIndex:(unsigned int)arg2;
- (vector_c5c053b6 *)startNodes;
- (long long)substringCount;
- (id)temporaryConcurrentNames;
- (id)temporaryNamesExcludingSelf:(BOOL)arg1;
- (void)traverseUnordered:(CDUnknownBlockType)arg1;
- (void)undeleteSubstrings:(vector_4788519f *)arg1;
- (id)undoCommandToChangeTo:(id)arg1;
- (void)updateAttributedStringAfterMerge;
- (void)updateSubstringIndexes;
- (void)useRenameIfAvailable;
- (id)uuidLookupDictionaryFor:(id)arg1;

@end

