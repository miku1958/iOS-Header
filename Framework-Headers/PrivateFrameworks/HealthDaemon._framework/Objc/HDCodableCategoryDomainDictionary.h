//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <HealthDaemon/HDSyncCodable-Protocol.h>
#import <HealthDaemon/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface HDCodableCategoryDomainDictionary : PBCodable <HDSyncCodable, NSCopying>
{
    long long _category;
    NSString *_domain;
    NSMutableArray *_keyValuePairs;
    struct {
        unsigned int category:1;
    } _has;
}

@property (nonatomic) long long category; // @synthesize category=_category;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property (nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDomain;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMutableArray *keyValuePairs; // @synthesize keyValuePairs=_keyValuePairs;
@property (readonly) Class superclass;

+ (Class)keyValuePairsType;
- (void).cxx_destruct;
- (BOOL)_validateForInsertionWithError:(id *)arg1;
- (void)addKeyValuePairs:(id)arg1;
- (void)clearKeyValuePairs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)decodedCategory;
- (id)dictionaryRepresentation;
- (id)initWithCategory:(long long)arg1 domain:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)keyValuePairsAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyValuePairsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

