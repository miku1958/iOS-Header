//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <PhotoLibraryServices/PLPhotoEditDataExporter-Protocol.h>
#import <PhotoLibraryServices/PLPhotoEditDataImporter-Protocol.h>

@class NSString;

@interface PLPhotoEditPFDataConverter : NSObject <PLPhotoEditDataImporter, PLPhotoEditDataExporter>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_filtersForLegacyAutoEnhanceSettingsDictionary:(id)arg1;
+ (id)_formatVersion;
+ (id)_knownFormatIdentifiers;
+ (id)_knownFormatVersions;
+ (id)_settingsDictionaryForLegacyAutoEnhanceFilters:(id)arg1;
+ (long long)_supportLevelForSettings:(id)arg1 typesForKnownKeys:(id)arg2 requiredKeys:(id)arg3;
+ (id)_supportedAdjustments;
+ (BOOL)_validateValueTypesForKeys:(id)arg1 requiredKeys:(id)arg2 inDictionary:(id)arg3 error:(id *)arg4;
+ (BOOL)canInterpretDataWithFormatIdentifier:(id)arg1 formatVersion:(id)arg2;
+ (id)dataFromPhotoEditModel:(id)arg1 outFormatIdentifier:(id *)arg2 outFormatVersion:(id *)arg3 exportProperties:(id)arg4;
+ (id)debugDescriptionForPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3;
+ (BOOL)loadPhotoEditData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 intoModel:(id)arg4 importProperties:(id)arg5;
+ (BOOL)validateAdjustmentsEnvelope:(id)arg1;

@end

