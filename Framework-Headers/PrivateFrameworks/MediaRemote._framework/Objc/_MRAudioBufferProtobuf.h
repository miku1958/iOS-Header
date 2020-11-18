//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSData, NSMutableArray, _MRAudioFormatSettingsProtobuf;

@interface _MRAudioBufferProtobuf : PBCodable <NSCopying>
{
    long long _maximumPacketSize;
    long long _packetCapacity;
    long long _packetCount;
    NSData *_contents;
    _MRAudioFormatSettingsProtobuf *_formatSettings;
    NSMutableArray *_packetDescriptions;
    struct {
        unsigned int maximumPacketSize:1;
        unsigned int packetCapacity:1;
        unsigned int packetCount:1;
    } _has;
}

@property (strong, nonatomic) NSData *contents; // @synthesize contents=_contents;
@property (strong, nonatomic) _MRAudioFormatSettingsProtobuf *formatSettings; // @synthesize formatSettings=_formatSettings;
@property (readonly, nonatomic) BOOL hasContents;
@property (readonly, nonatomic) BOOL hasFormatSettings;
@property (nonatomic) BOOL hasMaximumPacketSize;
@property (nonatomic) BOOL hasPacketCapacity;
@property (nonatomic) BOOL hasPacketCount;
@property (nonatomic) long long maximumPacketSize; // @synthesize maximumPacketSize=_maximumPacketSize;
@property (nonatomic) long long packetCapacity; // @synthesize packetCapacity=_packetCapacity;
@property (nonatomic) long long packetCount; // @synthesize packetCount=_packetCount;
@property (strong, nonatomic) NSMutableArray *packetDescriptions; // @synthesize packetDescriptions=_packetDescriptions;

- (void)addPacketDescriptions:(id)arg1;
- (void)clearPacketDescriptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)packetDescriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)packetDescriptionsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

