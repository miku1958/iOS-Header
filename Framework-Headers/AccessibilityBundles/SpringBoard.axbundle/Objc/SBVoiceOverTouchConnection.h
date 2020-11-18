//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class NSString, SBVOTWindow, SBVoiceOverTouchCursorDisplay, SBVoiceOverTouchLabelElementAlertItem, UIView;

@interface SBVoiceOverTouchConnection : NSObject <UIAlertViewDelegate, UITextFieldDelegate>
{
    struct __CFMachPort *_votMachPort;
    SBVOTWindow *_votWindow;
    UIView *_contentView;
    SBVoiceOverTouchCursorDisplay *_cursorDisplay;
    SBVoiceOverTouchLabelElementAlertItem *_labelAlert;
    BOOL _screenCurtainEnabled;
    BOOL inVoiceOverPassthroughMode;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL elementLabelerVisible;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL inVoiceOverPassthroughMode; // @synthesize inVoiceOverPassthroughMode;
@property (nonatomic) BOOL screenCurtainEnabled; // @synthesize screenCurtainEnabled=_screenCurtainEnabled;
@property (readonly) Class superclass;

+ (id)defaultConnection;
- (void)_displayItemChooser:(id)arg1;
- (void)_programmaticAppSwitch:(BOOL)arg1;
- (void)_registerForMachConnection;
- (void)_registerVOTConnectionWithPort:(unsigned int)arg1;
- (void)_setItemChooserCategories:(id)arg1;
- (void)_tripleClickAlertDisplayed:(id)arg1;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)dealloc;
- (void)exitedItemChooserWithSelection:(long long)arg1 activate:(BOOL)arg2;
- (void)setLabelElementPanelVisible:(BOOL)arg1 initialValue:(id)arg2;
- (void)setScreenCurtainEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)tearDownVoiceOverTouchConnection;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (id)votWindow;

@end

