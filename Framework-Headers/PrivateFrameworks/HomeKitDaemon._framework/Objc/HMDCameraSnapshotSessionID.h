//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSessionID.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class NSNumber, NSString;

@interface HMDCameraSnapshotSessionID : HMDCameraSessionID <NSCopying>
{
    BOOL _snapshotRequestForBulletin;
    NSString *_snapshotCharacteristicEventUUID;
    unsigned long long _snapshotReason;
    NSNumber *_streamingTier;
}

@property (readonly) NSString *snapshotCharacteristicEventUUID; // @synthesize snapshotCharacteristicEventUUID=_snapshotCharacteristicEventUUID;
@property (readonly) unsigned long long snapshotReason; // @synthesize snapshotReason=_snapshotReason;
@property (readonly, getter=isSnapshotRequestForBulletin) BOOL snapshotRequestForBulletin; // @synthesize snapshotRequestForBulletin=_snapshotRequestForBulletin;
@property (readonly) NSNumber *streamingTier; // @synthesize streamingTier=_streamingTier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithAccessory:(id)arg1 message:(id)arg2;
- (id)initWithSessionID:(id)arg1 remoteDevice:(id)arg2 cameraSessionAppID:(id)arg3 descriptionString:(id)arg4 spiClient:(BOOL)arg5 snapshotReason:(unsigned long long)arg6 snapshotRequestForBulletin:(BOOL)arg7 snapshotCharacteristicEventUUID:(id)arg8 streamingTier:(id)arg9;

@end
