//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/NSSecureCoding-Protocol.h>

@class NSString;

@interface PTDomainInfo : NSObject <NSSecureCoding>
{
    NSString *_uniqueIdentifier;
    NSString *_domainGroupName;
    NSString *_domainName;
    NSString *_settingsClassName;
    NSString *_settingsFrameworkBundlePath;
}

@property (readonly, nonatomic) NSString *domainGroupName; // @synthesize domainGroupName=_domainGroupName;
@property (readonly, nonatomic) NSString *domainName; // @synthesize domainName=_domainName;
@property (readonly, nonatomic) NSString *settingsClassName; // @synthesize settingsClassName=_settingsClassName;
@property (readonly, nonatomic) NSString *settingsFrameworkBundlePath; // @synthesize settingsFrameworkBundlePath=_settingsFrameworkBundlePath;
@property (readonly, nonatomic) NSString *uniqueIdentifier;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDomain:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

