//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PKPaymentSetupFieldFooter;

@interface PKPaymentSetupFieldsModel : NSObject
{
    NSMutableArray *_paymentSetupFields;
    PKPaymentSetupFieldFooter *_footerField;
}

+ (id)defaultPaymentSetupProvisioningFields;
+ (id)fakePaymentSetupProvisioningFields;
- (void).cxx_destruct;
- (id)footerPaymentSetupField;
- (BOOL)hasFooterPaymentSetupField;
- (BOOL)hasIncompletePaymentSetupFields;
- (id)incompletePaymentSetupFields;
- (id)initWithPaymentSetupFields:(id)arg1;
- (unsigned long long)numberOfPaymentSetupFields;
- (id)paymentSetupFieldAtIndex:(unsigned long long)arg1;
- (id)paymentSetupFieldIdentifiers;
- (id)paymentSetupFieldWithIdentifier:(id)arg1;
- (id)paymentSetupFields;
- (void)prefillDefaultValues;
- (void)replaceAllPaymentSetupFields:(id)arg1;
- (void)replaceAllPaymentSetupFieldsPreservingCurrentValues:(id)arg1;
- (void)resetAllPaymentSetupFieldValues;
- (id)secureSubmissionValuesForDestination:(id)arg1;
- (id)submissionValuesForDestination:(id)arg1;
- (void)updateWithPaymentSetupFields:(id)arg1;

@end

