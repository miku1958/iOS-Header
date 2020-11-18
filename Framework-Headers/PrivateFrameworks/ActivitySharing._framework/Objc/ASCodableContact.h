//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <ActivitySharing/NSCopying-Protocol.h>

@class ASCodableRelationshipContainer, NSMutableArray, NSString;

@interface ASCodableContact : PBCodable <NSCopying>
{
    NSMutableArray *_destinations;
    NSString *_fullName;
    NSString *_linkedContactStoreIdentifier;
    ASCodableRelationshipContainer *_relationshipContainer;
    ASCodableRelationshipContainer *_remoteRelationshipContainer;
    NSString *_shortName;
}

@property (strong, nonatomic) NSMutableArray *destinations; // @synthesize destinations=_destinations;
@property (strong, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (readonly, nonatomic) BOOL hasFullName;
@property (readonly, nonatomic) BOOL hasLinkedContactStoreIdentifier;
@property (readonly, nonatomic) BOOL hasRelationshipContainer;
@property (readonly, nonatomic) BOOL hasRemoteRelationshipContainer;
@property (readonly, nonatomic) BOOL hasShortName;
@property (strong, nonatomic) NSString *linkedContactStoreIdentifier; // @synthesize linkedContactStoreIdentifier=_linkedContactStoreIdentifier;
@property (strong, nonatomic) ASCodableRelationshipContainer *relationshipContainer; // @synthesize relationshipContainer=_relationshipContainer;
@property (strong, nonatomic) ASCodableRelationshipContainer *remoteRelationshipContainer; // @synthesize remoteRelationshipContainer=_remoteRelationshipContainer;
@property (strong, nonatomic) NSString *shortName; // @synthesize shortName=_shortName;

+ (Class)destinationsType;
- (void).cxx_destruct;
- (void)addDestinations:(id)arg1;
- (void)clearDestinations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)destinationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)destinationsCount;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
