//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoSetPreferredPaymentApplicationRequest : PBRequest <NSCopying>
{
    NSString *_passID;
    NSString *_preferredApplicationAID;
}

@property (readonly, nonatomic) BOOL hasPassID;
@property (readonly, nonatomic) BOOL hasPreferredApplicationAID;
@property (strong, nonatomic) NSString *passID; // @synthesize passID=_passID;
@property (strong, nonatomic) NSString *preferredApplicationAID; // @synthesize preferredApplicationAID=_preferredApplicationAID;

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

