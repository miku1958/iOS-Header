//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLEngineStorage.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, CPLRejectedRecords, NSMutableArray, NSString;

@interface CPLEngineQuarantinedRecords : CPLEngineStorage <CPLAbstractObject>
{
    CPLRejectedRecords *_rejectedRecords;
    unsigned long long _rejectedCount;
    BOOL _rejectedRecordsHasChanges;
    CPLRejectedRecords *_newRejectedRecords;
    NSMutableArray *_quarantineMessages;
    unsigned long long _newRejectedCount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CPLPlatformObject *platformObject;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_sendQuarantineFeedbackWithRecordClass:(Class)arg1 reason:(id)arg2;
- (BOOL)addQuarantinedRecordsWithIdentifier:(id)arg1 reason:(id)arg2 error:(id *)arg3;
- (BOOL)bumpRejectedRecords:(id)arg1 error:(id *)arg2;
- (unsigned long long)countOfQuarantinedRecords;
- (BOOL)isRecordWithIdentifierQuarantined:(id)arg1;
- (BOOL)removeQuarantinedRecordsWithIdentifier:(id)arg1 notify:(BOOL)arg2 error:(id *)arg3;
- (BOOL)resetRejectedRecordsWithError:(id *)arg1;
- (BOOL)resetWithError:(id *)arg1;
- (void)writeTransactionDidFail;
- (void)writeTransactionDidSucceed;

@end
