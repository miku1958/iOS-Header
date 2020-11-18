//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCOperation.h>

@class FCCKContentDatabase, FCEdgeCacheHint, NSArray, NSDictionary, NSMutableArray, NSMutableSet;

@interface FCCKMultiFetchQueryOperation : FCOperation
{
    FCCKContentDatabase *_database;
    NSArray *_recordIDs;
    NSArray *_recordSpecs;
    NSDictionary *_knownRecordIDsToEtags;
    FCEdgeCacheHint *_edgeCacheHint;
    NSArray *_networkEvents;
    CDUnknownBlockType _queryCompletionHandler;
    NSDictionary *_recordSpecsByType;
    NSMutableSet *_missingRecordIDs;
    NSMutableArray *_fetchedRecords;
}

@property (strong, nonatomic) FCCKContentDatabase *database; // @synthesize database=_database;
@property (copy, nonatomic) FCEdgeCacheHint *edgeCacheHint; // @synthesize edgeCacheHint=_edgeCacheHint;
@property (strong, nonatomic) NSMutableArray *fetchedRecords; // @synthesize fetchedRecords=_fetchedRecords;
@property (strong, nonatomic) NSDictionary *knownRecordIDsToEtags; // @synthesize knownRecordIDsToEtags=_knownRecordIDsToEtags;
@property (strong, nonatomic) NSMutableSet *missingRecordIDs; // @synthesize missingRecordIDs=_missingRecordIDs;
@property (copy, nonatomic) NSArray *networkEvents; // @synthesize networkEvents=_networkEvents;
@property (copy, nonatomic) CDUnknownBlockType queryCompletionHandler; // @synthesize queryCompletionHandler=_queryCompletionHandler;
@property (strong, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (strong, nonatomic) NSArray *recordSpecs; // @synthesize recordSpecs=_recordSpecs;
@property (strong, nonatomic) NSDictionary *recordSpecsByType; // @synthesize recordSpecsByType=_recordSpecsByType;

- (void).cxx_destruct;
- (id)_constructQuery;
- (id)_desiredKeys;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (BOOL)validateOperation;

@end
