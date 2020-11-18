//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCCKPrivateDatabaseOperation.h>

@class NSArray;

@interface FCCKPrivateDeleteRecordsOperation : FCCKPrivateDatabaseOperation
{
    NSArray *_recordIDsToDelete;
    CDUnknownBlockType _deleteRecordsCompletionBlock;
    NSArray *_resultSavedRecords;
    NSArray *_resultDeletedRecordIDs;
}

@property (copy, nonatomic) CDUnknownBlockType deleteRecordsCompletionBlock; // @synthesize deleteRecordsCompletionBlock=_deleteRecordsCompletionBlock;
@property (copy, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property (strong, nonatomic) NSArray *resultDeletedRecordIDs; // @synthesize resultDeletedRecordIDs=_resultDeletedRecordIDs;
@property (strong, nonatomic) NSArray *resultSavedRecords; // @synthesize resultSavedRecords=_resultSavedRecords;

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (BOOL)validateOperation;

@end
