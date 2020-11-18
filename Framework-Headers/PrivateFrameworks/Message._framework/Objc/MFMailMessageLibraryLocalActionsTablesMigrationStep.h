//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection;

@interface MFMailMessageLibraryLocalActionsTablesMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
}

@property (strong, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;

+ (id)log;
- (void).cxx_destruct;
- (id)_actionFlagsActionIndexDefinition;
- (id)_actionFlagsTableDefinition;
- (id)_actionLabelsActionIndexDefinition;
- (id)_actionLabelsLabelIndexDefinition;
- (id)_actionLabelsTableDefinition;
- (id)_actionMessagesActionIndexDefinition;
- (id)_actionMessagesDestinationMessageIndexDefinition;
- (id)_actionMessagesMessageIndexDefinition;
- (id)_actionMessagesTableDefinition;
- (id)_localMessageActionsMailboxRowIDIndexDefinition;
- (id)_localMessageActionsTableDefinition;
- (id)_offlineCacheOperations;
- (BOOL)_populateServerMessages;
- (id)_serverLabelsTableDefinition;
- (id)_serverMessagesMessageIndexDefinition;
- (id)_serverMessagesTableDefinition;
- (id)initWithSQLiteConnection:(id)arg1;
- (BOOL)performMigrationStep;

@end
