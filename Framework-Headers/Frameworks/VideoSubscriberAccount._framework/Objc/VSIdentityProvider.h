//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface VSIdentityProvider : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _prohibitedByStore;
    BOOL _developer;
    NSString *_uniqueID;
    NSString *_providerID;
    NSString *_nameForSorting;
    NSArray *_supportedTemplates;
    NSArray *_supportedAuthenticationSchemes;
    NSURL *_authenticationURL;
    NSURL *_appStoreRoomURL;
    NSString *_appAdamID;
}

@property (copy, nonatomic) NSString *appAdamID; // @synthesize appAdamID=_appAdamID;
@property (copy, nonatomic) NSURL *appStoreRoomURL; // @synthesize appStoreRoomURL=_appStoreRoomURL;
@property (copy, nonatomic) NSURL *authenticationURL; // @synthesize authenticationURL=_authenticationURL;
@property (nonatomic, getter=isDeveloper) BOOL developer; // @synthesize developer=_developer;
@property (readonly, copy, nonatomic) NSString *displayName;
@property (copy, nonatomic) NSString *nameForSorting; // @synthesize nameForSorting=_nameForSorting;
@property (nonatomic, getter=isProhibitedByStore) BOOL prohibitedByStore; // @synthesize prohibitedByStore=_prohibitedByStore;
@property (copy, nonatomic) NSString *providerID; // @synthesize providerID=_providerID;
@property (copy, nonatomic) NSArray *supportedAuthenticationSchemes; // @synthesize supportedAuthenticationSchemes=_supportedAuthenticationSchemes;
@property (copy, nonatomic) NSArray *supportedTemplates; // @synthesize supportedTemplates=_supportedTemplates;
@property (readonly, nonatomic) BOOL supportsTemplatesSufficientForCurrentPlatform;
@property (readonly, nonatomic) BOOL supportsTemplatesSufficientForSomeKnownPlatform;
@property (copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;

+ (id)keyPathsForValuesAffectingDisplayName;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)supportsRequestsExpectingAuthenticationSchemes:(id)arg1;

@end

