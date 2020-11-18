//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSArray, NSData, NSDate, NSString, VSSubscriptionSource;

@interface VSSubscription : NSObject <NSCopying, NSSecureCoding>
{
    NSDate *_expirationDate;
    long long _accessLevel;
    NSArray *_tierIdentifiers;
    NSDate *_creationDate;
    NSDate *_modificationDate;
    NSString *_subscriptionInfo;
    VSSubscriptionSource *_source;
}

@property (nonatomic) long long accessLevel; // @synthesize accessLevel=_accessLevel;
@property (copy, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property (copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (copy, nonatomic) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property (copy, nonatomic) VSSubscriptionSource *source; // @synthesize source=_source;
@property (copy, nonatomic) NSString *subscriptionInfo; // @synthesize subscriptionInfo=_subscriptionInfo;
@property (copy, nonatomic) NSArray *tierIdentifiers; // @synthesize tierIdentifiers=_tierIdentifiers;
@property (readonly, copy, nonatomic) NSData *versionHash;

+ (id)keyPathsForValuesAffectingVersionHash;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_updateHash:(id)arg1 withValueForProperty:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)setNilValueForKey:(id)arg1;

@end

