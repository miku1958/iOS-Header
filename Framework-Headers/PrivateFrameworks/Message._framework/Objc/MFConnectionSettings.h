//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface MFConnectionSettings : NSObject <NSCopying>
{
    NSString *_hostname;
    NSString *_serviceName;
    NSString *_certUIService;
    NSArray *_clientCertificates;
    unsigned int _portNumber;
    struct __CFString *_connectionServiceType;
    BOOL _usesSSL;
    BOOL _usesOpportunisticSockets;
    BOOL _tryDirectSSLConnection;
    BOOL _allowsTrustPrompt;
    NSString *_sourceApplicationBundleIdentifier;
    NSString *_accountIdentifier;
    NSString *_networkAccountIdentifier;
}

@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (nonatomic) BOOL allowsTrustPrompt; // @synthesize allowsTrustPrompt=_allowsTrustPrompt;
@property (copy, nonatomic) NSString *certUIService; // @synthesize certUIService=_certUIService;
@property (copy, nonatomic) NSArray *clientCertificates; // @synthesize clientCertificates=_clientCertificates;
@property (copy, nonatomic) NSString *hostname; // @synthesize hostname=_hostname;
@property (copy, nonatomic) NSString *networkAccountIdentifier; // @synthesize networkAccountIdentifier=_networkAccountIdentifier;
@property (nonatomic) unsigned int portNumber; // @synthesize portNumber=_portNumber;
@property (copy, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;
@property (copy, nonatomic) NSString *sourceApplicationBundleIdentifier; // @synthesize sourceApplicationBundleIdentifier=_sourceApplicationBundleIdentifier;
@property (nonatomic) BOOL tryDirectSSL; // @synthesize tryDirectSSL=_tryDirectSSLConnection;
@property (nonatomic) BOOL usesOpportunisticSockets; // @synthesize usesOpportunisticSockets=_usesOpportunisticSockets;
@property (nonatomic) BOOL usesSSL; // @synthesize usesSSL=_usesSSL;

- (struct __CFString *)connectionServiceType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (void)setConnectionServiceType:(struct __CFString *)arg1;

@end

