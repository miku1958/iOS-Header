//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSFastEnumeration-Protocol.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface TSCEUidTractList : NSObject <NSCopying, NSFastEnumeration>
{
    unsigned char _stickyBits;
    NSMutableArray *_tracts;
}

@property (nonatomic) unsigned char stickyBits; // @synthesize stickyBits=_stickyBits;

- (id)activeUidTract;
- (void)addToExcludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1;
- (void)addToExcludedUidsTractRowUids:(const vector_4dc5f307 *)arg1;
- (void)addToIncludedUidsTractColumnUid:(const UUIDData_5fbc143e *)arg1 rowUid:(const UUIDData_5fbc143e *)arg2;
- (void)addToIncludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1 rowUids:(const vector_4dc5f307 *)arg2;
- (void)addToIncludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1 rowUids:(const vector_4dc5f307 *)arg2 isRangeRef:(BOOL)arg3;
- (void)addTractAtFront:(id)arg1;
- (void)appendUidTract:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (void)dropTract:(id)arg1;
- (id)excludedUidsTract;
- (id)firstTractWithPurpose:(unsigned char)arg1;
- (id)includedUidsTract;
- (id)initWithArchive:(const struct ASTNodeArrayArchive_ASTUidTractList *)arg1;
- (id)preMergeUidTract;
- (id)preMoveRegionUidTract;
- (void)pruneMergeUidTractsAtAndAboveIndex:(unsigned char)arg1;
- (BOOL)remapUsingColumnUidMap:(const UUIDMap_b66c2694 *)arg1 rowUidMap:(const UUIDMap_b66c2694 *)arg2 clearIfMissing:(BOOL)arg3;
- (BOOL)remapUsingUidMap:(const UUIDMap_b66c2694 *)arg1;
- (void)removeFromExcludedUidsTractColumnUids:(const vector_4dc5f307 *)arg1;
- (void)removeFromExcludedUidsTractColumnUidsSet:(const unordered_set_c6a929bd *)arg1;
- (void)removeFromExcludedUidsTractRowUids:(const vector_4dc5f307 *)arg1;
- (void)removeFromExcludedUidsTractRowUidsSet:(const unordered_set_c6a929bd *)arg1;
- (void)saveToArchive:(struct ASTNodeArrayArchive_ASTUidTractList *)arg1;
- (unsigned char)tractCount;
- (id)uidTractAtIndex:(unsigned char)arg1;

@end
