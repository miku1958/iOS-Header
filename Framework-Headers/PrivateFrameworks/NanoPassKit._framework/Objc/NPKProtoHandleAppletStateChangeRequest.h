//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoHandleAppletStateChangeRequest : PBRequest <NSCopying>
{
    NSData *_passAppletState;
    NSString *_passID;
}

@property (readonly, nonatomic) BOOL hasPassAppletState;
@property (readonly, nonatomic) BOOL hasPassID;
@property (strong, nonatomic) NSData *passAppletState; // @synthesize passAppletState=_passAppletState;
@property (strong, nonatomic) NSString *passID; // @synthesize passID=_passID;

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

