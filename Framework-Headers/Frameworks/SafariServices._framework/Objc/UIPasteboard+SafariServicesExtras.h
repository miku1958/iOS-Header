//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIPasteboard.h>

@interface UIPasteboard (SafariServicesExtras)

@property (readonly, nonatomic) BOOL safari_canPasteAndNavigate;

- (unsigned long long)safari_bestInputTypeForPastingIntoURLField;
- (id)safari_bestStringForPastingIntoURLField;
- (id)safari_pasteAndNavigateButtonTitle;
- (void)safari_setSensitiveString:(id)arg1;
@end

