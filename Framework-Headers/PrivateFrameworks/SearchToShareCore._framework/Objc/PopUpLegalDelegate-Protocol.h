//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchToShareCore/NSObject-Protocol.h>

@class NSString;

@protocol PopUpLegalDelegate <NSObject>
- (NSString *)continueButtonLabel;
- (void)didAcceptLegalNotice;
- (BOOL)shouldShowLegalNotice;
- (NSString *)textForLegalNotice;
@end
