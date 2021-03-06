//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface CKDPRecordResolveTokenRequest : PBRequest <NSCopying>
{
    NSMutableArray *_rootRecordDesiredKeys;
    NSString *_routingKey;
    NSData *_shortTokenHash;
    BOOL _forceFetch;
    BOOL _shouldFetchRootRecord;
    struct {
        unsigned int forceFetch:1;
        unsigned int shouldFetchRootRecord:1;
    } _has;
}

@property (nonatomic) BOOL forceFetch; // @synthesize forceFetch=_forceFetch;
@property (nonatomic) BOOL hasForceFetch;
@property (readonly, nonatomic) BOOL hasRoutingKey;
@property (readonly, nonatomic) BOOL hasShortTokenHash;
@property (nonatomic) BOOL hasShouldFetchRootRecord;
@property (strong, nonatomic) NSMutableArray *rootRecordDesiredKeys; // @synthesize rootRecordDesiredKeys=_rootRecordDesiredKeys;
@property (strong, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property (strong, nonatomic) NSData *shortTokenHash; // @synthesize shortTokenHash=_shortTokenHash;
@property (nonatomic) BOOL shouldFetchRootRecord; // @synthesize shouldFetchRootRecord=_shouldFetchRootRecord;

+ (id)options;
+ (Class)rootRecordDesiredKeysType;
- (void).cxx_destruct;
- (void)addRootRecordDesiredKeys:(id)arg1;
- (void)clearRootRecordDesiredKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (id)rootRecordDesiredKeysAtIndex:(unsigned long long)arg1;
- (unsigned long long)rootRecordDesiredKeysCount;
- (void)writeTo:(id)arg1;

@end

