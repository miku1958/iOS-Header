//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TelephonyUtilities/NSSecureCoding-Protocol.h>

@class NSString, NSURL;

@interface TUSandboxExtendedURL : NSObject <NSSecureCoding>
{
    NSString *_sandboxExtensionClass;
    NSURL *_URL;
    NSString *_sandboxExtensionToken;
    long long _sandboxExtensionHandle;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) NSString *sandboxExtensionClass; // @synthesize sandboxExtensionClass=_sandboxExtensionClass;
@property (nonatomic) long long sandboxExtensionHandle; // @synthesize sandboxExtensionHandle=_sandboxExtensionHandle;
@property (copy, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToSandboxExtendedURL:(id)arg1;

@end

