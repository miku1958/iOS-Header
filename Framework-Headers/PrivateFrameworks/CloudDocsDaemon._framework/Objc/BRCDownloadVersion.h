//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCDownload.h>

@class BRCClientZone, BRCProgress, CKRecord, CKRecordID, GSPermanentStorage, NSError, NSNumber;

__attribute__((visibility("hidden")))
@interface BRCDownloadVersion : BRCDownload
{
    CKRecordID *_secondaryRecordID;
    CKRecord *_secondaryRecord;
    BRCClientZone *_clientZone;
    BOOL _sharedZone;
    BOOL _isLoser;
    GSPermanentStorage *_storage;
    NSError *_gsError;
    NSNumber *_docID;
}

@property (readonly, nonatomic) NSNumber *docID; // @synthesize docID=_docID;
@property (readonly, nonatomic) NSError *gsError; // @synthesize gsError=_gsError;
@property (readonly, nonatomic) BOOL isLoser; // @synthesize isLoser=_isLoser;
@property (strong, nonatomic) BRCProgress *progress;
@property (readonly, nonatomic) GSPermanentStorage *storage; // @synthesize storage=_storage;

- (void).cxx_destruct;
- (id)_stageContentWithSession:(id)arg1 error:(id *)arg2;
- (id)_stageWithSession:(id)arg1 creationInfo:(id *)arg2 error:(id *)arg3;
- (id)description;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 etag:(id)arg3 isLoser:(BOOL)arg4;
- (int)kind;
- (id)secondaryRecord;
- (id)secondaryRecordID;
- (void)setSecondaryRecord:(id)arg1;

@end

