//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreThemeDefinition/TDPersistentDocument.h>

@class NSManagedObjectModel, NSMutableArray, NSMutableDictionary, NSString, NSURL, NSUUID, TDCatalogGlobals, TDDeviceTraits, TDHistorian, TDThreadMOCOrganizer;
@protocol TDAssetManagementDelegate, TDCustomAssetProvider;

@interface CoreThemeDocument : TDPersistentDocument
{
    NSMutableDictionary *constantArrayControllers;
    NSMutableDictionary *cachedConstantArrays;
    long long cachedMaxIdentifierInUse;
    TDHistorian *m_historian;
    TDThreadMOCOrganizer *m_mocOrganizer;
    NSManagedObjectModel *m_managedObjectModel;
    NSString *pathToRepresentedDocument;
    NSString *_relativePathToProductionData;
    NSString *_targetPlatform;
    NSMutableDictionary *_packableRenditions;
    NSMutableDictionary *_explicitlyPackedIdentifiers;
    NSMutableDictionary *_explicitlyPackedPackings;
    NSMutableDictionary *_explicitlyPackedContents;
    BOOL m_didMigrate;
    int _updateVersionMetadataState;
    NSString *_minimumDeploymentVersion;
    int _majorVersion;
    int _minorVersion;
    int _patchVersion;
    NSMutableArray *_deviceTraits;
    struct _renditionkeyfmt *_keyFormat;
    TDCatalogGlobals *_catalogGlobals;
    id<TDAssetManagementDelegate> _assetManagementDelegate;
    id<TDCustomAssetProvider> _customAssetProvider;
}

@property (nonatomic) id<TDAssetManagementDelegate> assetManagementDelegate; // @synthesize assetManagementDelegate=_assetManagementDelegate;
@property (readonly) TDCatalogGlobals *catalogGlobals;
@property (nonatomic) id<TDCustomAssetProvider> customAssetProvider; // @synthesize customAssetProvider=_customAssetProvider;
@property (readonly, nonatomic) int majorVersion;
@property (copy, nonatomic) NSString *minimumDeploymentVersion; // @synthesize minimumDeploymentVersion=_minimumDeploymentVersion;
@property (readonly, nonatomic) int minorVersion;
@property (strong, nonatomic) TDDeviceTraits *optimizeForDeviceTraits;
@property (readonly, nonatomic) int patchVersion;
@property (copy) NSString *pathToRepresentedDocument; // @synthesize pathToRepresentedDocument;
@property (readonly, nonatomic) NSURL *themeBitSourceURL;
@property (copy, nonatomic) NSUUID *uuid;

