//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKPaymentTransactionPresentation : NSObject
{
}

+ (id)_billPaymentFundingSourceForTransaction:(id)arg1;
+ (id)_relativeDateForTransaction:(id)arg1;
+ (id)_statusAnnotationForTransaction:(id)arg1;
+ (unsigned long long)iconTypeForTransaction:(id)arg1 ignoreLogoURL:(BOOL)arg2;
+ (id)presentationInformationForTransaction:(id)arg1 transactionSource:(id)arg2 secondaryTransactionSource:(id)arg3 account:(id)arg4 deviceName:(id)arg5 context:(unsigned long long)arg6;
+ (id)secondaryFundingSourceDescriptionForTransaction:(id)arg1 secondarySource:(id)arg2 includeBankAccountSuffix:(BOOL)arg3 useGenericNameIfNoDescriptionAvailable:(BOOL)arg4;
+ (id)staticPDFNameForTransaction:(id)arg1;

@end

