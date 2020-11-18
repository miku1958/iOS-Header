//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <BusinessChatService/NSCopying-Protocol.h>

@class BCSChatSuggestMessage, NSString;

__attribute__((visibility("hidden")))
@interface BCSChatSuggestWrapper : PBCodable <NSCopying>
{
    BCSChatSuggestMessage *_message;
    NSString *_phone;
}

@property (readonly, nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) BOOL hasPhone;
@property (strong, nonatomic) BCSChatSuggestMessage *message; // @synthesize message=_message;
@property (strong, nonatomic) NSString *phone; // @synthesize phone=_phone;

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
