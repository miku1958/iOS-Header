//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>
#import <iTunesCloud/NSSecureCoding-Protocol.h>

@class ICMusicSubscriptionStatus, NSDate, NSDictionary;

@interface ICMusicSubscriptionStatusResponse : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _finalResponse;
    BOOL _needsReload;
    ICMusicSubscriptionStatus *_subscriptionStatus;
    NSDate *_expirationDate;
}

@property (readonly, copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (nonatomic, getter=isFinalResponse) BOOL finalResponse; // @synthesize finalResponse=_finalResponse;
@property (nonatomic) BOOL needsReload; // @synthesize needsReload=_needsReload;
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;
@property (copy, nonatomic) ICMusicSubscriptionStatus *subscriptionStatus; // @synthesize subscriptionStatus=_subscriptionStatus;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPropertyListRepresentation:(id)arg1;
- (id)initWithResponseDictionary:(id)arg1 expirationDate:(id)arg2;

@end
