//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSURL, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WebBookmarkDeviceIdentifier : NSObject
{
    NSURL *_plistURL;
    NSUUID *_UUID;
    BOOL _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
    BOOL _readOnly;
}

@property (readonly, nonatomic) NSUUID *UUID;
@property (readonly, nonatomic) BOOL encounteredErrorWhileObtainingUUID;
@property (nonatomic, getter=isReadOnly) BOOL readOnly; // @synthesize readOnly=_readOnly;

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1;
+ (void)clearDeviceIdentifierWithPlistURL:(id)arg1;
- (void).cxx_destruct;
- (void)_cancelMonitoringMetaDataFile;
- (void)_createOrLoadMetaData;
- (void)_metaDataDidChange:(id)arg1;
- (void)_registerForMedadaDataFileChangeDistributedNotification;
- (void)_resumeMonitoringMetaDataFile;
- (void)dealloc;
- (id)description;
- (id)initWithPlistURL:(id)arg1 readOnly:(BOOL)arg2;
- (void)stopObservingChanges;

@end

