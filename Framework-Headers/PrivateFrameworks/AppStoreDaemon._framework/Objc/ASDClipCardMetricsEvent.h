//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString, NSURL;

@interface ASDClipCardMetricsEvent : NSObject <NSSecureCoding>
{
    BOOL _thirdPartyWithNoAppReferrer;
    NSString *_bundleID;
    NSNumber *_itemID;
    NSString *_referralSource;
    NSString *_referralSourceBundleID;
    NSString *_referrerType;
    NSURL *_sourceURL;
}

@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) NSNumber *itemID; // @synthesize itemID=_itemID;
@property (strong, nonatomic) NSString *referralSource; // @synthesize referralSource=_referralSource;
@property (strong, nonatomic) NSString *referralSourceBundleID; // @synthesize referralSourceBundleID=_referralSourceBundleID;
@property (strong, nonatomic) NSString *referrerType; // @synthesize referrerType=_referrerType;
@property (strong, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property (nonatomic) BOOL thirdPartyWithNoAppReferrer; // @synthesize thirdPartyWithNoAppReferrer=_thirdPartyWithNoAppReferrer;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClipBundleID:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

