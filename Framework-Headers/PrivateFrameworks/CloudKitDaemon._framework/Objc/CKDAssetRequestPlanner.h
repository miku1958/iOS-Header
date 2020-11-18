//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSMutableOrderedSet;

@interface CKDAssetRequestPlanner : NSObject
{
    unsigned int _assetTokenRequestSizeLimit;
    NSArray *_assetRegisterAndPutBatches;
    NSArray *_assetGetChunkKeysBatches;
    NSArray *_assetTokenRequests;
    NSMutableDictionary *_rerefAssetBatchesByZoneID;
    NSMutableDictionary *_assetBatchesByZoneID;
    NSMutableOrderedSet *_items;
    NSMutableDictionary *_assetZoneByKey;
}

@property (strong, nonatomic) NSMutableDictionary *assetBatchesByZoneID; // @synthesize assetBatchesByZoneID=_assetBatchesByZoneID;
@property (strong, nonatomic) NSArray *assetGetChunkKeysBatches; // @synthesize assetGetChunkKeysBatches=_assetGetChunkKeysBatches;
@property (strong, nonatomic) NSArray *assetRegisterAndPutBatches; // @synthesize assetRegisterAndPutBatches=_assetRegisterAndPutBatches;
@property (readonly, nonatomic) unsigned int assetTokenRequestSizeLimit; // @synthesize assetTokenRequestSizeLimit=_assetTokenRequestSizeLimit;
@property (strong, nonatomic) NSArray *assetTokenRequests; // @synthesize assetTokenRequests=_assetTokenRequests;
@property (strong, nonatomic) NSMutableDictionary *assetZoneByKey; // @synthesize assetZoneByKey=_assetZoneByKey;
@property (strong, nonatomic) NSMutableOrderedSet *items; // @synthesize items=_items;
@property (strong, nonatomic) NSMutableDictionary *rerefAssetBatchesByZoneID; // @synthesize rerefAssetBatchesByZoneID=_rerefAssetBatchesByZoneID;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)addMMCSItem:(id)arg1;
- (void)addMMCSSectionItem:(id)arg1;
- (void)addRereferencedMMCSItem:(id)arg1;
- (id)description;
- (void)failBatch:(id)arg1;
- (BOOL)hasSuccessfulAssetTokenRequests;
- (BOOL)hasSuccessfulBatches;
- (id)init;
- (void)planAssetRequests;
- (void)planGetChunkKeysBatches;
- (void)planRegisterBatches;
- (void)resetAssetTokenRequests;

@end

