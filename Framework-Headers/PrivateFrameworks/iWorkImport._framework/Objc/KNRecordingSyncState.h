//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSUUID;

__attribute__((visibility("hidden")))
@interface KNRecordingSyncState : NSObject <NSCopying>
{
    NSUUID *_outOfSyncToken;
    BOOL _canClearOutOfSyncToken;
}

@property (readonly, nonatomic) NSUUID *outOfSyncToken; // @synthesize outOfSyncToken=_outOfSyncToken;
@property (readonly, nonatomic, getter=isRecordingOutOfSync) BOOL recordingOutOfSync;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (id)initWithArchive:(const struct RecordingSyncState *)arg1 unarchiver:(id)arg2;
- (id)initWithOutOfSyncToken:(id)arg1 canClearOutOfSyncToken:(BOOL)arg2;
- (BOOL)isRecordingLocallyOutOfSyncUsingLocalOutOfSyncToken:(id)arg1;
- (id)recordingSyncStateByMarkingRecordingAsOutOfSync:(BOOL)arg1 withLocalOutOfSyncToken:(id)arg2;
- (void)saveToArchive:(struct RecordingSyncState *)arg1 archiver:(id)arg2;

@end

