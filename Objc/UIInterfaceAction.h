//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSPointerArray, NSString, UIColor, UIImage, UIInterfaceActionRepresentationView, UIInterfaceActionVisualStyle, UIView, UIViewController;
@protocol _UIInterfaceActionPresenting;

@interface UIInterfaceAction : NSObject <NSCopying>
{
    BOOL _enabled;
    BOOL _preferred;
    BOOL _focused;
    UIView *_customContentView;
    long long _type;
    UIViewController *_customContentViewController;
    NSString *_title;
    long long _titleAlignment;
    NSString *_classificationTitle;
    UIImage *_leadingImage;
    UIImage *_trailingImage;
    CDUnknownBlockType _handler;
    NSPointerArray *_weakDisplayPropertyObservers;
    UIInterfaceActionRepresentationView *__visualRepresentation;
    id<_UIInterfaceActionPresenting> __presentingController;
    UIInterfaceActionVisualStyle *_visualStyle;
    UIColor *_titleTextColor;
    UIColor *_imageTintColor;
    struct CGSize _leadingImageLayoutSize;
    struct CGSize _trailingImageLayoutSize;
}

@property (weak, nonatomic, setter=_setPresentingController:) id<_UIInterfaceActionPresenting> _presentingController; // @synthesize _presentingController=__presentingController;
@property (readonly, nonatomic) long long _typeForDeterminingViewRepresentation;
@property (weak, nonatomic, setter=_setVisualRepresentation:) UIInterfaceActionRepresentationView *_visualRepresentation; // @synthesize _visualRepresentation=__visualRepresentation;
@property (copy, nonatomic) NSString *classificationTitle; // @synthesize classificationTitle=_classificationTitle;
@property (readonly, nonatomic) UIView *customContentView; // @synthesize customContentView=_customContentView;
@property (strong, nonatomic) UIViewController *customContentViewController; // @synthesize customContentViewController=_customContentViewController;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (nonatomic, getter=_isFocused, setter=_setIsFocused:) BOOL focused; // @synthesize focused=_focused;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (strong, nonatomic, getter=_imageTintColor, setter=_setImageTintColor:) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property (strong, nonatomic) UIImage *leadingImage; // @synthesize leadingImage=_leadingImage;
@property (nonatomic) struct CGSize leadingImageLayoutSize; // @synthesize leadingImageLayoutSize=_leadingImageLayoutSize;
@property (nonatomic, getter=_isPreferred, setter=_setIsPreferred:) BOOL preferred; // @synthesize preferred=_preferred;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;
@property (nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property (strong, nonatomic, getter=_titleTextColor, setter=_setTitleTextColor:) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
@property (strong, nonatomic) UIImage *trailingImage; // @synthesize trailingImage=_trailingImage;
@property (nonatomic) struct CGSize trailingImageLayoutSize; // @synthesize trailingImageLayoutSize=_trailingImageLayoutSize;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic, getter=_visualStyle, setter=_setVisualStyle:) UIInterfaceActionVisualStyle *visualStyle; // @synthesize visualStyle=_visualStyle;
@property (readonly, nonatomic) NSPointerArray *weakDisplayPropertyObservers; // @synthesize weakDisplayPropertyObservers=_weakDisplayPropertyObservers;

+ (id)_observableDisplayProperties;
+ (void)_setInterfaceActionCanInvokeActionsWithoutPresentingController:(BOOL)arg1;
+ (id)actionWithCustomContentView:(id)arg1;
+ (id)actionWithCustomContentViewController:(id)arg1;
+ (id)actionWithTitle:(id)arg1 type:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (BOOL)changedProperties:(id)arg1 containsAny:(id)arg2;
- (void).cxx_destruct;
- (void)_addActionDisplayPropertyObserver:(id)arg1;
- (void)_invokeHandlerWithCompletionBlock:(CDUnknownBlockType)arg1;
- (struct CGSize)_layoutSizeForImageProperty:(id)arg1;
- (void)_notifyObserversDidChangeActionProperty:(id)arg1;
- (void)_notifyObserversVisualStyleDidChange;
- (void)_removeActionDisplayPropertyObserver:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithTitle:(id)arg1 type:(long long)arg2 customContentViewController:(id)arg3 customContentView:(id)arg4 handler:(CDUnknownBlockType)arg5;

@end

