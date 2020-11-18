//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SafariSafeBrowsing/NSCopying-Protocol.h>
#import <SafariSafeBrowsing/NSSecureCoding-Protocol.h>

@class NSString;

@interface SSBServiceLookupResult : NSObject <NSCopying, NSSecureCoding>
{
    struct LookupResult _lookupResult;
}

@property (readonly, nonatomic, getter=isKnownToBeUnsafe) BOOL knownToBeUnsafe;
@property (readonly, nonatomic, getter=isMalware) BOOL malware;
@property (readonly, nonatomic, getter=isPhishing) BOOL phishing;
@property (readonly, nonatomic) NSString *provider;
@property (readonly, nonatomic, getter=isUnwantedSoftware) BOOL unwantedSoftware;

+ (BOOL)supportsSecureCoding;
- (id).cxx_construct;
- (id)_initWithLookupResult:(struct LookupResult)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

