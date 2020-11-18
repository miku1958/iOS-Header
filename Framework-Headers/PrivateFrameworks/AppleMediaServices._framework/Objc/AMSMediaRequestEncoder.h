//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleMediaServices/AMSBagConsumer-Protocol.h>
#import <AppleMediaServices/AMSRequestEncoding-Protocol.h>

@class ACAccount, AMSProcessInfo, AMSURLRequestEncoder, NSString;
@protocol AMSBagProtocol, AMSMediaTokenServiceProtocol, AMSResponseDecoding;

@interface AMSMediaRequestEncoder : NSObject <AMSBagConsumer, AMSRequestEncoding>
{
    BOOL _disableAccountMediaTypeComponent;
    id<AMSMediaTokenServiceProtocol> _tokenService;
    AMSURLRequestEncoder *_requestEncoder;
}

@property (nonatomic) BOOL URLKnownToBeTrusted;
@property (strong, nonatomic) ACAccount *account;
@property (readonly, nonatomic) id<AMSBagProtocol> bag;
@property (strong, nonatomic) AMSProcessInfo *clientInfo;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableAccountMediaTypeComponent; // @synthesize disableAccountMediaTypeComponent=_disableAccountMediaTypeComponent;
@property (nonatomic) BOOL disableResponseDecoding;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *logKey;
@property (readonly, nonatomic) AMSURLRequestEncoder *requestEncoder; // @synthesize requestEncoder=_requestEncoder;
@property (strong, nonatomic) id<AMSResponseDecoding> responseDecoder;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<AMSMediaTokenServiceProtocol> tokenService; // @synthesize tokenService=_tokenService;

+ (id)bagKeySet;
+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
- (void).cxx_destruct;
- (id)initWithTokenService:(id)arg1 bag:(id)arg2;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (id)requestWithComponents:(id)arg1;

@end
