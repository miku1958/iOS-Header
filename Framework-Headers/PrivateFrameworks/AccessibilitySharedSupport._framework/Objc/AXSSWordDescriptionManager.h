//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSManagedObjectModel, NSPersistentStoreCoordinator, NSString;

@interface AXSSWordDescriptionManager : NSObject
{
    NSManagedObjectContext *_managedObjectContext;
    NSPersistentStoreCoordinator *_persistentStoreCoordinator;
    NSManagedObjectModel *_managedObjectModel;
    NSString *languageDialectCode;
}

@property (strong, nonatomic) NSString *languageDialectCode; // @synthesize languageDialectCode;
@property (readonly, nonatomic) NSManagedObjectContext *managedObjectContext; // @synthesize managedObjectContext=_managedObjectContext;
@property (readonly, nonatomic) NSManagedObjectModel *managedObjectModel; // @synthesize managedObjectModel=_managedObjectModel;
@property (readonly, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator; // @synthesize persistentStoreCoordinator=_persistentStoreCoordinator;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)descriptionForWord:(id)arg1;
- (id)descriptionOfWord:(id)arg1 forLanguage:(id)arg2;
- (id)languageCode;

@end

