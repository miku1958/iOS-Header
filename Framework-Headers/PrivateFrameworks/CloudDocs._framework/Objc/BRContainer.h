//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocs/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSPurgeableData, NSSet, NSString, NSURL;

@interface BRContainer : NSObject <NSSecureCoding>
{
    NSString *_containerID;
    NSSet *_bundleIDs;
    NSDictionary *_bundleIDVersions;
    NSString *_localizedName;
    NSString *_supportedFolderLevels;
    NSSet *_documentsTypes;
    NSSet *_exportedTypes;
    NSSet *_importedTypes;
    NSDictionary *_iconMetadata;
    NSDictionary *_iconURLs;
    NSNumber *_iconGeneratorVersion;
    BOOL _isObservingOverQuota;
    BOOL _isOverQuota;
    BOOL _isCloudSyncTCCDisabled;
    BOOL _isInInitialState;
    BOOL _isInCloudDocsZone;
    NSNumber *_isDocumentScopePublicAsNumber;
    BOOL _isObservingLastServerUpdate;
    NSDate *_lastServerUpdate;
    BOOL _isObservingCurrentStatus;
    unsigned int _currentStatus;
    NSData *_imageSandboxExtension;
    BOOL _shouldUsePurgeableData;
    NSData *_dataRepresentation;
    NSPurgeableData *_purgeableDataRepresentation;
}

@property (readonly, copy, nonatomic) NSSet *bundleIdentifiers;
@property (readonly, nonatomic) NSSet *documentsTypes;
@property (readonly, nonatomic) NSURL *documentsURL;
@property (readonly, nonatomic) NSSet *exportedTypes;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_containerID;
@property (readonly, nonatomic) NSSet *importedTypes;
@property (nonatomic) BOOL isCloudSyncTCCDisabled; // @synthesize isCloudSyncTCCDisabled=_isCloudSyncTCCDisabled;
@property (readonly, nonatomic) BOOL isDocumentScopePublic;
@property (nonatomic) BOOL isInCloudDocsZone; // @synthesize isInCloudDocsZone=_isInCloudDocsZone;
@property (nonatomic) BOOL isInInitialState; // @synthesize isInInitialState=_isInInitialState;
@property (readonly, nonatomic) NSString *localizedName;
@property (readonly, nonatomic, getter=isOverQuota) BOOL overQuota;
@property (nonatomic, getter=isOverQuota) BOOL overQuota;
@property (readonly, nonatomic) NSString *supportedFolderLevels;
@property (readonly, nonatomic) NSURL *trashURL;
@property (readonly, nonatomic) NSURL *url;

