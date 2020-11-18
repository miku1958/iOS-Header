//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface ADKeyedParameterList : PBCodable <NSCopying>
{
    NSString *_key;
    NSMutableArray *_parameterLists;
}

@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NSMutableArray *parameterLists; // @synthesize parameterLists=_parameterLists;

+ (id)options;
+ (Class)parameterListType;
- (void).cxx_destruct;
- (void)addParameterList:(id)arg1;
- (void)clearParameterLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameterListAtIndex:(unsigned long long)arg1;
- (unsigned long long)parameterListsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

