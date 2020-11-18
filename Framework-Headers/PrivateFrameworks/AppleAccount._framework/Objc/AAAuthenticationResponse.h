//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleAccount/AAResponse.h>

@class NSDictionary, NSString;

@interface AAAuthenticationResponse : AAResponse
{
    NSDictionary *_tokens;
    NSDictionary *_appleAccount;
}

@property (readonly, nonatomic) NSString *HSAAction;
@property (readonly, nonatomic) NSString *HSAData;
@property (readonly, nonatomic) NSString *altDSID;
@property (readonly, nonatomic) NSString *authToken;
@property (readonly, nonatomic) NSString *cloudKitToken;
@property (readonly, nonatomic) NSString *fmfAppToken;
@property (readonly, nonatomic) NSString *fmfToken;
@property (readonly, nonatomic) NSString *fmipLostModeToken;
@property (readonly, nonatomic) NSString *fmipToken;
@property (readonly, nonatomic) NSString *hsaToken;
@property (readonly, nonatomic) NSString *mapsToken;
@property (readonly, nonatomic) NSString *personID;

- (void).cxx_destruct;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end

