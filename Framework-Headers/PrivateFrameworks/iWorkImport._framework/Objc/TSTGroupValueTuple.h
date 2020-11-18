//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface TSTGroupValueTuple : TSKSosBase <NSCopying>
{
    NSArray *_groupValues;
}

@property (readonly) unsigned char numberOfLevels;

+ (UUIDData_5fbc143e)rootUid;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeToArchive:(struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_GroupValueTupleArchive *)arg1;
- (id)groupValueAtLevel:(unsigned char)arg1;
- (id)groupValueTupleByAppendingValue:(id)arg1;
- (id)groupValueTupleByDemotingValueAtLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2;
- (id)groupValueTupleByMergingTuple:(id)arg1 toLevel:(unsigned char)arg2;
- (id)groupValueTupleByPromotingValueAtLevel:(unsigned char)arg1 toLevel:(unsigned char)arg2;
- (id)groupValueTupleByRemovingValueAtLevel:(unsigned char)arg1;
- (id)groupValueTupleByReplacingValue:(id)arg1 atLevel:(unsigned char)arg2;
- (UUIDData_5fbc143e)groupValueUid;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct CategoryOwnerArchive_GroupByArchive_GroupNodeArchive_GroupValueTupleArchive *)arg1 locale:(id)arg2;
- (id)initWithValueArray:(id)arg1;
- (id)initWithValues:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locale;
- (id)prefixTupleToLevel:(unsigned char)arg1;
- (void)updateWithDocumentRoot:(id)arg1;

@end

