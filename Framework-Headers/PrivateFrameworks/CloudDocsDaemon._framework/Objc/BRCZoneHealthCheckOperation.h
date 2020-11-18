//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class CKServerChangeToken, NSMutableArray, NSMutableDictionary, NSString;

__attribute__((visibility("hidden")))
@interface BRCZoneHealthCheckOperation : _BRCOperation <BRCOperationSubclass>
{
    CKServerChangeToken *_changeToken;
    NSMutableDictionary *_recordsByID;
    NSMutableArray *_deletedRecordIds;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)completedZoneHealthSyncDownWithRequestID:(unsigned long long)arg1 error:(id)arg2;
- (id)initWithSession:(id)arg1 changeToken:(id)arg2;
- (void)main;
- (void)receivedUpdatedServerChangeToken:(id)arg1 requestID:(unsigned long long)arg2;
- (BOOL)shouldRetryForError:(id)arg1;

@end
