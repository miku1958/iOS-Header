//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class EDPersistenceDatabaseConnection, EFSQLSchema;

@interface MFMailMessageLibraryModifyColumnDefinitionsMigrationStep : NSObject
{
    EDPersistenceDatabaseConnection *_connection;
}

@property (strong, nonatomic) EDPersistenceDatabaseConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) EFSQLSchema *schema;

- (void).cxx_destruct;
- (id)actionFlagsTableSchema;
- (id)actionLabelsTableSchema;
- (id)actionMessagesTableSchema;
- (id)initWithSQLiteConnection:(id)arg1;
- (id)localMessageActionsTableSchema;
- (id)mailboxesTableStubSchema;
- (id)messagesTableStubSchema;
- (BOOL)performMigrationStep;
- (id)serverLabelsTableSchema;
- (id)serverMessagesTableSchema;

@end
