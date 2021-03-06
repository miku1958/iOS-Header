//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKPrivateDatabase;

@interface FCCKSecureDatabaseResetOperation : FCOperation
{
    BOOL _deleteZones;
    BOOL _restoreSecureSentinel;
    BOOL _restoreZoneContents;
    FCCKPrivateDatabase *_database;
    CDUnknownBlockType _resetCompletionHandler;
}

@property (strong, nonatomic) FCCKPrivateDatabase *database; // @synthesize database=_database;
@property (nonatomic) BOOL deleteZones; // @synthesize deleteZones=_deleteZones;
@property (copy, nonatomic) CDUnknownBlockType resetCompletionHandler; // @synthesize resetCompletionHandler=_resetCompletionHandler;
@property (nonatomic) BOOL restoreSecureSentinel; // @synthesize restoreSecureSentinel=_restoreSecureSentinel;
@property (nonatomic) BOOL restoreZoneContents; // @synthesize restoreZoneContents=_restoreZoneContents;

- (void).cxx_destruct;
- (id)_deleteZones;
- (id)_rawRecordsToSave;
- (id)_rawZoneIDsToDelete;
- (id)_rawZonesToRecreate;
- (id)_recreateZones;
- (id)_restoreSecureSentinel;
- (id)_restoreZoneContents;
- (id)init;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end

