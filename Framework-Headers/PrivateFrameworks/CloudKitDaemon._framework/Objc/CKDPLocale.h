//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CKDPLocale : PBCodable <NSCopying>
{
    NSString *_languageCode;
    NSString *_regionCode;
}

@property (readonly, nonatomic) BOOL hasLanguageCode;
@property (readonly, nonatomic) BOOL hasRegionCode;
@property (strong, nonatomic) NSString *languageCode; // @synthesize languageCode=_languageCode;
@property (strong, nonatomic) NSString *regionCode; // @synthesize regionCode=_regionCode;

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

