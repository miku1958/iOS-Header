//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MailSupport/NSCopying-Protocol.h>

@class AWDMailError, NSString;

@interface AWDMailCannotGetMailErrorReport : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    NSString *_hostname;
    AWDMailError *_mailError;
    int _protocol;
    int _provider;
    NSString *_serverInfo;
    struct {
        unsigned int timestamp:1;
        unsigned int protocol:1;
        unsigned int provider:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasHostname;
@property (readonly, nonatomic) BOOL hasMailError;
@property (nonatomic) BOOL hasProtocol;
@property (nonatomic) BOOL hasProvider;
@property (readonly, nonatomic) BOOL hasServerInfo;
@property (nonatomic) BOOL hasTimestamp;
@property (strong, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property (strong, nonatomic) AWDMailError *mailError; // @synthesize mailError=_mailError;
@property (nonatomic) int protocol; // @synthesize protocol=_protocol;
@property (nonatomic) int provider; // @synthesize provider=_provider;
@property (strong, nonatomic) NSString *serverInfo; // @synthesize serverInfo=_serverInfo;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;
- (int)StringAsProtocol:(id)arg1;
- (int)StringAsProvider:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)protocolAsString:(int)arg1;
- (id)providerAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

