//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FMF/NSCopying-Protocol.h>
#import <FMF/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSNumber, NSString;

@interface FMFHandle : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _isFamilyMember;
    BOOL _pending;
    BOOL _reachable;
    NSString *_identifier;
    NSString *_serverId;
    NSNumber *_dsid;
    NSArray *_aliasServerIds;
    NSArray *_invitationSentToIds;
    NSDictionary *_expiresByGroupId;
    NSString *_hashedDSID;
    NSNumber *_trackingTimestamp;
    NSNumber *_favoriteOrder;
    NSString *__prettyNameInternal;
    long long _idsStatus;
    NSString *_qualifiedIdentifier;
}

@property (copy, nonatomic) NSString *_prettyNameInternal; // @synthesize _prettyNameInternal=__prettyNameInternal;
@property (copy, nonatomic) NSArray *aliasServerIds; // @synthesize aliasServerIds=_aliasServerIds;
@property (copy, nonatomic) NSNumber *dsid; // @synthesize dsid=_dsid;
@property (copy, nonatomic) NSDictionary *expiresByGroupId; // @synthesize expiresByGroupId=_expiresByGroupId;
@property (copy, nonatomic) NSNumber *favoriteOrder; // @synthesize favoriteOrder=_favoriteOrder;
@property (copy, nonatomic) NSString *hashedDSID; // @synthesize hashedDSID=_hashedDSID;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long idsStatus; // @synthesize idsStatus=_idsStatus;
@property (copy, nonatomic) NSArray *invitationSentToIds; // @synthesize invitationSentToIds=_invitationSentToIds;
@property (nonatomic) BOOL isFamilyMember; // @synthesize isFamilyMember=_isFamilyMember;
@property (nonatomic, getter=isPending) BOOL pending; // @synthesize pending=_pending;
@property (copy, nonatomic) NSString *qualifiedIdentifier; // @synthesize qualifiedIdentifier=_qualifiedIdentifier;
@property (nonatomic) BOOL reachable; // @synthesize reachable=_reachable;
@property (copy, nonatomic) NSString *serverId; // @synthesize serverId=_serverId;
@property (copy, nonatomic) NSNumber *trackingTimestamp; // @synthesize trackingTimestamp=_trackingTimestamp;

+ (id)familyHandleWithId:(id)arg1 dsid:(id)arg2;
+ (id)handleWithId:(id)arg1;
+ (id)handleWithId:(id)arg1 serverId:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)abPreferencesDidChange;
- (void)addressBookDidChange;
- (void)clearFavoriteOrder;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isPhoneNumber;
- (BOOL)isSharingThroughGroupId:(id)arg1;
- (id)prettyName;
- (long long)prettyNameCompare:(id)arg1;
- (id)recordId;
- (void)setICloudId:(id)arg1;

@end

