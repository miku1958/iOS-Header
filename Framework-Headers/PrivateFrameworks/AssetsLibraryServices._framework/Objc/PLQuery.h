//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AssetsLibraryServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PLQuery : PBCodable <NSCopying>
{
    int _conjunction;
    PLQuery *_first;
    PLQuery *_second;
    NSMutableArray *_singleQueries;
    struct {
        unsigned int conjunction:1;
    } _has;
}

@property (nonatomic) int conjunction; // @synthesize conjunction=_conjunction;
@property (strong, nonatomic) PLQuery *first; // @synthesize first=_first;
@property (nonatomic) BOOL hasConjunction;
@property (readonly, nonatomic) BOOL hasFirst;
@property (readonly, nonatomic) BOOL hasSecond;
@property (strong, nonatomic) PLQuery *second; // @synthesize second=_second;
@property (strong, nonatomic) NSMutableArray *singleQueries; // @synthesize singleQueries=_singleQueries;

+ (Class)singleQueriesType;
- (void).cxx_destruct;
- (void)addSingleQueries:(id)arg1;
- (void)clearSingleQueries;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)logDescription;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)singleQueriesAtIndex:(unsigned long long)arg1;
- (unsigned long long)singleQueriesCount;
- (void)writeTo:(id)arg1;

@end

