//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@class NSString;

@interface ADSegmentUpdateResponse : PBCodable <NSCopying>
{
    double _maxSegmentUpdateIntervalInSeconds;
    double _segmentRefreshIntervalInSeconds;
    NSString *_idDebug;
    struct {
        unsigned int maxSegmentUpdateIntervalInSeconds:1;
        unsigned int segmentRefreshIntervalInSeconds:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasIdDebug;
@property (nonatomic) BOOL hasMaxSegmentUpdateIntervalInSeconds;
@property (nonatomic) BOOL hasSegmentRefreshIntervalInSeconds;
@property (strong, nonatomic) NSString *idDebug; // @synthesize idDebug=_idDebug;
@property (nonatomic) double maxSegmentUpdateIntervalInSeconds; // @synthesize maxSegmentUpdateIntervalInSeconds=_maxSegmentUpdateIntervalInSeconds;
@property (nonatomic) double segmentRefreshIntervalInSeconds; // @synthesize segmentRefreshIntervalInSeconds=_segmentRefreshIntervalInSeconds;

+ (id)options;
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
