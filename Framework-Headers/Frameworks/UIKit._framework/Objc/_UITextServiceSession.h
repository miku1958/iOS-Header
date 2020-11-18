//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPopoverControllerDelegate-Protocol.h>

@class NSString, UIPopoverController, UIViewController;

__attribute__((visibility("hidden")))
@interface _UITextServiceSession : NSObject <UIPopoverControllerDelegate>
{
    long long _type;
    UIViewController *_modalViewController;
    UIPopoverController *_popoverController;
    BOOL _isTextEffectsWindow;
    BOOL _dismissed;
    CDUnknownBlockType _dismissedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) CDUnknownBlockType dismissedHandler; // @synthesize dismissedHandler=_dismissedHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)canShowTextServices;
+ (id)showServiceForText:(id)arg1 type:(long long)arg2 fromRect:(struct CGRect)arg3 inView:(id)arg4;
+ (id)textServiceSessionForType:(long long)arg1;
- (void).cxx_destruct;
- (void)_endSession;
- (void)dismissTextServiceAnimated:(BOOL)arg1;
- (id)init;
- (id)initWithType:(long long)arg1;
- (BOOL)isDisplaying;
- (void)popoverControllerDidDismissPopover:(id)arg1;
- (void)sessionDidDismiss;
- (long long)type;

@end
