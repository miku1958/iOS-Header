//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable, NSSet, TSKShuffleMapping, TSTCellRegion;

@interface TSTChangeDescriptor : NSObject
{
    BOOL _processedByMasterLayout;
    int _changeDescriptor;
    NSHashTable *_referenceIdentifiers;
    TSTCellRegion *_cellRegion;
    struct TSUCellCoord _cellID;
    TSTCellRegion *_strokeRegion;
    TSKShuffleMapping *_shuffleMapping;
    NSSet *_annotations;
    unsigned long long _beforeCountValue;
    unsigned long long _afterCountValue;
}

@property (nonatomic) unsigned long long afterCountValue; // @synthesize afterCountValue=_afterCountValue;
@property (strong, nonatomic) NSSet *annotations; // @synthesize annotations=_annotations;
@property (nonatomic) unsigned long long beforeCountValue; // @synthesize beforeCountValue=_beforeCountValue;
@property (nonatomic) struct TSUCellCoord cellID; // @synthesize cellID=_cellID;
@property (readonly, nonatomic) struct TSUCellRect cellRange;
@property (strong, nonatomic) TSTCellRegion *cellRegion; // @synthesize cellRegion=_cellRegion;
@property (nonatomic) int changeDescriptor; // @synthesize changeDescriptor=_changeDescriptor;
@property (readonly, nonatomic) BOOL hasBeforeAfterCounts;
@property (nonatomic) BOOL processedByMasterLayout; // @synthesize processedByMasterLayout=_processedByMasterLayout;
@property (strong, nonatomic) NSHashTable *referenceIdentifiers; // @synthesize referenceIdentifiers=_referenceIdentifiers;
@property (strong, nonatomic) TSKShuffleMapping *shuffleMapping; // @synthesize shuffleMapping=_shuffleMapping;
@property (readonly, nonatomic) struct TSUCellRect strokeRange;
@property (strong, nonatomic) TSTCellRegion *strokeRegion; // @synthesize strokeRegion=_strokeRegion;

+ (id)changeDescriptorWithAnnotationsRemovedForMerge:(id)arg1;
+ (id)changeDescriptorWithType:(int)arg1;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 cellRange:(struct TSUCellRect)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 cellRange:(struct TSUCellRect)arg3 strokeRange:(struct TSUCellRect)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 cellRegion:(id)arg3 strokeRegion:(id)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellID:(struct TSUCellCoord)arg2 strokeRange:(struct TSUCellRect)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct TSUCellRect)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRange:(struct TSUCellRect)arg2 strokeRange:(struct TSUCellRect)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 beforeCount:(unsigned long long)arg3 afterCount:(unsigned long long)arg4;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3;
+ (id)changeDescriptorWithType:(int)arg1 cellRegion:(id)arg2 strokeRegion:(id)arg3 beforeCount:(unsigned long long)arg4 afterCount:(unsigned long long)arg5;
+ (id)changeDescriptorWithType:(int)arg1 referenceIdentifiers:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 shuffleMapping:(id)arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRange:(struct TSUCellRect)arg2;
+ (id)changeDescriptorWithType:(int)arg1 strokeRegion:(id)arg2;
+ (void)enumerateChangeRecords:(id)arg1 withType:(int)arg2 block:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (id)initWithChangeDescriptorType:(int)arg1 cellRegion:(id)arg2 cellID:(struct TSUCellCoord)arg3 strokeRegion:(id)arg4 referenceIdentifiers:(id)arg5 shuffleMapping:(id)arg6;
- (id)initWithChangeDescriptorType:(int)arg1 cellRegion:(id)arg2 cellID:(struct TSUCellCoord)arg3 strokeRegion:(id)arg4 referenceIdentifiers:(id)arg5 shuffleMapping:(id)arg6 annotations:(id)arg7;
- (BOOL)isEqual:(id)arg1;
- (void)markAsProcessed;

@end

