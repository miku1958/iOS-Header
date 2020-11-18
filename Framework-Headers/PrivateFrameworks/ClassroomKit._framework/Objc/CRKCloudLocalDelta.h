//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/NSSecureCoding-Protocol.h>

@class NSMutableSet, NSSet, NSString;

@interface CRKCloudLocalDelta : NSObject <NSSecureCoding>
{
    BOOL _atomic;
    NSString *_identifier;
    NSMutableSet *_mutableAssetIdentifiers;
    NSMutableSet *_mutableCreateRecords;
    NSMutableSet *_mutableDeleteRecordIds;
    NSMutableSet *_mutableUpdateRecords;
}

@property (readonly, nonatomic) NSSet *assetIdentifiers;
@property (nonatomic, getter=isAtomic) BOOL atomic; // @synthesize atomic=_atomic;
@property (readonly, nonatomic) NSSet *createRecordIds;
@property (readonly, copy, nonatomic) NSSet *createRecords;
@property (readonly, copy, nonatomic) NSSet *deleteRecordIds;
@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableSet *mutableAssetIdentifiers; // @synthesize mutableAssetIdentifiers=_mutableAssetIdentifiers;
@property (strong, nonatomic) NSMutableSet *mutableCreateRecords; // @synthesize mutableCreateRecords=_mutableCreateRecords;
@property (strong, nonatomic) NSMutableSet *mutableDeleteRecordIds; // @synthesize mutableDeleteRecordIds=_mutableDeleteRecordIds;
@property (strong, nonatomic) NSMutableSet *mutableUpdateRecords; // @synthesize mutableUpdateRecords=_mutableUpdateRecords;
@property (readonly, nonatomic) NSSet *updateRecordIds;
@property (readonly, copy, nonatomic) NSSet *updateRecords;

+ (id)instanceWithCreateRecords:(id)arg1 updateRecords:(id)arg2 deleteRecordIds:(id)arg3 isAtomic:(BOOL)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addAssetIdentifiers:(id)arg1;
- (void)addCreateRecord:(id)arg1;
- (void)addDeleteRecordId:(id)arg1;
- (void)addUpdateRecord:(id)arg1;
- (id)createRecordsMatchingIds:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)mergeDelta:(id)arg1;
- (id)recordsInSet:(id)arg1 matchingIds:(id)arg2;
- (void)removeCreatesMatchingIds:(id)arg1;
- (void)removeDeleteIdsMatchingIds:(id)arg1;
- (void)removeUpdatesMatchingIds:(id)arg1;
- (void)setCreateRecords:(id)arg1;
- (void)setDeleteRecordIds:(id)arg1;
- (void)setUpdateRecords:(id)arg1;
- (id)updateRecordsMatchingIds:(id)arg1;

@end

