//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Notes/ICBaseSearchIndexerDataSource.h>

@interface ICModernSearchIndexerDataSource : ICBaseSearchIndexerDataSource
{
}

- (id)allIndexableObjectIDs;
- (void)contextWillSave:(id)arg1;
- (id)dataSourceIdentifier;
- (id)indexableObjectIDsWithIdentifiers:(id)arg1;
- (id)newManagedObjectContext;
- (id)objectForSearchableItemIdentifier:(id)arg1 context:(id)arg2;
- (id)persistentStoreCoordinator;

@end
