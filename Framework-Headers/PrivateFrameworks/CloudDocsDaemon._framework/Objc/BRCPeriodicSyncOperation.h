//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCContainerScheduler, CKServerChangeToken, NSString;

__attribute__((visibility("hidden")))
@interface BRCPeriodicSyncOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCContainerScheduler *_scheduler;
    CKServerChangeToken *_metadataChangeToken;
    CKServerChangeToken *_zoneHealthChangeToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) CKServerChangeToken *metadataChangeToken; // @synthesize metadataChangeToken=_metadataChangeToken;
@property (readonly, nonatomic) BRCContainerScheduler *scheduler; // @synthesize scheduler=_scheduler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CKServerChangeToken *zoneHealthChangeToken; // @synthesize zoneHealthChangeToken=_zoneHealthChangeToken;

- (void).cxx_destruct;
- (id)createActivity;
- (id)initWithContainerScheduler:(id)arg1 metadataChangeToken:(id)arg2 zoneHealthChangeToken:(id)arg3;
- (void)main;
- (BOOL)scheduleSyncDownIfNeededForZoneID:(id)arg1 zoneIfAny:(id)arg2;
- (BOOL)shouldRetryForError:(id)arg1;

@end

