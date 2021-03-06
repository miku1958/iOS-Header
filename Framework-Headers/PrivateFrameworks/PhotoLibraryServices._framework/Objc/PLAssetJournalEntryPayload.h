//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/PLJournalEntryPayload.h>

@class NSArray, NSDictionary, NSString;

@interface PLAssetJournalEntryPayload : PLJournalEntryPayload
{
    NSDictionary *_keywordUUIDRemapping;
}

@property (readonly, nonatomic) NSString *mediaGroupUUID;
@property (readonly, nonatomic) NSArray *resources;
@property (readonly, nonatomic) short savedAssetType;

+ (id)additionalEntityNames;
+ (BOOL)isValidForPersistenceWithObjectDictionary:(id)arg1;
+ (unsigned int)minimumSnapshotPayloadVersion;
+ (id)modelProperties;
+ (id)modelPropertiesDescription;
+ (id)nonPersistedModelPropertiesDescription;
+ (id)payloadClassID;
+ (unsigned int)payloadVersion;
+ (BOOL)shouldPersistForChangedKeys:(id)arg1 entityName:(id)arg2;
+ (id)snapshotSortDescriptors;
- (void).cxx_destruct;
- (void)_convertDepthStatesToDepthType;
- (void)_fixAdjustedAssetUTI;
- (void)_fixHDRGainZeroValueToNULL;
- (void)_fixLocationData;
- (void)_fixOriginalAlternateImageOrientation;
- (void)_fixResourceTypeUnknownValues;
- (void)_fixXMPSidecarUTI;
- (id)_loadOriginalVideoMetadataWithPathManager:(id)arg1 timezoneLookup:(id)arg2;
- (id)adjustmentFormatIdentifier;
- (id)adjustmentFormatVersion;
- (void)applyPayloadProperty:(id)arg1 toManagedObject:(id)arg2 key:(id)arg3 payloadAttributesToUpdate:(id)arg4;
- (unsigned long long)bestCPLResourceTypeForAdjustedFingerPrint;
- (id)cloudMasterGUID;
- (BOOL)comparePayloadValue:(id)arg1 toObjectDictionaryValue:(id)arg2 forPayloadProperty:(id)arg3;
- (id)dateCreated;
- (id)directory;
- (id)extendedAttributesLatitude;
- (id)extendedAttributesLongitude;
- (id)filename;
- (BOOL)hasAdjustments;
- (id)hdrGain;
- (id)highFrameRateState;
- (id)initWithAdditionalAssetAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithAssetDescription:(id)arg1 changedKeys:(id)arg2;
- (id)initWithCloudMaster:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3;
- (id)initWithCloudMasterMediaMetadata:(id)arg1 payloadID:(id)arg2 changedKeys:(id)arg3 modelProperties:(id)arg4;
- (id)initWithEditedIPTCAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithExtendedAttributes:(id)arg1 changedKeys:(id)arg2;
- (id)initWithFileSystemBookmark:(id)arg1 changedKeys:(id)arg2;
- (id)initWithInternalResource:(id)arg1 changedKeys:(id)arg2;
- (id)initWithUnmanagedAdjustment:(id)arg1 changedKeys:(id)arg2;
- (id)insertAssetFromDataInManagedObjectContext:(id)arg1 keywordUUIDRemapping:(id)arg2 payloadAttributesToUpdate:(id)arg3;
- (BOOL)isDefaultAdjustedSlomo;
- (BOOL)isImage;
- (BOOL)isVideo;
- (short)kind;
- (short)kindSubtype;
- (id)latitude;
- (id)locationData;
- (id)longitude;
- (void)migrateMergedPayloadWithUpdatePayloads:(id)arg1;
- (id)originalOrientation;
- (id)originalResourceRelativePaths;
- (void)setLocation:(id)arg1;
- (id)uniformTypeIdentifier;
- (void)updateEncodableAttributes:(id)arg1 fromPayloadAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (void)updatePayloadAttributes:(id)arg1 withDecodedAttributes:(id)arg2 forPayloadProperty:(id)arg3;
- (BOOL)updatePayloadAttributes:(id)arg1 withManagedObject:(id)arg2 forPayloadProperty:(id)arg3;

@end

