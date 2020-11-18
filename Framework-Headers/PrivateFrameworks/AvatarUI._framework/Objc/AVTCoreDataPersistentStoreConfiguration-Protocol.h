//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSManagedObjectContext, NSPersistentStoreCoordinator, NSPersistentStoreDescription;

@protocol AVTCoreDataPersistentStoreConfiguration <NSObject>
- (NSManagedObjectContext *)createManagedObjectContext;
- (NSPersistentStoreCoordinator *)persistentStoreCoordinator;
- (BOOL)setupIfNeeded:(id *)arg1;
- (NSPersistentStoreDescription *)storeDescription;
@end
