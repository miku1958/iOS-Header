//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@class NSArray, PLManagedObjectContext;

@protocol PLManagedObjectContextPTPNotificationDelegate <NSObject>
- (void)managedObjectContext:(PLManagedObjectContext *)arg1 libraryChangedWithInsertedAssetIDs:(NSArray *)arg2 deletedAssetIDs:(NSArray *)arg3 changedAssetIDs:(NSArray *)arg4 adjustedAssetIDs:(NSArray *)arg5;
@end

