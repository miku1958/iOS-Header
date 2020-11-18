//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/NSFastEnumeration-Protocol.h>
#import <CloudPhotoLibrary/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableArray, NSMutableDictionary;

@interface CPLChangeBatch : NSObject <NSSecureCoding, NSFastEnumeration>
{
    NSMutableArray *_records;
    NSMutableDictionary *_additionalRecords;
    NSMutableDictionary *_localResources;
}

@property (readonly, nonatomic) NSArray *records;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_addAdditionalRecord:(id)arg1;
- (void)_addChange:(id)arg1 resultBatch:(id)arg2 changesPerIdentifier:(id)arg3 changesPerClass:(id)arg4;
- (id)_additionalRecords;
- (id)_initWithRecords:(id)arg1;
- (void)_setAdditionalRecords:(id)arg1;
- (void)_setRecords:(id)arg1;
- (void)addRecord:(id)arg1;
- (void)addRecordsFromBatch:(id)arg1;
- (id)additionalRecordWithIdentifier:(id)arg1;
- (void)appendLocalResources:(id)arg1 forItemWithCloudIdentifier:(id)arg2;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (id)cplFullDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extractDeletesFromBatchDeletedRecordIdentifiers:(id *)arg1 trashedRecordIdentifiers:(id *)arg2;
- (void)extractInitialDownloadBatch:(id *)arg1 shouldConsiderRecordFilter:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecords:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)localResourceOfType:(unsigned long long)arg1 forItemWithCloudIdentifier:(id)arg2;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (void)sortBatch;
- (id)summaryDescription;

@end

