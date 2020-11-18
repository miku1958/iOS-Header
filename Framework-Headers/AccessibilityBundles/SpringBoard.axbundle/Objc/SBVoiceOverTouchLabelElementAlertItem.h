//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString;
@protocol SBVoiceOverTouchLabelElementAlertItemDelegate;

@interface SBVoiceOverTouchLabelElementAlertItem : SBAlertItem <UITextFieldDelegate, UIAlertViewDelegate>
{
    NSString *_initialValue;
    id<SBVoiceOverTouchLabelElementAlertItemDelegate> _voiceOverAlertItemDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *initialValue; // @synthesize initialValue=_initialValue;
@property (readonly) Class superclass;
@property (weak, nonatomic) id<SBVoiceOverTouchLabelElementAlertItemDelegate> voiceOverAlertItemDelegate; // @synthesize voiceOverAlertItemDelegate=_voiceOverAlertItemDelegate;

- (void).cxx_destruct;
- (BOOL)allowMenuButtonDismissal;
- (void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2;
- (BOOL)dismissOnLock;
- (BOOL)shouldShowInEmergencyCall;
- (BOOL)shouldShowInLockScreen;
- (BOOL)willShowInAwayItems;

@end

