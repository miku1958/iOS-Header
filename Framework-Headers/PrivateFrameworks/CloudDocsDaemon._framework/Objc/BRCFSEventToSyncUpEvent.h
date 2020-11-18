//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/BRCEventMetric.h>

@class BRCItemID;

__attribute__((visibility("hidden")))
@interface BRCFSEventToSyncUpEvent : BRCEventMetric
{
    BOOL _isPackage;
    unsigned int _genID;
    unsigned long long _fileID;
    BRCItemID *_itemID;
    unsigned long long _mtime;
    unsigned long long _contentSize;
    unsigned long long _syncUpBatchSize;
}

@property (nonatomic) unsigned long long contentSize; // @synthesize contentSize=_contentSize;
@property (nonatomic) unsigned long long fileID; // @synthesize fileID=_fileID;
@property (nonatomic) unsigned int genID; // @synthesize genID=_genID;
@property (nonatomic) BOOL isPackage; // @synthesize isPackage=_isPackage;
@property (strong, nonatomic) BRCItemID *itemID; // @synthesize itemID=_itemID;
@property (nonatomic) unsigned long long mtime; // @synthesize mtime=_mtime;
@property (nonatomic) unsigned long long syncUpBatchSize; // @synthesize syncUpBatchSize=_syncUpBatchSize;

- (void).cxx_destruct;
- (id)additionalPayload;
- (id)subDescription;

@end
