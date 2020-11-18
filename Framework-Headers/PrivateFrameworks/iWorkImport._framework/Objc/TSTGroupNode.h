//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSTUidReturning-Protocol.h>

@class NSMutableDictionary, TSCECellValue, TSTGroupNodeFormatManager, TSTGroupValueTuple, TSUMutableUUIDSet, TSUUUIDSet;

__attribute__((visibility("hidden")))
@interface TSTGroupNode : NSObject <TSTUidReturning>
{
    UUIDData_5fbc143e _groupUid;
    TSCECellValue *_groupCellValue;
    unsigned char _groupLevel;
    unordered_map_facfd2e8 _aggNodes;
    NSMutableDictionary *_children;
    struct os_unfair_lock_s _childrenLock;
    TSUMutableUUIDSet *_rowUids;
    TSTGroupNode *_parentNode;
    TSTGroupNodeFormatManager *_formatManager;
}

@property (readonly, nonatomic) unordered_map_facfd2e8 *aggNodes;
@property (readonly, strong, nonatomic) TSUUUIDSet *childGroupUids;
@property (readonly, strong, nonatomic) TSUUUIDSet *directChildGroupUids;
@property (readonly, strong, nonatomic) TSCECellValue *groupCellValue; // @synthesize groupCellValue=_groupCellValue;
@property (readonly, nonatomic) unsigned char groupLevel; // @synthesize groupLevel=_groupLevel;
@property (readonly) const UUIDData_5fbc143e *groupUid; // @synthesize groupUid=_groupUid;
@property (readonly, nonatomic) TSTGroupValueTuple *groupValueTuple;
@property (readonly, nonatomic) BOOL isBlankNode;
@property (readonly, nonatomic) BOOL isErrorNode;
@property (readonly, nonatomic) BOOL isLeaf;
@property (readonly) UUIDData_5fbc143e labelUid;
@property (nonatomic) TSTGroupNode *parentNode; // @synthesize parentNode=_parentNode;
@property (readonly, strong, nonatomic) TSUUUIDSet *rowUids; // @synthesize rowUids=_rowUids;

+ (id)keyStringForCellValue:(id)arg1;
+ (id)localizedStringForCellValue:(id)arg1 categoryLevel:(unsigned char)arg2 groupBy:(id)arg3;
+ (BOOL)needFormulasForAggregateType:(unsigned char)arg1;
+ (id)normalizedStringForCompare:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addAggNode:(id)arg1;
- (void)addChangesTo:(id)arg1 forDemotingValueAtLevel:(unsigned char)arg2 toLevel:(unsigned char)arg3;
- (void)addChangesTo:(id)arg1 forPromotingValueAtLevel:(unsigned char)arg2 toLevel:(unsigned char)arg3;
- (void)addChangesTo:(id)arg1 forRemovingValueAtLevel:(unsigned char)arg2;
- (void)addChangesTo:(id)arg1 forReplacingValue:(id)arg2 atLevel:(unsigned char)arg3;
- (void)addChild:(id)arg1 withKey:(id)arg2;
- (void)addRowUid:(const UUIDData_5fbc143e *)arg1;
- (id)aggNodeForColumnUid:(const UUIDData_5fbc143e *)arg1;
- (struct TSCECategoryRef)aggregateRefForType:(unsigned char)arg1 atLevel:(unsigned char)arg2 forGroupBy:(id)arg3 forColumnUid:(const UUIDData_5fbc143e *)arg4;
- (void)clearEmptyNodesWithGroupBy:(id)arg1;
- (void)clearWithGroupBy:(id)arg1;
- (BOOL)containsRowUid:(const UUIDData_5fbc143e *)arg1;
- (id)descriptionWithGroupBy:(id)arg1;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive *)arg1;
- (void)enumerateAllGroupsWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDirectChildren:(CDUnknownBlockType)arg1;
- (void)enumerateGroupsAtLevel:(unsigned char)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)findGroupNodeForDisplayValuesFromSplitter:(id)arg1 atLevel:(unsigned char)arg2 groupBy:(id)arg3 startAtComponent:(unsigned long long)arg4 startAtWord:(unsigned long long)arg5 preserveFlags:(struct TSUPreserveFlags *)arg6;
- (id)findGroupNodeForValue:(id)arg1 atLevel:(unsigned char)arg2 locale:(id)arg3;
- (id)groupNodeForGroupUid:(const UUIDData_5fbc143e *)arg1;
- (id)groupNodeForRowUid:(const UUIDData_5fbc143e *)arg1 atLevel:(unsigned char)arg2;
- (id)groupValueAtLevel:(unsigned char)arg1;
- (id)groupValueHierarchyForChart:(BOOL)arg1 groupBy:(id)arg2;
- (struct TSCECategoryRef)groupValueHierarchyRefAtLevel:(unsigned char)arg1 forGroupBy:(id)arg2;
- (id)groupValueHierarchyStringWithDelimiterString:(id)arg1;
- (id)groupValueHierarchyStringWithDelimiterString:(id)arg1 groupBy:(id)arg2 namingContext:(id)arg3;
- (struct TSCECategoryRef)groupValueRefAtLevel:(unsigned char)arg1 forGroupBy:(id)arg2;
- (id)initAsRootNode;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive *)arg1 forGroupBy:(id)arg2 atLevel:(unsigned char)arg3;
- (id)initWithGroupCellValue:(id)arg1 atLevel:(unsigned char)arg2 groupUid:(UUIDData_5fbc143e)arg3 children:(id)arg4;
- (id)insertRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValueTuple:(id)arg2 atLevel:(unsigned char)arg3 forGroupBy:(id)arg4 withLocale:(id)arg5;
- (void)markAsDirtyWithCalcEngine:(id)arg1;
- (void)markDependentsAsDirtyWithCalcEngine:(id)arg1;
- (vector_4dc5f307)nodePath;
- (void)p_addChildGroupUidsIntoSet:(id)arg1 recursively:(BOOL)arg2;
- (void)p_refreshGroupValue;
- (void)rebuildFormulasForAggNode:(id)arg1 forGroupBy:(id)arg2;
- (void)removeAllRowUids;
- (void)removeChildForKey:(id)arg1;
- (void)removeRowUid:(const UUIDData_5fbc143e *)arg1 forGroupValueTuple:(id)arg2 atLevel:(unsigned char)arg3 forGroupBy:(id)arg4 withLocale:(id)arg5;
- (void)removeRowUids:(id)arg1 forGroupBy:(id)arg2;
- (id)safeChildren;
- (const UUIDData_5fbc143e *)uidReturn;
- (BOOL)updateGroupCellValueIfKeyMatches:(id)arg1;
- (void)updateWithDocumentRoot:(id)arg1;

@end

