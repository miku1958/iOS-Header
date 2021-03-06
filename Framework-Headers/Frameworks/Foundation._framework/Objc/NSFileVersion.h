//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSPersonNameComponents, NSString, NSURL;
@protocol NSCoding;

@interface NSFileVersion : NSObject
{
    NSURL *_fileURL;
    id _addition;
    id _deadVersionIdentifier;
    id _nonLocalVersion;
    NSURL *_contentsURL;
    BOOL _isBackup;
    NSString *_localizedName;
    NSString *_localizedComputerName;
    NSDate *_modificationDate;
    BOOL _isResolved;
    BOOL _contentsURLIsAccessed;
    id _reserved;
    NSString *_name;
    BOOL _discardable;
}

@property (readonly, copy) NSURL *URL;
@property (readonly, getter=_isBackup) BOOL _isBackup;
@property (readonly, getter=isConflict) BOOL conflict;
@property (getter=isDiscardable) BOOL discardable; // @synthesize discardable=_discardable;
@property (readonly, copy) NSString *etag;
@property (readonly) BOOL hasLocalContents;
@property (readonly) BOOL hasThumbnail;
@property (readonly, copy) NSString *localizedName;
@property (readonly, copy) NSString *localizedNameOfSavingComputer;
@property (readonly, copy) NSDate *modificationDate;
@property (readonly, copy) NSString *originalPOSIXName;
@property (readonly, copy) NSString *originatorName;
@property (readonly, copy) NSPersonNameComponents *originatorNameComponents;
@property (readonly, strong) id<NSCoding> persistentIdentifier;
@property (getter=isResolved) BOOL resolved;
@property (readonly) unsigned long long size;
@property (readonly, getter=isUbiquitous) BOOL ubiquitous;

+ (void *)_addConflictObserverForItemAtURL:(id)arg1 statusChangedHandler:(CDUnknownBlockType)arg2;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 temporaryStorageIdentifier:(id *)arg4 error:(id *)arg5;
+ (id)_addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 userInfo:(id)arg4 temporaryStorageIdentifier:(id *)arg5 error:(id *)arg6;
+ (id)_autosaveDirectoryURLCreateIfNecessary:(BOOL)arg1;
+ (BOOL)_conflictsExistForItemAtURL:(id)arg1;
+ (id)_existingLibraryForURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (BOOL)_isTemporaryStorageRequiredForGSError:(id)arg1 andURL:(id)arg2;
+ (id)_libraryForURL:(id)arg1 temporaryStorageIdentifier:(id *)arg2;
+ (id)_makePermanentStorageLibraryForURL:(id)arg1 temporaryStorageRequired:(BOOL *)arg2 error:(id *)arg3;
+ (id)_makeTemporaryStorageIdentifier;
+ (void)_markConflicts:(id)arg1 asHandledForItemAtURL:(id)arg2;
+ (id)_otherNonpurgeableVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_otherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 withoutOptions:(unsigned long long)arg3;
+ (BOOL)_permanentVersionStorageSupportedForURL:(id)arg1 temporaryStorageIdentifier:(id *)arg2 error:(id *)arg3;
+ (void)_removeConflictObserver:(void *)arg1;
+ (BOOL)_removeOtherVersionsOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2 error:(id *)arg3;
+ (void)_removeTemporaryDirectoryAtURL:(id)arg1;
+ (id)_supportedGenerationalStorageClientIDs;
+ (id)_temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1 temporaryStorageIdentifier:(id)arg2;
+ (id)_temporaryStorageLocationForIdentifier:(id)arg1;
+ (id)_versionOfItemAtURL:(id)arg1 forClientID:(id)arg2 name:(id)arg3 temporaryStorageIdentifier:(id)arg4 evenIfDeleted:(BOOL)arg5;
+ (id)_versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2 temporaryStorageIdentifier:(id)arg3;
+ (id)addVersionOfItemAtURL:(id)arg1 withContentsOfURL:(id)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
+ (id)currentVersionOfItemAtURL:(id)arg1;
+ (void)discoverUbiquitousVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
+ (void)getNonlocalVersionsOfItemAtURL:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
+ (id)otherVersionsOfItemAtURL:(id)arg1;
+ (BOOL)removeOtherVersionsOfItemAtURL:(id)arg1 error:(id *)arg2;
+ (id)temporaryDirectoryURLForNewVersionOfItemAtURL:(id)arg1;
+ (id)unresolvedConflictVersionsOfItemAtURL:(id)arg1;
+ (BOOL)unresolvedConflictsExistForItemAtURL:(id)arg1;
+ (id)versionOfItemAtURL:(id)arg1 forPersistentIdentifier:(id)arg2;
+ (id)versionsOfItemAtURL:(id)arg1;
- (id)_documentInfo;
- (id)_initWithAddition:(id)arg1;
- (id)_initWithFileURL:(id)arg1 library:(id)arg2 clientID:(id)arg3 name:(id)arg4 contentsURL:(id)arg5 isBackup:(BOOL)arg6 revision:(id)arg7;
- (id)_initWithFileURL:(id)arg1 nonLocalVersion:(id)arg2;
- (void)_overrideModificationDateWithDate:(id)arg1;
- (BOOL)_preserveConflictVersionLocally;
- (BOOL)_setDocumentInfo:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)removeAndReturnError:(id *)arg1;
- (id)replaceItemAtURL:(id)arg1 options:(unsigned long long)arg2 error:(id *)arg3;
- (id)restoreOverItemAtURL:(id)arg1 error:(id *)arg2;

@end

