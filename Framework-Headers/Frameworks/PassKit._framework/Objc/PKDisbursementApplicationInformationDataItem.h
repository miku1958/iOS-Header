//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PassKitCore/PKPaymentDataItem.h>

@class PKDisbursementApplicationInformation;

@interface PKDisbursementApplicationInformationDataItem : PKPaymentDataItem
{
    PKDisbursementApplicationInformation *_applicationInformation;
}

@property (strong, nonatomic) PKDisbursementApplicationInformation *applicationInformation; // @synthesize applicationInformation=_applicationInformation;

+ (long long)dataType;
- (void).cxx_destruct;
- (id)initWithModel:(id)arg1;
- (BOOL)isValidWithError:(id *)arg1;

@end
