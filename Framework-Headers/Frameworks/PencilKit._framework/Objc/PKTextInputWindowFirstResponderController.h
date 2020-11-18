//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PencilKit/UIInputResponderControllerVisibilityObserver-Protocol.h>

@class NSNotification, NSNotificationCenter, NSString, PKTextInputWindowFirstResponder;
@protocol PKTextInputWindowFirstResponderControllerDelegate;

@interface PKTextInputWindowFirstResponderController : NSObject <UIInputResponderControllerVisibilityObserver>
{
    BOOL _paletteFloatingMode;
    id<PKTextInputWindowFirstResponderControllerDelegate> _delegate;
    PKTextInputWindowFirstResponder *_firstResponder;
    NSNotificationCenter *__notificationCenter;
    NSNotification *__delayedNotification;
}

@property (strong, nonatomic) NSNotification *_delayedNotification; // @synthesize _delayedNotification=__delayedNotification;
@property (strong, nonatomic) NSNotificationCenter *_notificationCenter; // @synthesize _notificationCenter=__notificationCenter;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKTextInputWindowFirstResponderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PKTextInputWindowFirstResponder *firstResponder; // @synthesize firstResponder=_firstResponder;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL paletteFloatingMode; // @synthesize paletteFloatingMode=_paletteFloatingMode;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_isResponderEditableTextInput:(id)arg1;
- (void)_notifyFirstResponder:(id)arg1 isVisible:(BOOL)arg2;
- (void)_textInputResponderDidChangeNotificationHandler:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithNotificationCenter:(id)arg1;
- (void)inputResponderController:(id)arg1 inputViewSetVisibilityDidChange:(BOOL)arg2 includedReset:(BOOL)arg3;
- (void)textInputSourceDidChange:(id)arg1;
- (void)updateFirstResponderFromWindowScene:(id)arg1;

@end
