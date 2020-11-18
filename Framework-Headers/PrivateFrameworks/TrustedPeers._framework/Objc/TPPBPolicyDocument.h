//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <TrustedPeers/NSCopying-Protocol.h>

@class NSMutableArray;

@interface TPPBPolicyDocument : PBCodable <NSCopying>
{
    unsigned long long _policyVersion;
    NSMutableArray *_categoriesByViews;
    NSMutableArray *_introducersByCategorys;
    NSMutableArray *_keyViewMappings;
    NSMutableArray *_modelToCategorys;
    NSMutableArray *_redactions;
    CDStruct_0e29c504 _has;
}

@property (strong, nonatomic) NSMutableArray *categoriesByViews; // @synthesize categoriesByViews=_categoriesByViews;
@property (nonatomic) BOOL hasPolicyVersion;
@property (strong, nonatomic) NSMutableArray *introducersByCategorys; // @synthesize introducersByCategorys=_introducersByCategorys;
@property (strong, nonatomic) NSMutableArray *keyViewMappings; // @synthesize keyViewMappings=_keyViewMappings;
@property (strong, nonatomic) NSMutableArray *modelToCategorys; // @synthesize modelToCategorys=_modelToCategorys;
@property (nonatomic) unsigned long long policyVersion; // @synthesize policyVersion=_policyVersion;
@property (strong, nonatomic) NSMutableArray *redactions; // @synthesize redactions=_redactions;

+ (Class)categoriesByViewType;
+ (Class)introducersByCategoryType;
+ (Class)keyViewMappingType;
+ (Class)modelToCategoryType;
+ (Class)redactionsType;
- (void).cxx_destruct;
- (void)addCategoriesByView:(id)arg1;
- (void)addIntroducersByCategory:(id)arg1;
- (void)addKeyViewMapping:(id)arg1;
- (void)addModelToCategory:(id)arg1;
- (void)addRedactions:(id)arg1;
- (id)categoriesByViewAtIndex:(unsigned long long)arg1;
- (unsigned long long)categoriesByViewsCount;
- (void)clearCategoriesByViews;
- (void)clearIntroducersByCategorys;
- (void)clearKeyViewMappings;
- (void)clearModelToCategorys;
- (void)clearRedactions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)introducersByCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)introducersByCategorysCount;
- (BOOL)isEqual:(id)arg1;
- (id)keyViewMappingAtIndex:(unsigned long long)arg1;
- (unsigned long long)keyViewMappingsCount;
- (void)mergeFrom:(id)arg1;
- (id)modelToCategoryAtIndex:(unsigned long long)arg1;
- (unsigned long long)modelToCategorysCount;
- (BOOL)readFrom:(id)arg1;
- (id)redactionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)redactionsCount;
- (void)writeTo:(id)arg1;

@end
