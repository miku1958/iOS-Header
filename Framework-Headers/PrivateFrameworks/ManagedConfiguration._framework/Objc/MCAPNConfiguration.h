//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNConfiguration : NSObject
{
    NSString *_name;
    NSString *_username;
    NSString *_password;
    NSString *_proxyServer;
    NSNumber *_proxyPort;
    NSString *_authenticationType;
    NSNumber *_defaultProtocolMask;
    NSNumber *_allowedProtocolMask;
    NSNumber *_allowedProtocolMaskInRoaming;
    NSNumber *_allowedProtocolMaskInDomesticRoaming;
}

@property (strong, nonatomic) NSNumber *allowedProtocolMask; // @synthesize allowedProtocolMask=_allowedProtocolMask;
@property (strong, nonatomic) NSNumber *allowedProtocolMaskInDomesticRoaming; // @synthesize allowedProtocolMaskInDomesticRoaming=_allowedProtocolMaskInDomesticRoaming;
@property (strong, nonatomic) NSNumber *allowedProtocolMaskInRoaming; // @synthesize allowedProtocolMaskInRoaming=_allowedProtocolMaskInRoaming;
@property (strong, nonatomic) NSString *authenticationType; // @synthesize authenticationType=_authenticationType;
@property (strong, nonatomic) NSNumber *defaultProtocolMask; // @synthesize defaultProtocolMask=_defaultProtocolMask;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (strong, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property (strong, nonatomic) NSString *proxyServer; // @synthesize proxyServer=_proxyServer;
@property (strong, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 outError:(id *)arg2;
- (id)localizedAuthenticationType;
- (id)stubDictionary;

@end

