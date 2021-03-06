//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSData, NSString;

@interface NPKProtoRemoteAdminPerformRequest : PBRequest <NSCopying>
{
    NSString *_command;
    NSData *_infoDictionary;
    NSString *_seid;
    NSData *_url;
}

@property (strong, nonatomic) NSString *command; // @synthesize command=_command;
@property (readonly, nonatomic) BOOL hasInfoDictionary;
@property (strong, nonatomic) NSData *infoDictionary; // @synthesize infoDictionary=_infoDictionary;
@property (strong, nonatomic) NSString *seid; // @synthesize seid=_seid;
@property (strong, nonatomic) NSData *url; // @synthesize url=_url;

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

