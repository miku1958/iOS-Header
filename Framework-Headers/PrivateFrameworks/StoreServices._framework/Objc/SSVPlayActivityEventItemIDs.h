//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreServices/NSCopying-Protocol.h>
#import <StoreServices/NSMutableCopying-Protocol.h>
#import <StoreServices/NSSecureCoding-Protocol.h>

@class NSString;

@interface SSVPlayActivityEventItemIDs : NSObject <NSSecureCoding, NSCopying, NSMutableCopying>
{
    long long _equivalencySourceAdamID;
    unsigned long long _cloudID;
    NSString *_lyricsID;
    long long _purchasedAdamID;
    long long _radioAdamID;
    long long _subscriptionAdamID;
    long long _tvShowPurchasedAdamID;
    long long _tvShowSubscriptionAdamID;
}

@property (readonly, nonatomic) unsigned long long cloudID; // @synthesize cloudID=_cloudID;
@property (readonly, nonatomic) long long equivalencySourceAdamID; // @synthesize equivalencySourceAdamID=_equivalencySourceAdamID;
@property (readonly, copy, nonatomic) NSString *lyricsID; // @synthesize lyricsID=_lyricsID;
@property (readonly, nonatomic) long long purchasedAdamID; // @synthesize purchasedAdamID=_purchasedAdamID;
@property (readonly, nonatomic) long long radioAdamID; // @synthesize radioAdamID=_radioAdamID;
@property (readonly, nonatomic) long long subscriptionAdamID; // @synthesize subscriptionAdamID=_subscriptionAdamID;
@property (readonly, nonatomic) long long tvShowPurchasedAdamID; // @synthesize tvShowPurchasedAdamID=_tvShowPurchasedAdamID;
@property (readonly, nonatomic) long long tvShowSubscriptionAdamID; // @synthesize tvShowSubscriptionAdamID=_tvShowSubscriptionAdamID;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_copyWithClass:(Class)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

