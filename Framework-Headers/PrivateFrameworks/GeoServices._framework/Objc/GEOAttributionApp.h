//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface GEOAttributionApp : PBCodable <NSCopying>
{
    NSString *_appBundleIdentifier;
    NSMutableArray *_handledSchemes;
}

@property (strong, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (strong, nonatomic) NSMutableArray *handledSchemes; // @synthesize handledSchemes=_handledSchemes;

- (void)addHandledSchemes:(id)arg1;
- (void)clearHandledSchemes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)handledSchemesAtIndex:(unsigned long long)arg1;
- (unsigned long long)handledSchemesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
