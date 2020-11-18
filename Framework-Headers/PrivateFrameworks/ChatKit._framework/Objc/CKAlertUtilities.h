//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CKAlertUtilitiesProtocol;

@interface CKAlertUtilities : NSObject
{
    id<CKAlertUtilitiesProtocol> _delegate;
}

@property (weak, nonatomic) id<CKAlertUtilitiesProtocol> delegate; // @synthesize delegate=_delegate;

+ (struct __CFDictionary *)_copyCTPhoneNumberSetting;
+ (struct __CFString *)_grabCTSIMStatus;
+ (long long)missingAlertTypeToNotify;
- (void).cxx_destruct;
- (void)_didFinishCheckingMissingCarrierSetting;
- (void)_displayMissingInformationAlert:(long long)arg1;
- (void)_showNetworkPrefs:(long long)arg1;
- (void)checkMissingCarrierSetting;

@end
