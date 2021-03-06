//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface NTPBAnalyticsEnvelopeContentTypeConfig : PBCodable <NSCopying>
{
    unsigned long long _groupingTag;
    unsigned long long _seedTime;
    NSString *_contentHeaderName;
    NSString *_contentHeaderValue;
    NSString *_endpointURLString;
    unsigned int _samplingCeiling;
    unsigned int _samplingFloor;
    struct {
        unsigned int groupingTag:1;
        unsigned int seedTime:1;
        unsigned int samplingCeiling:1;
        unsigned int samplingFloor:1;
    } _has;
}

@property (strong, nonatomic) NSString *contentHeaderName; // @synthesize contentHeaderName=_contentHeaderName;
@property (strong, nonatomic) NSString *contentHeaderValue; // @synthesize contentHeaderValue=_contentHeaderValue;
@property (strong, nonatomic) NSString *endpointURLString; // @synthesize endpointURLString=_endpointURLString;
@property (nonatomic) unsigned long long groupingTag; // @synthesize groupingTag=_groupingTag;
@property (readonly, nonatomic) BOOL hasContentHeaderName;
@property (readonly, nonatomic) BOOL hasContentHeaderValue;
@property (readonly, nonatomic) BOOL hasEndpointURLString;
@property (nonatomic) BOOL hasGroupingTag;
@property (nonatomic) BOOL hasSamplingCeiling;
@property (nonatomic) BOOL hasSamplingFloor;
@property (nonatomic) BOOL hasSeedTime;
@property (nonatomic) unsigned int samplingCeiling; // @synthesize samplingCeiling=_samplingCeiling;
@property (nonatomic) unsigned int samplingFloor; // @synthesize samplingFloor=_samplingFloor;
@property (nonatomic) unsigned long long seedTime; // @synthesize seedTime=_seedTime;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