+ (void)_addThemeDocument:(id)arg1;
+ (id)_imageAssetURLsByCopyingFileURLs:(id)arg1 toManagedLocationAtURL:(id)arg2 error:(id *)arg3;
+ (id)_sharedDocumentList;
+ (void)closeMigrationProgress;
+ (id)createConfiguredDocumentAtURL:(id)arg1 error:(id *)arg2;
+ (id)dataModelNameForVersion:(long long)arg1;
+ (long long)dataModelVersion;
+ (long long)dataModelVersionFromMetadata:(id)arg1;
+ (BOOL)defaultAllowsExtendedRangePixelFormats;
+ (long long)defaultTargetPlatform;
+ (id)defaultThemeBitSourceURLForDocumentURL:(id)arg1;
+ (void)doneWithColorConversion;
+ (void)initialize;
+ (int)maximumAreaOfPackableImageForScale:(unsigned long long)arg1;
+ (id)migrateDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
+ (id)persistentStringForPlatform:(long long)arg1;
+ (long long)platformForPersistentString:(id)arg1;
+ (void)presentMigrationProgress;
+ (int)shouldConvertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2 error:(id *)arg3;
+ (unsigned long long)standardColorSpaceID;
+ (long long)targetPlatformForMOC:(id)arg1;
- (id)_addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5 sortedCustomInfos:(id *)arg6;
- (id)_addAssetsFromCustomAssetInfos:(id)arg1 bitSource:(id)arg2 error:(id *)arg3;
- (void)_addResolvedLayerReferenceToFlattenedImageRendition:(id)arg1 usingArtworkRendition:(id)arg2 andLayerReference:(id)arg3;
- (void)_automaticP3GenerationFromSRGB;
- (void)_automaticSRGBGenerationFromP3;
- (void)_backwardsCompatibilityPatchForLayoutDirection;
- (id)_cachedConstantsForEntity:(id)arg1;
- (BOOL)_canremoveKeyAttribte:(unsigned short)arg1;
- (BOOL)_clampMetrics;
- (long long)_compareFlattenedKeySpec1:(id)arg1 toKeySpec2:(id)arg2;
- (void)_configureAfterFirstSave;
- (id)_createNamedElementWithIdentifier:(long long)arg1;
- (id)_createNamedElementWithNextAvailableIdentifier;
- (id)_createPhotoshopElementProductionWithAsset:(id)arg1;
- (id)_customizedSchemaDefinitionsForEntity:(id)arg1;
- (void)_delete:(id)arg1 withRendition:(id)arg2;
- (id)_genericPartDefinition;
- (void)_getFilename:(id *)arg1 scaleFactor:(unsigned int *)arg2 category:(id *)arg3 bitSource:(id *)arg4 forFileURL:(id)arg5;
- (void)_groupPackableRenditions;
- (void)_insertRendition:(id)arg1 forKey:(id)arg2;
- (void)_makeRadiosityImages;
- (BOOL)_matchesAllExceptGamut:(id)arg1 andKeySpec:(id)arg2;
- (id)_namedImageEffectPartDefinition;
- (id)_namedImagePartDefinition;
- (id)_namedTextEffectPartDefinition;
- (void)_normalizeRenditionKeySpec:(id)arg1 forSchemaRendition:(id)arg2;
- (void)_optimizeForDeviceTraits;
- (id)_predicateForRenditionKeySpec:(id)arg1;
- (void)_processModelProductions;
- (void)_removeRedundantPDFBasedRenditions:(id)arg1;
- (void)_removeRedundantPDFBasedRenditionsForAssets:(id)arg1;
- (id)_sizeIndexesByNameFromNamedAssetImportInfos:(id)arg1;
- (void)_synchronousSave;
- (id)_themeBitSource:(id *)arg1;
- (id)_themeBitSourceForReferencedFilesAtURLs:(id)arg1 createIfNecessary:(BOOL)arg2;
- (void)_tidyUpLayerStacks;
- (void)_tidyUpRecognitionImages;
- (void)_updateKeyFormat;
- (BOOL)_updateRenditionPackings:(id)arg1 error:(id *)arg2;
- (id)addAssetsAtFileURLs:(id)arg1;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2;
- (id)addAssetsAtFileURLs:(id)arg1 createProductions:(BOOL)arg2 referenceFiles:(BOOL)arg3 bitSource:(id)arg4 customInfos:(id)arg5;
- (void)addDeviceTraitForOptimization:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1;
- (void)addThemeBitSourceAtPath:(id)arg1 createProductions:(BOOL)arg2;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2;
- (id)allObjectsForEntity:(id)arg1 withSortDescriptors:(id)arg2 error:(id *)arg3;
- (BOOL)allowMultipleInstancesOfElementID:(long long)arg1;
- (BOOL)allowsExtendedRangePixelFormats;
- (id)artworkDraftTypeWithIdentifier:(long long)arg1;
- (id)artworkFormat;
- (id)assetAtFileURL:(id)arg1;
- (id)assetAtPath:(id)arg1;
- (void)buildModel;
- (BOOL)canImportNamedAssetImportInfo:(id)arg1;
- (void)changedObjectsNotification:(id)arg1;
- (BOOL)checkCompatibilityOfDocumentAtURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)checkVersionsAndUpdateIfNecessary;
- (unsigned int)checksum;
- (unsigned long long)colorSpaceID;
- (id)compressionTypeWithIdentifier:(long long)arg1;
- (BOOL)configurePersistentStoreCoordinatorForURL:(id)arg1 ofType:(id)arg2 modelConfiguration:(id)arg3 storeOptions:(id)arg4 error:(id *)arg5;
- (id)constantWithName:(id)arg1 forIdentifier:(long long)arg2;
- (void)convertColorsFromColorSpaceWithIdentifier:(unsigned long long)arg1 toIdentifier:(unsigned long long)arg2;
- (unsigned long long)countForEntity:(id)arg1 withPredicate:(id)arg2;
- (unsigned long long)countOfRenditionsMatchingRenditionKeySpec:(id)arg1;
- (unsigned long long)countOfRenditionsMatchingRenditionKeySpecs:(id)arg1;
- (id)createAssetWithName:(id)arg1 fileType:(id)arg2 scaleFactor:(unsigned int)arg3 inCategory:(id)arg4 forThemeBitSource:(id)arg5;
- (id)createAssetWithName:(id)arg1 inCategory:(id)arg2 forThemeBitSource:(id)arg3;
- (id)createAssetWithName:(id)arg1 scaleFactor:(unsigned int)arg2 inCategory:(id)arg3 forThemeBitSource:(id)arg4;
- (BOOL)createCustomArtworkProductionsForCustomAssets:(id)arg1 withImportInfos:(id)arg2 error:(id *)arg3;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1;
- (id)createEffectStyleProductionForPartDefinition:(id)arg1 withNameIdentifier:(id)arg2;
- (id)createElementProductionWithAsset:(id)arg1;
- (id)createNamedArtworkProductionsForAssets:(id)arg1 customInfos:(id)arg2 error:(id *)arg3;
- (id)createNamedColorProductionsForImportInfos:(id)arg1 error:(id *)arg2;
- (id)createNamedEffectProductionWithName:(id)arg1 isText:(BOOL)arg2;
- (void)createNamedModelsForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id *)arg4;
- (void)createNamedRenditionGroupProductionsForImportInfos:(id)arg1 error:(id *)arg2;
- (void)createNamedTexturesForCustomInfos:(id)arg1 referenceFiles:(BOOL)arg2 bitSource:(id)arg3 error:(id *)arg4;
- (BOOL)createPSDReferenceArtworkForRenditionGroup:(id)arg1 atDestination:(id)arg2 error:(id *)arg3;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 nameElement:(id)arg4 shouldReplaceExisting:(BOOL)arg5 error:(id *)arg6;
- (id)createProductionWithRenditionGroup:(id)arg1 forPartDefinition:(id)arg2 artworkFormat:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id *)arg5;
- (id)createReferencePNGForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2 atLocation:(id)arg3 error:(id *)arg4;
- (BOOL)customizationExistsForSchemaDefinition:(id)arg1;
- (BOOL)customizeSchemaEffectDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id *)arg3;
- (BOOL)customizeSchemaElementDefinition:(id)arg1 usingArtworkFormat:(id)arg2 shouldReplaceExisting:(BOOL)arg3 error:(id *)arg4;
- (BOOL)customizeSchemaMaterialDefinition:(id)arg1 shouldReplaceExisting:(BOOL)arg2 error:(id *)arg3;
- (BOOL)customizeSchemaPartDefinition:(id)arg1 usingArtworkFormat:(id)arg2 nameElement:(id)arg3 shouldReplaceExisting:(BOOL)arg4 error:(id *)arg5;
- (id)customizedSchemaEffectDefinitions;
- (id)customizedSchemaElementDefinitions;
- (id)customizedSchemaMaterialDefinitions;
- (void)dealloc;
- (id)defaultBaseFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPNGFileNameForSchemaRendition:(id)arg1 withPartDefinition:(id)arg2;
- (id)defaultPathComponentsForPartDefinition:(id)arg1;
- (void)deleteNamedAssets:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)deleteObject:(id)arg1;
- (void)deleteObjects:(id)arg1;
- (void)deleteProduction:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (void)deleteProductions:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (id)deploymentTargetWithIdentifier:(long long)arg1;
- (id)deviceTraitsUsedForOptimization;
- (BOOL)didMigrate;
- (id)directionWithIdentifier:(long long)arg1;
- (id)displayGamutWithIdentifier:(long long)arg1;
- (id)drawingLayerWithIdentifier:(long long)arg1;
- (id)effectComponentWithType:(unsigned int)arg1 inRendition:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectParameterTypeWithIdentifier:(unsigned int)arg1;
- (id)effectParameterValueWithType:(unsigned int)arg1 inComponent:(id)arg2 createIfNeeded:(BOOL)arg3;
- (id)effectTypeWithIdentifier:(unsigned int)arg1;
- (id)elementProductionsWithName:(id)arg1;
- (id)elementWithIdentifier:(long long)arg1;
- (void)exportColorsToURL:(id)arg1;
- (void)exportCursorsToURL:(id)arg1;
- (id)folderNameFromRenditionKey:(id)arg1 forPartDefinition:(id)arg2;
- (id)graphicsFeatureSetClassWithIdentifier:(long long)arg1;
- (id)historian;
- (id)idiomWithIdentifier:(long long)arg1;
- (void)importColorsFromURL:(id)arg1 valuesOnly:(BOOL)arg2 getUnusedColorNames:(id *)arg3;
- (void)importCursorsFromURL:(id)arg1 getUnusedImportedCursors:(id *)arg2 getUnupdatedCursors:(id *)arg3;
- (void)importCustomAssetsWithImportInfos:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)importNamedAssetsFromFileURLs:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)importNamedAssetsWithImportInfos:(id)arg1 referenceFiles:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)incrementallyPackRenditionsSinceDate:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithContentsOfURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (id)initWithType:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 targetPlatform:(long long)arg2 error:(id *)arg3;
- (BOOL)isCustomLook;
- (id)iterationTypeWithIdentifier:(int)arg1;
- (id)lookWithIdentifier:(long long)arg1;
- (id)managedObjectModel;
- (id)mappingForPhotoshopLayerIndex:(long long)arg1 themeDrawingLayerIdentifier:(long long)arg2;
- (id)metadatumForKey:(id)arg1;
- (id)minimalDisplayNameForThemeConstant:(id)arg1;
- (id)mocOrganizer;
- (id)namedArtworkProductionWithName:(id)arg1;
- (id)namedArtworkProductions;
- (id)namedEffectProductionWithName:(id)arg1;
- (id)namedEffectProductions;
- (id)namedElementWithName:(id)arg1;
- (id)namedElementsForElementDefinition:(id)arg1;
- (id)newObjectForEntity:(id)arg1;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (id)objectsForEntity:(id)arg1 withPredicate:(id)arg2 sortDescriptors:(id)arg3 withContext:(id)arg4 error:(id *)arg5;
- (void)packRenditionsError:(id *)arg1;
- (id)partWithIdentifier:(long long)arg1;
- (id)pathToAsset:(id)arg1;
- (id)persistentStoreTypeForFileType:(id)arg1;
- (id)pixelFormatWithIdentifier:(long long)arg1;
- (id)presentationStateWithIdentifier:(long long)arg1;
- (id)previousStateWithIdentifier:(long long)arg1;
- (id)previousValueWithIdentifier:(long long)arg1;
- (void)primeArrayControllers;
- (id)psdImageRefForAsset:(id)arg1;
- (BOOL)readFromURL:(id)arg1 ofType:(id)arg2 error:(id *)arg3;
- (void)recacheThemeConstant:(id)arg1;
- (id)relativePathToProductionData;
- (void)removeCustomizationForSchemaDefinition:(id)arg1 shouldDeleteAssetFiles:(BOOL)arg2;
- (void)removeDeviceTraitsForOptimization;
- (const struct _renditionkeyfmt *)renditionKeyFormat;
- (int)renditionKeySemantics;
- (long long)renditionKeySpecAttributeCount;
- (id)renditionSubtypeWithIdentifier:(unsigned int)arg1;
- (id)renditionTypeWithIdentifier:(long long)arg1;
- (id)renditionsMatchingRenditionKeySpec:(id)arg1;
- (void)resetThemeConstants;
- (id)rootPathForProductionData;
- (id)schemaCategoryWithIdentifier:(long long)arg1;
- (id)schemaDefinitionWithElementID:(long long)arg1;
- (id)schemaPartDefinitionWithElementID:(long long)arg1 partID:(long long)arg2;
- (void)setAllowsExtendedRangePixelFormats:(BOOL)arg1;
- (void)setArtworkFormat:(id)arg1;
- (void)setMetadatum:(id)arg1 forKey:(id)arg2;
- (void)setRelativePathToProductionData:(id)arg1;
- (void)setTargetPlatform:(long long)arg1;
- (BOOL)shouldSupportCompactCompression;
- (id)sizeClassWithIdentifier:(long long)arg1;
- (id)sizeWithIdentifier:(long long)arg1;
- (id)slicesComputedForImageSize:(struct CGSize)arg1 usingSliceInsets:(CDStruct_3c058996)arg2 resizableSliceSize:(struct CGSize)arg3 withRenditionType:(long long)arg4;
- (id)stateWithIdentifier:(long long)arg1;
- (long long)targetPlatform;
- (id)templateRenderingModeWithIdentifier:(long long)arg1;
- (id)textureFaceWithIdentifier:(long long)arg1;
- (id)textureInterpretaitionWithIdentifier:(unsigned int)arg1;
- (id)themeConstant:(id)arg1 withIdentifier:(long long)arg2;
- (const struct _renditionkeyfmt *)untrimmedRenditionKeyFormat;
- (id)updateAutomaticTexturesForCustomInfos:(id)arg1 allTextureInfos:(id)arg2;
- (void)updateRenditionSpec:(id)arg1;
- (id)updateToEmbeddedSchemaVersion2AndReturnAlertString:(id *)arg1;
- (id)updatedVersionsMetadataFromMetadata:(id)arg1;
- (BOOL)usesCUISystemThemeRenditionKey;
- (id)valueWithIdentifier:(long long)arg1;
- (id)zeroCodeArtworkInfoWithIdentifier:(long long)arg1;

@end

