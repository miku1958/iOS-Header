//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPhotoWithMetadata, NSData, NSString;

@interface GEORPInstructionCorrection : PBCodable <NSCopying>
{
    NSString *_comments;
    GEORPPhotoWithMetadata *_photo;
    unsigned int _routeStepIndex;
    NSData *_routeStepScreenshotImageData;
    unsigned int _routeStepSubstepIndex;
    struct {
        unsigned int routeStepIndex:1;
        unsigned int routeStepSubstepIndex:1;
    } _has;
}

@property (strong, nonatomic) NSString *comments; // @synthesize comments=_comments;
@property (readonly, nonatomic) BOOL hasComments;
@property (readonly, nonatomic) BOOL hasPhoto;
@property (nonatomic) BOOL hasRouteStepIndex;
@property (readonly, nonatomic) BOOL hasRouteStepScreenshotImageData;
@property (nonatomic) BOOL hasRouteStepSubstepIndex;
@property (strong, nonatomic) GEORPPhotoWithMetadata *photo; // @synthesize photo=_photo;
@property (nonatomic) unsigned int routeStepIndex; // @synthesize routeStepIndex=_routeStepIndex;
@property (strong, nonatomic) NSData *routeStepScreenshotImageData; // @synthesize routeStepScreenshotImageData=_routeStepScreenshotImageData;
@property (nonatomic) unsigned int routeStepSubstepIndex; // @synthesize routeStepSubstepIndex=_routeStepSubstepIndex;

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

