//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICIAMApplicationMessage;

@interface ICIAMApplicationMessageSyncCommand : PBCodable <NSCopying>
{
    long long _commandSerialNumber;
    ICIAMApplicationMessage *_applicationMessage;
    int _commandType;
    struct {
        unsigned int commandSerialNumber:1;
        unsigned int commandType:1;
    } _has;
}

@property (strong, nonatomic) ICIAMApplicationMessage *applicationMessage; // @synthesize applicationMessage=_applicationMessage;
@property (nonatomic) long long commandSerialNumber; // @synthesize commandSerialNumber=_commandSerialNumber;
@property (nonatomic) int commandType; // @synthesize commandType=_commandType;
@property (readonly, nonatomic) BOOL hasApplicationMessage;
@property (nonatomic) BOOL hasCommandSerialNumber;
@property (nonatomic) BOOL hasCommandType;

- (void).cxx_destruct;
- (int)StringAsCommandType:(id)arg1;
- (id)commandTypeAsString:(int)arg1;
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

