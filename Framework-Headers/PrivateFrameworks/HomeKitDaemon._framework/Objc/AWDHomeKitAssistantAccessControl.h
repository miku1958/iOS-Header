//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface AWDHomeKitAssistantAccessControl : PBCodable <NSCopying>
{
    unsigned long long _numCapableAccessories;
    unsigned long long _numEnabledAccessories;
    unsigned long long _options;
    unsigned long long _timestamp;
    BOOL _isEnabled;
    struct {
        unsigned int numCapableAccessories:1;
        unsigned int numEnabledAccessories:1;
        unsigned int options:1;
        unsigned int timestamp:1;
        unsigned int isEnabled:1;
    } _has;
}

@property (nonatomic) BOOL hasIsEnabled;
@property (nonatomic) BOOL hasNumCapableAccessories;
@property (nonatomic) BOOL hasNumEnabledAccessories;
@property (nonatomic) BOOL hasOptions;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL isEnabled; // @synthesize isEnabled=_isEnabled;
@property (nonatomic) unsigned long long numCapableAccessories; // @synthesize numCapableAccessories=_numCapableAccessories;
@property (nonatomic) unsigned long long numEnabledAccessories; // @synthesize numEnabledAccessories=_numEnabledAccessories;
@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

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

