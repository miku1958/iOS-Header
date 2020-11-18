//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSString;

@interface NNMKProtoComposedMessageSendingProgressReport : PBCodable <NSCopying>
{
    NSString *_composedMessageId;
    int _progress;
    struct {
        unsigned int progress:1;
    } _has;
}

@property (strong, nonatomic) NSString *composedMessageId; // @synthesize composedMessageId=_composedMessageId;
@property (readonly, nonatomic) BOOL hasComposedMessageId;
@property (nonatomic) BOOL hasProgress;
@property (nonatomic) int progress; // @synthesize progress=_progress;

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

