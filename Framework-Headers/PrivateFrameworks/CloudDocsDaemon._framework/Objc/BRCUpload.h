//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/BRCTransfer-Protocol.h>

@class BRCClientZone, BRCItemID, BRCProgress, CKRecord, CKRecordID, NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface BRCUpload : NSObject <BRCTransfer>
{
    BRCClientZone *_clientZone;
    long long _throttleID;
    unsigned long long _totalSize;
    NSString *_stageID;
    BOOL _progressPublished;
    BRCItemID *_itemID;
    CKRecord *_record;
    unsigned long long _doneSize;
    BRCProgress *_progress;
}

@property (nonatomic) unsigned long long doneSize; // @synthesize doneSize=_doneSize;
@property (readonly, nonatomic) NSString *etag;
@property (readonly, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property (readonly, nonatomic) BRCProgress *progress; // @synthesize progress=_progress;
@property (nonatomic) BOOL progressPublished; // @synthesize progressPublished=_progressPublished;
@property (strong, nonatomic) CKRecord *record; // @synthesize record=_record;
@property (readonly, nonatomic) CKRecordID *recordID;
@property (strong, nonatomic) CKRecord *secondaryRecord;
@property (readonly, nonatomic) CKRecordID *secondaryRecordID;
@property (readonly, nonatomic) NSString *stageID; // @synthesize stageID=_stageID;
@property (readonly, nonatomic) long long throttleID; // @synthesize throttleID=_throttleID;
@property (readonly, nonatomic) unsigned long long totalSize; // @synthesize totalSize=_totalSize;
@property (readonly, nonatomic) NSNumber *transferID;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)initWithDocument:(id)arg1 stageID:(id)arg2 transferSize:(unsigned long long)arg3;

@end
