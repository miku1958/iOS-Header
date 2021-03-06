//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface MCAPNInfo : NSObject
{
    NSString *_apnName;
    NSString *_username;
    NSString *_password;
    NSString *_proxy;
    NSNumber *_proxyPort;
}

@property (strong, nonatomic) NSString *apnName; // @synthesize apnName=_apnName;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (strong, nonatomic) NSString *proxy; // @synthesize proxy=_proxy;
@property (strong, nonatomic) NSNumber *proxyPort; // @synthesize proxyPort=_proxyPort;
@property (strong, nonatomic) NSString *username; // @synthesize username=_username;

- (void).cxx_destruct;
- (id)defaultsRepresentation;
- (id)description;
- (id)installationWarnings;
- (id)strippedDefaultsRepresentation;

@end

