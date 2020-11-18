//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSTask.h>

@class AMSProcessInfo, NSString;
@protocol AMSLookupBagContract;

@interface AMSLookup : AMSTask
{
    NSString *_caller;
    AMSProcessInfo *_clientInfo;
    id<AMSLookupBagContract> _contract;
    NSString *_imageProfile;
    NSString *_keyProfile;
    NSString *_platform;
    long long _signatureType;
    long long _version;
}

@property (strong, nonatomic) NSString *caller; // @synthesize caller=_caller;
@property (strong, nonatomic) AMSProcessInfo *clientInfo; // @synthesize clientInfo=_clientInfo;
@property (strong, nonatomic) id<AMSLookupBagContract> contract; // @synthesize contract=_contract;
@property (strong, nonatomic) NSString *imageProfile; // @synthesize imageProfile=_imageProfile;
@property (strong, nonatomic) NSString *keyProfile; // @synthesize keyProfile=_keyProfile;
@property (strong, nonatomic) NSString *platform; // @synthesize platform=_platform;
@property (nonatomic) long long signatureType; // @synthesize signatureType=_signatureType;
@property (nonatomic) long long version; // @synthesize version=_version;

- (void).cxx_destruct;
- (void)_addJSSignatureToRequest:(id)arg1;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (id)initWithBagContract:(id)arg1;
- (id)initWithBagContract:(id)arg1 caller:(id)arg2 keyProfile:(id)arg3;
- (id)performLookupWithBundleIdentifiers:(id)arg1 itemIdentifiers:(id)arg2;

@end

