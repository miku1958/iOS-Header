//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCEFormulaRewrite_RegionInfo, TSCEFormulaRewrite_Uids;

__attribute__((visibility("hidden")))
@interface TSCEFormulaRewrite_RegionMovedInfo : NSObject
{
    TSCEFormulaRewrite_RegionInfo *_srcRegion;
    TSCEFormulaRewrite_RegionInfo *_dstRegion;
    TSCEFormulaRewrite_RegionInfo *_originalSrcRegion;
    UUIDMap_b66c2694 _srcUidForDstUid;
    UUIDMap_b66c2694 _dstUidForSrcUid;
    BOOL _spanningRows;
    BOOL _spanningColumns;
}

@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *dstColumnUids;
@property (readonly, nonatomic) UUIDData_5fbc143e dstCondStyleOwnerUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *dstRegion; // @synthesize dstRegion=_dstRegion;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *dstRowUids;
@property (readonly, nonatomic) UUIDData_5fbc143e dstTableUID;
@property (readonly, nonatomic) const UUIDMap_b66c2694 *dstUidForSrcUid; // @synthesize dstUidForSrcUid=_dstUidForSrcUid;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcColumnUids;
@property (readonly, nonatomic) UUIDData_5fbc143e originalSrcCondStyleOwnerUID;
@property (strong, nonatomic) TSCEFormulaRewrite_RegionInfo *originalSrcRegion; // @synthesize originalSrcRegion=_originalSrcRegion;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *originalSrcRowUids;
@property (readonly, nonatomic) UUIDData_5fbc143e originalSrcTableUID;
@property (nonatomic) BOOL spanningColumns; // @synthesize spanningColumns=_spanningColumns;
@property (nonatomic) BOOL spanningRows; // @synthesize spanningRows=_spanningRows;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *srcColumnUids;
@property (readonly, nonatomic) UUIDData_5fbc143e srcCondStyleOwnerUID;
@property (readonly, nonatomic) TSCEFormulaRewrite_RegionInfo *srcRegion; // @synthesize srcRegion=_srcRegion;
@property (readonly, nonatomic) TSCEFormulaRewrite_Uids *srcRowUids;
@property (readonly, nonatomic) UUIDData_5fbc143e srcTableUID;
@property (readonly, nonatomic) const UUIDMap_b66c2694 *srcUidForDstUid; // @synthesize srcUidForDstUid=_srcUidForDstUid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (UUIDData_5fbc143e)dstUidForSrcUid:(const UUIDData_5fbc143e *)arg1;
- (id)initFromMessage:(const struct RegionMovedInfoArchive *)arg1;
- (id)initWithSrcTableUID:(const UUIDData_5fbc143e *)arg1 srcColumnUids:(const vector_4dc5f307 *)arg2 srcRowUids:(const vector_4dc5f307 *)arg3 dstTableUID:(const UUIDData_5fbc143e *)arg4 dstColumnUids:(const vector_4dc5f307 *)arg5 dstRowUids:(const vector_4dc5f307 *)arg6;
- (void)loadIndexesForSrcTable:(id)arg1 dstTable:(id)arg2;
- (void)loadIndexesFromRegions;
- (void)saveToMessage:(struct RegionMovedInfoArchive *)arg1;
- (UUIDData_5fbc143e)srcUidForDstUid:(const UUIDData_5fbc143e *)arg1;
- (void)unloadIndexes;

@end
