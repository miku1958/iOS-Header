//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AdCore/NSCopying-Protocol.h>

@interface ADAnalyticsEvent : PBCodable <NSCopying>
{
    double _timestamp;
    int _event;
}

@property (nonatomic) int event; // @synthesize event=_event;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

+ (id)options;
- (int)StringAsEvent:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

