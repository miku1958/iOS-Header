//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SharedWebCredentials/NSCopying-Protocol.h>
#import <SharedWebCredentials/NSSecureCoding-Protocol.h>
#import <SharedWebCredentials/SWCBloomFilterable-Protocol.h>
#import <SharedWebCredentials/SWCRedactedDescription-Protocol.h>

@class NSNumber, NSString;

@interface _SWCDomain : NSObject <SWCRedactedDescription, SWCBloomFilterable, NSCopying, NSSecureCoding>
{
    BOOL _wildcard;
    BOOL _modeOfOperation;
    NSString *_host;
    NSNumber *_port;
}

@property (readonly) NSString *host; // @synthesize host=_host;
@property (readonly, getter=isHostIPAddress) BOOL hostIPAddress;
@property (readonly) BOOL modeOfOperation; // @synthesize modeOfOperation=_modeOfOperation;
@property (readonly) _SWCDomain *nonWildcardDomain;
@property (readonly) NSNumber *port; // @synthesize port=_port;
@property (readonly) NSString *rawValue;
@property (readonly) NSString *topLevelDomainValue;
@property (readonly, getter=isValid) BOOL valid;
@property (readonly, getter=isWildcard) BOOL wildcard; // @synthesize wildcard=_wildcard;
@property (readonly) _SWCDomain *wildcardDomain;

+ (id)appleDomain;
+ (id)exampleDomain;
+ (id)new;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (id)description;
- (id)domainRequiringModeOfOperation:(BOOL)arg1;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)encompassesDomain:(id)arg1;
- (void)getBloomFilterMask:(unsigned char [256])arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHost:(id)arg1 port:(id)arg2 wildcard:(BOOL)arg3 modeOfOperation:(BOOL)arg4;
- (id)initWithString:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)redactedDescription;

@end
