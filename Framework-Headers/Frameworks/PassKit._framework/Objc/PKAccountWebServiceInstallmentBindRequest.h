//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKAccountWebServiceRequest.h>

@class NSDecimalNumber, NSString, NSURL;

@interface PKAccountWebServiceInstallmentBindRequest : PKAccountWebServiceRequest
{
    NSString *_accountIdentifier;
    NSString *_applicationIdentifier;
    NSDecimalNumber *_bindingAmount;
    NSString *_merchantIdentifier;
    NSURL *_baseURL;
}

@property (copy, nonatomic) NSString *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (strong, nonatomic) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (strong, nonatomic) NSDecimalNumber *bindingAmount; // @synthesize bindingAmount=_bindingAmount;
@property (copy, nonatomic) NSString *merchantIdentifier; // @synthesize merchantIdentifier=_merchantIdentifier;

- (void).cxx_destruct;
- (id)_urlRequestWithAppleAccountInformation:(id)arg1;

@end

