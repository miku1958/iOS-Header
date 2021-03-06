//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCallInfoBlob : PBCodable <NSCopying>
{
    unsigned int _callID;
    unsigned int _clientVersion;
    NSString *_deviceType;
    NSString *_frameworkVersion;
    NSString *_osVersion;
}

@property (nonatomic) unsigned int callID; // @synthesize callID=_callID;
@property (nonatomic) unsigned int clientVersion; // @synthesize clientVersion=_clientVersion;
@property (strong, nonatomic) NSString *deviceType; // @synthesize deviceType=_deviceType;
@property (strong, nonatomic) NSString *frameworkVersion; // @synthesize frameworkVersion=_frameworkVersion;
@property (strong, nonatomic) NSString *osVersion; // @synthesize osVersion=_osVersion;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)stringForCheckpoint;
- (void)writeTo:(id)arg1;

@end

