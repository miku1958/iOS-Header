//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoSubscriberAccount/NSCopying-Protocol.h>
#import <VideoSubscriberAccount/NSSecureCoding-Protocol.h>

@class NSString;

@interface VSSubscriptionSource : NSObject <NSCopying, NSSecureCoding>
{
    long long _kind;
    NSString *_identifier;
}

@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) long long kind; // @synthesize kind=_kind;

+ (id)currentSource;
+ (id)subscriptionSourceForAppWithBundleID:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithDomainName:(id)arg1;
+ (id)subscriptionSourceForWebsiteWithURL:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
