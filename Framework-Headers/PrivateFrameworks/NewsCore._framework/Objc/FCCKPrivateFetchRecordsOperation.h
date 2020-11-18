//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray, NSDictionary;

@interface FCCKPrivateFetchRecordsOperation : FCCKPrivateDatabaseOperation
{
    NSArray *_recordIDs;
    NSArray *_desiredKeys;
    CDUnknownBlockType _fetchRecordsCompletionBlock;
    NSDictionary *_resultRecordsByRecordID;
}

@property (copy, nonatomic) NSArray *desiredKeys; // @synthesize desiredKeys=_desiredKeys;
@property (copy, nonatomic) CDUnknownBlockType fetchRecordsCompletionBlock; // @synthesize fetchRecordsCompletionBlock=_fetchRecordsCompletionBlock;
@property (copy, nonatomic) NSArray *recordIDs; // @synthesize recordIDs=_recordIDs;
@property (strong, nonatomic) NSDictionary *resultRecordsByRecordID; // @synthesize resultRecordsByRecordID=_resultRecordsByRecordID;

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end
