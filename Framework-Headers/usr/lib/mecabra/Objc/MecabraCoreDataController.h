//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSEntityDescription, NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString, NSURL;

@interface MecabraCoreDataController : NSObject
{
    NSEntityDescription *_entityDescription;
    NSURL *_localURL;
    NSString *_localURLLastPartOfName;
    NSManagedObjectModel *_managedObjectModel;
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSURL *_storeURL;
    NSString *_type;
    NSArray *_storedElementsForMerge;
}

@property (readonly, nonatomic) NSEntityDescription *entityDescription; // @synthesize entityDescription=_entityDescription;
@property (readonly, nonatomic) NSURL *localInfoPlistURL;
@property (readonly, nonatomic) NSURL *localStoreURL;
@property (strong, nonatomic) NSURL *localURL; // @synthesize localURL=_localURL;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (strong, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property (strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;
@property (strong, nonatomic) NSURL *storeURL; // @synthesize storeURL=_storeURL;
@property (strong, nonatomic) NSArray *storedElementsForMerge; // @synthesize storedElementsForMerge=_storedElementsForMerge;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;

+ (void)resetDatabaseWithType:(id)arg1 URL:(id)arg2;
- (void)addEntry:(id)arg1;
- (void)clearStoredMergeEntries;
- (id)coreDataUbiquityFolderURLforStore:(id)arg1;
- (id)databaseName;
- (id)databasePropertyForKey:(id)arg1;
- (void)dealloc;
- (void)deleteAllElements;
- (void)deleteAllMatchingEntries:(id)arg1;
- (void)deleteEntry:(id)arg1;
- (BOOL)dictionaryEntryHasAllRequiredKeys:(id)arg1;
- (id)dictionaryValueFromManagedObject:(id)arg1;
- (id)dictionaryValuesFromManagedObjects:(id)arg1;
- (id)entityDescriptionForContext:(id)arg1;
- (id)entriesFromStrippedStoreURL:(id)arg1;
- (id)entriesToMerge;
- (id)initWithType:(id)arg1 URL:(id)arg2;
- (BOOL)isLogging;
- (id)locallyPresentUbiquitousFiles;
- (void)logEntry:(id)arg1 operationType:(id)arg2 extraInformation:(id)arg3;
- (void)logMessage:(id)arg1;
- (id)newPersistentStoreWithURL:(id)arg1 ubiquityContainerIdentifier:(id)arg2 managedObjectModel:(id)arg3;
- (void)prepareURLForDatabaseFile:(id)arg1;
- (id)removeDuplicatesForEntry:(id)arg1 uniquingKeys:(id)arg2 sortDescriptors:(id)arg3 restrictToNumberOfElements:(unsigned long long)arg4 identifierKey:(id)arg5;
- (void)save;
- (id)searchResultsWithValueDictionary:(id)arg1;
- (id)searchResultsWithValueDictionary:(id)arg1 managedObjectContext:(id)arg2 sortDescriptors:(id)arg3;
- (id)searchResultsWithValueDictionary:(id)arg1 sortDescriptors:(id)arg2;
- (void)sendRemoteNotification;
- (void)setDatabaseProperty:(id)arg1 forKey:(id)arg2;
- (void)setValue:(id)arg1 forKey:(id)arg2 entry:(id)arg3;
- (void)setValuesForEntry:(id)arg1 uniquingKeys:(id)arg2;
- (BOOL)shouldSyncDatabase;
- (BOOL)stripUbiquitousInformationFromStore:(id)arg1;

@end

