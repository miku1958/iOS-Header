//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariSafeBrowsing/NSCopying-Protocol.h>
#import <SafariSafeBrowsing/NSSecureCoding-Protocol.h>

@class NSArray;

@interface SSBLookupResult : NSObject <NSCopying, NSSecureCoding>
{
    BOOL _URLContainsUserInfo;
    NSArray *_serviceLookupResults;
}

@property (readonly, nonatomic) BOOL URLContainsUserInfo; // @synthesize URLContainsUserInfo=_URLContainsUserInfo;
@property (readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic) NSArray *serviceLookupResults; // @synthesize serviceLookupResults=_serviceLookupResults;
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithServiceLookUpResults:(id)arg1;
- (id)_initWithServiceLookUpResults:(id)arg1 URLContainsUserInfo:(BOOL)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