+ (id)_URLForPlistOfContainerID:(id)arg1;
+ (id)_bundleIDVersionsWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_bundleIDsWithProperties:(id)arg1;
+ (id)_containerRepositoryURLForContainerID:(id)arg1;
+ (id)_documentsTypesWithProperties:(id)arg1;
+ (id)_exportedTypesWithProperties:(id)arg1;
+ (void)_generateiOSIconsForContainerID:(id)arg1 usingBundle:(struct __CFBundle *)arg2 generatedIcons:(id)arg3;
+ (id)_iconGeneratorVersionWithProperties:(id)arg1;
+ (id)_iconMetadataWithProperties:(id)arg1;
+ (id)_iconURLsWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_importedTypesWithProperties:(id)arg1;
+ (id)_isDocumentScopePublicAsNumberWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)_localizedNameWithProperties:(id)arg1 containerID:(id)arg2 preferredLanguages:(id)arg3;
+ (id)_pathForIconName:(id)arg1 containerID:(id)arg2;
+ (id)_sanitizedContainerFallbackNameForContainerID:(id)arg1;
+ (id)_supportedFolderLevelsWithProperties:(id)arg1;
+ (id)allContainers;
+ (id)allContainersByContainerID;
+ (id)bundleIdentifiersEnumeratorForProperties:(id)arg1;
+ (id)bundlePropertyEnumerator:(id)arg1 valuesOfClass:(Class)arg2 forProperties:(id)arg3;
+ (BOOL)canMoveFilesWithoutDownloadingFromContainer:(id)arg1 toContainer:(id)arg2;
+ (id)classesForDecoding;
+ (id)containerForContainerID:(id)arg1;
+ (id)containerForItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)containerIDFromSharedContainerID:(id)arg1;
+ (id)containerIDFromSharedMangledID:(id)arg1;
+ (id)containerInRepositoryURL:(id)arg1 createIfMissing:(BOOL)arg2 error:(id *)arg3;
+ (id)containerInRepositoryURL:(id)arg1 error:(id *)arg2;
+ (id)containersRepositoryURL;
+ (id)documentContainers;
+ (id)documentsContainersInBackupHomeAtURL:(id)arg1 error:(id *)arg2;
+ (void)forceRefreshAllContainersWithCompletion:(CDUnknownBlockType)arg1;
+ (void)forceRefreshContainers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)initialize;
+ (BOOL)isDocumentScopePublicWithProperties:(id)arg1 containerID:(id)arg2;
+ (id)localizedNameForDefaultCloudDocsContainer;
+ (id)localizedNameForDesktopContainer;
+ (id)localizedNameForDocumentsContainer;
+ (id)ownerNameFromSharedMangledID:(id)arg1;
+ (void)postContainerListUpdateNotification;
+ (void)postContainerStatusChangeNotificationWithID:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (id)privateMangledContainerID:(id)arg1;
+ (id)privateUnmangledContainerID:(id)arg1;
+ (id)propertiesForContainerID:(id)arg1 usingBundle:(struct __CFBundle *)arg2 minimumBundleVersion:(id)arg3 bundleIcons:(id *)arg4;
+ (id)sharedMangledIDWithContainerID:(id)arg1 ownerName:(id)arg2;
+ (BOOL)supportsSecureCoding;
+ (void)unregisterCurrentProcessAsPriorityHint;
+ (BOOL)validateContainerID:(id)arg1;
+ (BOOL)validateOwnerName:(id)arg1;
+ (BOOL)validateSharedMangledID:(id)arg1;
+ (BOOL)versionOfBundle:(id)arg1 changedFromVersion:(id)arg2;
- (void).cxx_destruct;
- (id)_containerRepositoryURL;
- (id)_imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2 isiOSIcon:(BOOL *)arg3 shouldTransformToAppIcon:(BOOL *)arg4;
- (id)_mangledID;
- (id)_pathForIconName:(id)arg1;
- (id)_pathForPlist;
- (void)_performWhileAccessingSecurityScopedContainer:(CDUnknownBlockType)arg1;
- (void)_replaceDataRepresentationWithData:(id)arg1;
- (BOOL)_updateMetadataOnDiskWithProperties:(id)arg1;
- (void)accessDataRepresentationInBlock:(CDUnknownBlockType)arg1;
- (void)accessPropertiesInBlock:(CDUnknownBlockType)arg1;
- (id)bundleIDVersions;
- (id)computedProperties;
- (BOOL)containsExcludedDocumentsOnTheFSWithExcludedButPreservedFilename:(id)arg1 excludedButPreservedExtensions:(id)arg2 andStampUploadedAppWithXattr:(BOOL)arg3;
- (id)copyDataRepresentation;
- (unsigned int)currentStatus;
- (BOOL)deleteAllContentsOnClientAndServer:(id *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)forceRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)hasIconWithName:(id)arg1;
- (id)iconGeneratorVersion;
- (id)iconMetadata;
- (id)iconURLs;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2 isiOSIcon:(BOOL *)arg3;
- (id)imageDataForSize:(struct CGSize)arg1 scale:(long long)arg2 shouldTransformToAppIcon:(BOOL *)arg3;
- (id)imageRepresentationsAvailable;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1;
- (id)initWithContainerID:(id)arg1 dataRepresentation:(id)arg2;
- (id)initWithDocsOrDesktopContainerID:(id)arg1;
- (id)lastServerUpdate;
- (id)localizedNameWithPreferredLanguages:(id)arg1;
- (BOOL)registerCurrentProcessAsPriorityHintWithError:(id *)arg1;
- (void)setCurrentStatus:(unsigned int)arg1;
- (void)setLastServerUpdate:(id)arg1;
- (id)shortDescription;
- (id)trashRestoreStringForURL:(id)arg1;
- (BOOL)updateMetadataWithExtractorProperties:(id)arg1 iconPaths:(id)arg2 bundleID:(id)arg3;
- (BOOL)updateMetadataWithRecordData:(id)arg1 iconPaths:(id)arg2;
- (id)versionNumberForBundleIdentifier:(id)arg1;

@end
