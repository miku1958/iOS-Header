//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString, PKPaymentApplication, PKPaymentPass;

@interface PKPaymentPreferenceCardEntry : NSObject
{
    BOOL _shouldShowCardUI;
    BOOL _isSelectable;
    PKPaymentPass *_pass;
    PKPaymentApplication *_paymentApplication;
    NSString *_displayName;
    NSString *_availabilityString;
}

@property (copy, nonatomic) NSString *availabilityString; // @synthesize availabilityString=_availabilityString;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) BOOL isSelectable; // @synthesize isSelectable=_isSelectable;
@property (strong, nonatomic) PKPaymentPass *pass; // @synthesize pass=_pass;
@property (strong, nonatomic) PKPaymentApplication *paymentApplication; // @synthesize paymentApplication=_paymentApplication;
@property (nonatomic) BOOL shouldShowCardUI; // @synthesize shouldShowCardUI=_shouldShowCardUI;

- (void).cxx_destruct;

@end

