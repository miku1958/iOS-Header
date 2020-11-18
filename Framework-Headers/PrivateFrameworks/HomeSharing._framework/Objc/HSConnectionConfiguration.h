//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeSharing/NSCopying-Protocol.h>
#import <HomeSharing/NSSecureCoding-Protocol.h>

@class ICUserIdentity, ICUserIdentityStore, NSNumber, NSString, NSURL;

@interface HSConnectionConfiguration : NSObject <NSSecureCoding, NSCopying>
{
    ICUserIdentity *_userIdentity;
    ICUserIdentityStore *_userIdentityStore;
    NSURL *_baseURL;
    NSString *_libraryBagKey;
    NSString *_buildIdentifier;
    NSString *_purchaseClientIdentifier;
    long long _requestReason;
    NSNumber *_familyMemberStoreID;
}

@property (copy, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (copy, nonatomic) NSString *buildIdentifier; // @synthesize buildIdentifier=_buildIdentifier;
@property (copy, nonatomic) NSNumber *familyMemberStoreID; // @synthesize familyMemberStoreID=_familyMemberStoreID;
@property (copy, nonatomic) NSString *libraryBagKey; // @synthesize libraryBagKey=_libraryBagKey;
@property (copy, nonatomic) NSString *purchaseClientIdentifier; // @synthesize purchaseClientIdentifier=_purchaseClientIdentifier;
@property (nonatomic) long long requestReason; // @synthesize requestReason=_requestReason;
@property (copy, nonatomic) ICUserIdentity *userIdentity; // @synthesize userIdentity=_userIdentity;
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // @synthesize userIdentityStore=_userIdentityStore;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

