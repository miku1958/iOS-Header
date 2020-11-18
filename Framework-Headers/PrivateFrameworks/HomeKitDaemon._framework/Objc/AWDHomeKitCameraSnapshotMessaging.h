//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitCameraSnapshotMessaging : PBCodable <NSCopying>
{
    unsigned long long _receivedSnapshotRequest;
    unsigned long long _sentSnapshotRequest;
    unsigned long long _sentSnapshotResponse;
    struct {
        unsigned int receivedSnapshotRequest:1;
        unsigned int sentSnapshotRequest:1;
        unsigned int sentSnapshotResponse:1;
    } _has;
}

@property (nonatomic) BOOL hasReceivedSnapshotRequest;
@property (nonatomic) BOOL hasSentSnapshotRequest;
@property (nonatomic) BOOL hasSentSnapshotResponse;
@property (nonatomic) unsigned long long receivedSnapshotRequest; // @synthesize receivedSnapshotRequest=_receivedSnapshotRequest;
@property (nonatomic) unsigned long long sentSnapshotRequest; // @synthesize sentSnapshotRequest=_sentSnapshotRequest;
@property (nonatomic) unsigned long long sentSnapshotResponse; // @synthesize sentSnapshotResponse=_sentSnapshotResponse;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

