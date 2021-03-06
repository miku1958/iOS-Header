//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ML3DatabaseConnection, MLMediaLibraryService, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface ML3StatementAccumulator : NSObject
{
    MLMediaLibraryService *_xpcService;
    NSObject<OS_dispatch_queue> *_serialQueue;
    unsigned long long _statementThreshold;
    NSMutableArray *_statementQueue;
    NSString *_databasePath;
    ML3DatabaseConnection *_connection;
    NSUUID *_existingTransactionIdentifier;
    unsigned long long _priorityLevel;
}

@property (readonly, nonatomic) ML3DatabaseConnection *connection; // @synthesize connection=_connection;
@property (readonly, nonatomic) NSString *databasePath; // @synthesize databasePath=_databasePath;
@property (strong, nonatomic) NSUUID *existingTransactionIdentifier; // @synthesize existingTransactionIdentifier=_existingTransactionIdentifier;
@property (nonatomic) unsigned long long priorityLevel; // @synthesize priorityLevel=_priorityLevel;
@property (readonly, nonatomic) NSMutableArray *statementQueue; // @synthesize statementQueue=_statementQueue;
@property (nonatomic) unsigned long long statementThreshold; // @synthesize statementThreshold=_statementThreshold;

- (void).cxx_destruct;
- (BOOL)_onQueueFlushAndWait:(BOOL)arg1;
- (void)dealloc;
- (BOOL)enqueueStatement:(id)arg1;
- (BOOL)flushAndWait:(BOOL)arg1;
- (id)init;
- (id)initWithConnection:(id)arg1;

@end

