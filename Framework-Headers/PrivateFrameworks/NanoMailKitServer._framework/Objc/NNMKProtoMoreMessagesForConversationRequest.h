//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NNMKProtoMoreMessagesForConversationRequest : PBRequest <NSCopying>
{
    NSData *_beforeDateReceived;
    NSString *_conversationId;
    unsigned int _fullSyncVersion;
    CDStruct_a125a100 _has;
}

@property (strong, nonatomic) NSData *beforeDateReceived; // @synthesize beforeDateReceived=_beforeDateReceived;
@property (strong, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
@property (nonatomic) unsigned int fullSyncVersion; // @synthesize fullSyncVersion=_fullSyncVersion;
@property (readonly, nonatomic) BOOL hasBeforeDateReceived;
@property (readonly, nonatomic) BOOL hasConversationId;
@property (nonatomic) BOOL hasFullSyncVersion;

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
