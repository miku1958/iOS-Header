//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Preferences/PSSetupController.h>

@interface DevicePINSetupController : PSSetupController
{
    BOOL _success;
    BOOL _allowOptionsButton;
}

@property (nonatomic) BOOL allowOptionsButton; // @synthesize allowOptionsButton=_allowOptionsButton;

- (BOOL)canBeShownFromSuspendedState;
- (id)init;
- (BOOL)popupStyleIsModal;
- (struct CGSize)preferredContentSize;
- (void)showController:(id)arg1 animate:(BOOL)arg2;
- (BOOL)success;
- (BOOL)usePopupStyle;

@end

