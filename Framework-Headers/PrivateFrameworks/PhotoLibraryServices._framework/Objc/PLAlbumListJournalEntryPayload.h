//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSOrderedSet;

@interface PLAlbumListJournalEntryPayload : PLJournalEntryPayload
{
}

@property (readonly, nonatomic) short albumListType;
@property (readonly, nonatomic) NSOrderedSet *albumUUIDs;

+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
- (BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)insertAlbumListFromDataInManagedObjectContext:(id)arg1;
- (void)updateAlbumList:(id)arg1;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;

@end

