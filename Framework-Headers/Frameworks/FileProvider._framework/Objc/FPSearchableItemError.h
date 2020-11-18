//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <FileProvider/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface FPSearchableItemError : PBCodable <NSCopying>
{
    long long _code;
    NSString *_customDomain;
    int _domain;
}

@property (nonatomic) long long code; // @synthesize code=_code;
@property (strong, nonatomic) NSString *customDomain; // @synthesize customDomain=_customDomain;
@property (nonatomic) int domain; // @synthesize domain=_domain;
@property (readonly, nonatomic) BOOL hasCustomDomain;

+ (id)errorFromString:(id)arg1;
+ (id)stringFromError:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsDomain:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)domainAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
