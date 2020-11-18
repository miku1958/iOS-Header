//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKRecord, CKRecordZoneID, CRKCloudAssetStore, NSMutableSet;

@interface CRKCloudRecord : NSObject
{
    NSMutableSet *_assetIdentifiers;
    CRKCloudAssetStore *_assetStore;
    CKRecord *_record;
    CKRecordZoneID *_zoneId;
}

@property (strong, nonatomic) NSMutableSet *assetIdentifiers; // @synthesize assetIdentifiers=_assetIdentifiers;
@property (strong, nonatomic) CRKCloudAssetStore *assetStore; // @synthesize assetStore=_assetStore;
@property (strong, nonatomic) CKRecord *record; // @synthesize record=_record;
@property (strong, nonatomic) CKRecordZoneID *zoneId; // @synthesize zoneId=_zoneId;

+ (id)new;
- (void).cxx_destruct;
- (id)assetDataForKey:(id)arg1;
- (BOOL)boolForKey:(id)arg1;
- (id)encryptedObjectForKey:(id)arg1;
- (id)filterEmptyArray:(id)arg1;
- (id)init;
- (id)initWithRecord:(id)arg1 zoneId:(id)arg2 assetStore:(id)arg3;
- (long long)integerForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (id)objectForKey:(id)arg1 isEncrypted:(BOOL)arg2;
- (id)recordName;
- (id)referenceRecordNameForKey:(id)arg1;
- (void)setAssetData:(id)arg1 forKey:(id)arg2;
- (void)setBool:(BOOL)arg1 forKey:(id)arg2;
- (void)setEncryptedObject:(id)arg1 forKey:(id)arg2;
- (void)setInteger:(long long)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKey:(id)arg2 isEncrypted:(BOOL)arg3;
- (void)setReference:(id)arg1;
- (void)setUnsignedInteger:(unsigned long long)arg1 forKey:(id)arg2;
- (BOOL)validCloudObject:(id)arg1;

@end
