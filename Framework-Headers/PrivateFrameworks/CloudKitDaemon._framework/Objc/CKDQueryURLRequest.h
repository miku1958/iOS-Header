//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKitDaemon/CKDURLRequest.h>

@class CKQuery, CKRecordZoneID, NSArray, NSData, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDQueryURLRequest : CKDURLRequest
{
    NSMutableArray *_queryResponses;
    BOOL _shouldFetchAssetContent;
    CKQuery *_query;
    NSData *_cursor;
    unsigned long long _limit;
    CKRecordZoneID *_zoneID;
    NSArray *_requestedFields;
    NSData *_resultsCursor;
}

@property (strong, nonatomic) NSData *cursor; // @synthesize cursor=_cursor;
@property (nonatomic) unsigned long long limit; // @synthesize limit=_limit;
@property (strong, nonatomic) CKQuery *query; // @synthesize query=_query;
@property (strong, nonatomic) NSArray *queryResponses; // @synthesize queryResponses=_queryResponses;
@property (strong, nonatomic) NSArray *requestedFields; // @synthesize requestedFields=_requestedFields;
@property (strong, nonatomic) NSData *resultsCursor; // @synthesize resultsCursor=_resultsCursor;
@property (nonatomic) BOOL shouldFetchAssetContent; // @synthesize shouldFetchAssetContent=_shouldFetchAssetContent;
@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

- (void).cxx_destruct;
- (BOOL)allowsAnonymousAccount;
- (id)initWithQuery:(id)arg1 cursor:(id)arg2 limit:(unsigned long long)arg3 requestedFields:(id)arg4 zoneID:(id)arg5;
- (int)operationType;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)requestOperationClasses;
- (id)requestOperations;
- (id)zoneIDsToLock;

@end
