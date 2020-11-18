//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/NSCopying-Protocol.h>

@class NSString;

@interface AMSKeychainOptions : NSObject <NSCopying>
{
    BOOL _regenerateKeys;
    BOOL _authenticationFallbackVisible;
    BOOL _displayAuthenticationReason;
    NSString *_clientCertLabel;
    NSString *_intermediateCertLabel;
    NSString *_label;
    unsigned long long _purpose;
    unsigned long long _style;
    NSString *_prompt;
}

@property (nonatomic) BOOL authenticationFallbackVisible; // @synthesize authenticationFallbackVisible=_authenticationFallbackVisible;
@property (copy, nonatomic) NSString *clientCertLabel; // @synthesize clientCertLabel=_clientCertLabel;
@property (nonatomic) BOOL displayAuthenticationReason; // @synthesize displayAuthenticationReason=_displayAuthenticationReason;
@property (copy, nonatomic) NSString *intermediateCertLabel; // @synthesize intermediateCertLabel=_intermediateCertLabel;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (copy, nonatomic) NSString *prompt; // @synthesize prompt=_prompt;
@property (nonatomic) unsigned long long purpose; // @synthesize purpose=_purpose;
@property (nonatomic) BOOL regenerateKeys; // @synthesize regenerateKeys=_regenerateKeys;
@property (nonatomic) unsigned long long style; // @synthesize style=_style;

+ (unsigned long long)preferredAttestationStyle;
- (void).cxx_destruct;
- (BOOL)_compareString:(id)arg1 withString:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithOptionsDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)optionsDictionary;

@end
