//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Message/NSCopying-Protocol.h>

@class AWDMailMessageBody, NSString;

@interface AWDMailMessage : PBCodable <NSCopying>
{
    AWDMailMessageBody *_body;
    NSString *_messageId;
}

@property (strong, nonatomic) AWDMailMessageBody *body; // @synthesize body=_body;
@property (readonly, nonatomic) BOOL hasBody;
@property (readonly, nonatomic) BOOL hasMessageId;
@property (strong, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)initWithMailMessage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
