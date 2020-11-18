//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreDuet/NSCopying-Protocol.h>

@class NSString;

@interface _DKPRSource : PBCodable <NSCopying>
{
    NSString *_bundleID;
    NSString *_deviceID;
    NSString *_groupID;
    NSString *_itemID;
    NSString *_sourceID;
    int _userID;
    struct {
        unsigned int userID:1;
    } _has;
}

@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSString *deviceID; // @synthesize deviceID=_deviceID;
@property (strong, nonatomic) NSString *groupID; // @synthesize groupID=_groupID;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDeviceID;
@property (readonly, nonatomic) BOOL hasGroupID;
@property (readonly, nonatomic) BOOL hasItemID;
@property (readonly, nonatomic) BOOL hasSourceID;
@property (nonatomic) BOOL hasUserID;
@property (strong, nonatomic) NSString *itemID; // @synthesize itemID=_itemID;
@property (strong, nonatomic) NSString *sourceID; // @synthesize sourceID=_sourceID;
@property (nonatomic) int userID; // @synthesize userID=_userID;

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

