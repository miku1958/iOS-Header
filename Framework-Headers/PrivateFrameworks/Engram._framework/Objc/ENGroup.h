//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Engram/NSSecureCoding-Protocol.h>

@class ENGroupID, NSArray, NSData, NSSet, _ENGroupInfo;
@protocol ENCypher;

@interface ENGroup : NSObject <NSSecureCoding>
{
    ENGroupID *_groupID;
    id<ENCypher> _cypher;
    _ENGroupInfo *_groupInfo;
}

@property (strong, nonatomic) id<ENCypher> cypher; // @synthesize cypher=_cypher;
@property (readonly, nonatomic) NSSet *destinations;
@property (readonly, nonatomic) ENGroupID *groupID; // @synthesize groupID=_groupID;
@property (strong, nonatomic) _ENGroupInfo *groupInfo; // @synthesize groupInfo=_groupInfo;
@property (readonly, nonatomic) NSArray *participants;
@property (readonly, nonatomic) NSData *sharedApplicationData;

+ (id)sortedGroupsFromGroups:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)accountIdentity;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupInfo:(id)arg1 groupID:(id)arg2 cypher:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)signAndConcealData:(id)arg1 cypherIdentifier:(id *)arg2 error:(id *)arg3;
- (id)verifyAndRevealData:(id)arg1 sendingDevice:(id)arg2 cypherIdentifier:(id)arg3 error:(id *)arg4;

@end
