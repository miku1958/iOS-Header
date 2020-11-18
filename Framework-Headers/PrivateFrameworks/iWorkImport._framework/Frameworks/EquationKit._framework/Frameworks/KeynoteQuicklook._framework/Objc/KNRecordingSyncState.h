//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeynoteQuicklook/NSCopying-Protocol.h>

@class NSUUID;

@interface KNRecordingSyncState : NSObject <NSCopying>
{
    NSUUID *_outOfSyncToken;
    BOOL _canClearOutOfSyncToken;
}

@property (readonly, nonatomic) NSUUID *outOfSyncToken; // @synthesize outOfSyncToken=_outOfSyncToken;
@property (readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithArchive:(const struct RecordingSyncState *)arg1 unarchiver:(id)arg2;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(BOOL)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2;
- (void)saveToArchive:(struct RecordingSyncState *)arg1 archiver:(id)arg2;

@end
