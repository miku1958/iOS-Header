//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentPass.h>

@class NSDictionary;

@interface PKSimulatorPaymentPass : PKPaymentPass
{
    NSDictionary *_dictionary;
}

- (void).cxx_destruct;
- (id)devicePrimaryPaymentApplication;
- (id)initWithDictionary:(id)arg1 bundle:(id)arg2;
- (id)localizedDescription;
- (id)primaryAccountIdentifier;
- (id)primaryAccountNumberSuffix;

@end

