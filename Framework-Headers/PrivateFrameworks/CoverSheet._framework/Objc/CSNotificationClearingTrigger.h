//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol CSNotificationClearingTriggerDelegate;

@interface CSNotificationClearingTrigger : NSObject
{
    BOOL _authenticated;
    BOOL _hadNotificationContentAtDisappearance;
    BOOL _didDisableCarDNDUntilEndOfDrive;
    BOOL _uiLocked;
    BOOL _screenOff;
    BOOL _triggerArmed;
    id<CSNotificationClearingTriggerDelegate> _delegate;
}

@property (nonatomic) BOOL authenticated; // @synthesize authenticated=_authenticated;
@property (weak, nonatomic) id<CSNotificationClearingTriggerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL didDisableCarDNDUntilEndOfDrive; // @synthesize didDisableCarDNDUntilEndOfDrive=_didDisableCarDNDUntilEndOfDrive;
@property (nonatomic) BOOL hadNotificationContentAtDisappearance; // @synthesize hadNotificationContentAtDisappearance=_hadNotificationContentAtDisappearance;
@property (nonatomic) BOOL screenOff; // @synthesize screenOff=_screenOff;
@property (nonatomic) BOOL triggerArmed; // @synthesize triggerArmed=_triggerArmed;
@property (nonatomic) BOOL uiLocked; // @synthesize uiLocked=_uiLocked;

- (void).cxx_destruct;
- (void)_clearIfNeeded;
- (void)_reset;
- (BOOL)_shouldArm;
- (BOOL)_shouldFire;
- (void)_updateTriggerAndClearIfNeeded;
- (BOOL)_wouldArmForDiscreteParameters;
- (BOOL)_wouldArmIfNotForDND;
- (BOOL)_wouldArmIfNotForDNDAndNotificationContent;
- (id)initWithDelegate:(id)arg1;

@end
