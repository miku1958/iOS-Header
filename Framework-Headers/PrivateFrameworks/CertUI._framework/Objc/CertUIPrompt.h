//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface CertUIPrompt : NSObject
{
    struct __SecTrust *_trust;
    NSString *_host;
    NSString *_service;
    NSString *_connectionDisplayName;
    CDUnknownBlockType _responseBlock;
}

@property (copy, nonatomic) NSString *connectionDisplayName; // @synthesize connectionDisplayName=_connectionDisplayName;
@property (strong, nonatomic) NSString *host; // @synthesize host=_host;
@property (strong, nonatomic) NSString *service; // @synthesize service=_service;

+ (id)promptQueue;
+ (id)stringForResponse:(int)arg1;
- (void).cxx_destruct;
- (id)_copyPropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_digestFromTrust:(struct __SecTrust *)arg1;
- (id)_expirationFromTrust:(struct __SecTrust *)arg1;
- (void)_informConsumerOfResponse:(int)arg1;
- (BOOL)_isRootCertificateFromTrust:(struct __SecTrust *)arg1;
- (id)_issuerFromTrust:(struct __SecTrust *)arg1;
- (id)_messagingCenter;
- (id)_newUserInfoForDisplayName:(id)arg1 hostname:(id)arg2 trust:(struct __SecTrust *)arg3;
- (id)_propertyNamed:(id)arg1 ofType:(id)arg2 inProperties:(id)arg3;
- (id)_purposeFromTrustProperties:(id)arg1;
- (int)_responseFromReplyDict:(id)arg1;
- (int)_sendRemoteMessage;
- (id)_sendablePropertiesFromProperties:(id)arg1;
- (id)_sendablePropertiesFromTrust:(struct __SecTrust *)arg1;
- (id)_sendablePropertyFromProperty:(id)arg1;
- (id)_subtitleFromTrust:(struct __SecTrust *)arg1;
- (id)_titleFromTrust:(struct __SecTrust *)arg1;
- (void)dealloc;
- (id)description;
- (void)setTrust:(struct __SecTrust *)arg1;
- (int)showAndWaitForResponse;
- (void)showPromptWithResponseBlock:(CDUnknownBlockType)arg1;
- (struct __SecTrust *)trust;

@end
