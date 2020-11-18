//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@class AWDHomeKitCameraStreamIDSConnSetupParameters;

@interface AWDHomeKitCameraStreamIDSConnSetup : PBCodable <NSCopying>
{
    AWDHomeKitCameraStreamIDSConnSetupParameters *_audioConnection;
    AWDHomeKitCameraStreamIDSConnSetupParameters *_keepaliveConnection;
    AWDHomeKitCameraStreamIDSConnSetupParameters *_videoConnection;
}

@property (strong, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *audioConnection; // @synthesize audioConnection=_audioConnection;
@property (readonly, nonatomic) BOOL hasAudioConnection;
@property (readonly, nonatomic) BOOL hasKeepaliveConnection;
@property (readonly, nonatomic) BOOL hasVideoConnection;
@property (strong, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *keepaliveConnection; // @synthesize keepaliveConnection=_keepaliveConnection;
@property (strong, nonatomic) AWDHomeKitCameraStreamIDSConnSetupParameters *videoConnection; // @synthesize videoConnection=_videoConnection;

- (void).cxx_destruct;
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
