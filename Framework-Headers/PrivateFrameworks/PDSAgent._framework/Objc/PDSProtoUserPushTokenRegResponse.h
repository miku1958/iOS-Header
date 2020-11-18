//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PDSAgent/NSCopying-Protocol.h>

@class NSString, PDSProtoUserPushToken;

@interface PDSProtoUserPushTokenRegResponse : PBCodable <NSCopying>
{
    NSString *_message;
    int _status;
    PDSProtoUserPushToken *_userPushToken;
}

@property (readonly, nonatomic) BOOL hasMessage;
@property (strong, nonatomic) NSString *message; // @synthesize message=_message;
@property (nonatomic) int status; // @synthesize status=_status;
@property (strong, nonatomic) PDSProtoUserPushToken *userPushToken; // @synthesize userPushToken=_userPushToken;

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
