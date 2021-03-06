//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class NSString;

@interface ASCodableShareLocations : PBCodable <NSCopying>
{
    NSString *_activityShareURL;
    NSString *_relationshipShareURL;
}

@property (strong, nonatomic) NSString *activityShareURL; // @synthesize activityShareURL=_activityShareURL;
@property (readonly, nonatomic) BOOL hasActivityShareURL;
@property (readonly, nonatomic) BOOL hasRelationshipShareURL;
@property (strong, nonatomic) NSString *relationshipShareURL; // @synthesize relationshipShareURL=_relationshipShareURL;

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

