//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebUI/NSObject-Protocol.h>

@class NSString, WBSFormAutoFillCorrectionManager, WBSFormFieldClassificationCorrector;

@protocol WBSFormFieldClassificationCorrectorDelegate <NSObject>
- (WBSFormAutoFillCorrectionManager *)formAutoFillCorrectionManagerForFormFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1;
- (NSString *)formFieldClassificationCorrector:(WBSFormFieldClassificationCorrector *)arg1 bestAddressBookLabelForControlValue:(NSString *)arg2;
@end

