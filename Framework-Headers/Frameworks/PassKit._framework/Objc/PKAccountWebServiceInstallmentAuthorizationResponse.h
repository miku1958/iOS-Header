//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceInstallmentAuthorizationResponse : PKAccountWebServiceResponse
{
    NSString *_authorizationToken;
}

@property (readonly, copy, nonatomic) NSString *authorizationToken; // @synthesize authorizationToken=_authorizationToken;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end
