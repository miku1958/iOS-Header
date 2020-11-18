//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSDictionary, NSString;

@interface PLPersonJournalEntryPayload : PLJournalEntryPayload
{
}

@property (readonly, nonatomic) int cloudVerifiedType;
@property (readonly, nonatomic) NSDictionary *contactMatchingDictionary;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) NSString *fullName;
@property (readonly, nonatomic) short keyFacePickSource;
@property (readonly, nonatomic) unsigned int manualOrder;
@property (readonly, nonatomic) NSString *mergeTargetPersonUUID;
@property (readonly, nonatomic) NSString *personUri;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) int verifiedType;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (void)updateMergeTargetPersonWithPersonUUIDMapping:(id)arg1 fromDataInManagedObjectContext:(id)arg2;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4;
- (BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertPersonFromDataInManagedObjectContext:(id)arg1;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;

@end
