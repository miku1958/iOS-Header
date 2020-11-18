//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@class NSString;

@interface _MRPlaybackSessionRequestProtobuf : PBCodable <NSCopying>
{
    NSString *_identifier;
    int _length;
    int _location;
    NSString *_requestID;
    NSString *_type;
    struct {
        unsigned int length:1;
        unsigned int location:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasLength;
@property (nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasRequestID;
@property (readonly, nonatomic) BOOL hasType;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) int length; // @synthesize length=_length;
@property (nonatomic) int location; // @synthesize location=_location;
@property (strong, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;

+ (void)initialize;
- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)customDescription;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
