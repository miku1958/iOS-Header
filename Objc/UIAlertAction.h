//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSString, UIAlertController, UIColor, UIImage, UIInterfaceAction, UIViewController;
@protocol UIAlertActionMutablePropertyObservering, UIAlertActionViewRepresentation_Internal;

@interface UIAlertAction : NSObject <NSCopying>
{
    NSString *_title;
    long long _titleTextAlignment;
    BOOL _enabled;
    BOOL _checked;
    BOOL _isPreferred;
    UIColor *_imageTintColor;
    UIColor *_titleTextColor;
    long long _style;
    CDUnknownBlockType _handler;
    CDUnknownBlockType _simpleHandler;
    UIImage *_image;
    CDUnknownBlockType _shouldDismissHandler;
    NSString *__descriptiveText;
    UIViewController *_contentViewController;
    NSString *_keyCommandInput;
    long long _keyCommandModifierFlags;
    id<UIAlertActionViewRepresentation_Internal> __representer;
    UIInterfaceAction<UIAlertActionMutablePropertyObservering> *__interfaceActionRepresentation;
    UIAlertController *__alertController;
}

@property (nonatomic, setter=_setAlertController:) UIAlertController *_alertController; // @synthesize _alertController=__alertController;
@property (copy, nonatomic, setter=_setDescriptiveText:) NSString *_descriptiveText; // @synthesize _descriptiveText=__descriptiveText;
@property (setter=_setInterfaceActionRepresentation:) UIInterfaceAction<UIAlertActionMutablePropertyObservering> *_interfaceActionRepresentation; // @synthesize _interfaceActionRepresentation=__interfaceActionRepresentation;
@property (setter=_setIsPreferred:) BOOL _isPreferred;
@property (setter=_setRepresenter:) id<UIAlertActionViewRepresentation_Internal> _representer; // @synthesize _representer=__representer;
@property (strong, nonatomic, getter=_contentViewController, setter=_setContentViewController:) UIViewController *contentViewController; // @synthesize contentViewController=_contentViewController;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (copy, nonatomic, getter=_keyCommandInput, setter=_setKeyCommandInput:) NSString *keyCommandInput; // @synthesize keyCommandInput=_keyCommandInput;
@property (nonatomic, getter=_keyCommandModifierFlags, setter=_setKeyCommandModifierFlags:) long long keyCommandModifierFlags; // @synthesize keyCommandModifierFlags=_keyCommandModifierFlags;
@property (copy, nonatomic) CDUnknownBlockType shouldDismissHandler; // @synthesize shouldDismissHandler=_shouldDismissHandler;
@property (copy, nonatomic) CDUnknownBlockType simpleHandler; // @synthesize simpleHandler=_simpleHandler;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2;
+ (id)_actionWithContentViewController:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)_actionWithTitle:(id)arg1 descriptiveText:(id)arg2 image:(id)arg3 style:(long long)arg4 handler:(CDUnknownBlockType)arg5 shouldDismissHandler:(CDUnknownBlockType)arg6;
+ (id)_actionWithTitle:(id)arg1 image:(id)arg2 style:(long long)arg3 handler:(CDUnknownBlockType)arg4 shouldDismissHandler:(CDUnknownBlockType)arg5;
+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)_didAddContentViewController;
- (id)_imageTintColor;
- (BOOL)_isChecked;
- (void)_setChecked:(BOOL)arg1;
- (void)_setImageTintColor:(id)arg1;
- (void)_setKeyCommandInput:(id)arg1 modifierFlags:(long long)arg2;
- (void)_setTitleTextAlignment:(long long)arg1;
- (void)_setTitleTextColor:(id)arg1;
- (long long)_titleTextAlignment;
- (id)_titleTextColor;
- (void)_willAddContentViewController;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

