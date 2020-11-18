//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class ML3DatabaseConnection, NSArray;

__attribute__((visibility("hidden")))
@interface ML3ContainerItemDiffOperation : NSOperation
{
    long long _containerPersistentID;
    NSArray *_updatedItemsPersistentIDs;
    ML3DatabaseConnection *_connection;
    NSArray *_containerItemsToUpdate;
    NSArray *_containerItemsToDelete;
}

@property (strong, nonatomic) NSArray *containerItemsToDelete; // @synthesize containerItemsToDelete=_containerItemsToDelete;
@property (strong, nonatomic) NSArray *containerItemsToUpdate; // @synthesize containerItemsToUpdate=_containerItemsToUpdate;

- (void).cxx_destruct;
- (id)initWithContainerPersistentID:(long long)arg1 updatedItemsPersistentIDs:(id)arg2 connection:(id)arg3;
- (void)main;

@end

