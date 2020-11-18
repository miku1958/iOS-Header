//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class NSDate, NSDictionary, NSURL;

@interface HMCameraClipAssetContext : NSObject <NSCopying, NSSecureCoding>
{
    NSURL *_url;
    NSDate *_expirationDate;
    NSDictionary *_requiredHTTPHeaders;
}

@property (readonly) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property (readonly, copy) NSDictionary *requiredHTTPHeaders; // @synthesize requiredHTTPHeaders=_requiredHTTPHeaders;
@property (readonly) NSURL *url; // @synthesize url=_url;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 expirationDate:(id)arg2 requiredHTTPHeaders:(id)arg3;
- (BOOL)isEqual:(id)arg1;

@end
