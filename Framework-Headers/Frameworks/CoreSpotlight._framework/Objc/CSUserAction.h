//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSpotlight/CSCoderEncoder-Protocol.h>
#import <CoreSpotlight/NSSecureCoding-Protocol.h>

@class NSDictionary, NSSet, NSString, NSUUID;
@protocol OS_xpc_object;

@interface CSUserAction : NSObject <CSCoderEncoder, NSSecureCoding>
{
    NSString *_itemIdentifier;
    NSString *_contentAction;
    NSDictionary *_userInfo;
    NSSet *_keywords;
    unsigned long long _eligibility;
    NSUUID *_uaIdentifier;
}

@property (copy) NSString *contentAction; // @synthesize contentAction=_contentAction;
@property unsigned long long eligibility; // @synthesize eligibility=_eligibility;
@property (copy) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (strong) NSSet *keywords; // @synthesize keywords=_keywords;
@property (strong, nonatomic) NSUUID *uaIdentifier; // @synthesize uaIdentifier=_uaIdentifier;
@property (strong) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (readonly, nonatomic) NSObject<OS_xpc_object> *xpc_dictionary;

+ (id)actionFromUserActivity:(id)arg1 searchableItem:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_propertiesDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCSCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDict:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
