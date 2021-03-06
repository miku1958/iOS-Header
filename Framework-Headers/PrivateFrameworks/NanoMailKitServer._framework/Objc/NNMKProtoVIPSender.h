//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoMailKitServer/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NNMKProtoVIPSender : PBCodable <NSCopying>
{
    NSString *_displayName;
    NSMutableArray *_emailAddresses;
    NSString *_name;
}

@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSMutableArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (readonly, nonatomic) BOOL hasName;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;

+ (Class)emailAddressesType;
+ (id)protoVIP:(id)arg1;
- (void).cxx_destruct;
- (void)addEmailAddresses:(id)arg1;
- (void)clearEmailAddresses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)emailAddressesAtIndex:(unsigned long long)arg1;
- (unsigned long long)emailAddressesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)vipSender;
- (void)writeTo:(id)arg1;

@end

