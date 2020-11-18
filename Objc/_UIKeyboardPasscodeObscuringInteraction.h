//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIPointerInteractionDelegate-Protocol.h>

@class NSString, UIPointerInteraction, UIView;

__attribute__((visibility("hidden")))
@interface _UIKeyboardPasscodeObscuringInteraction : NSObject <UIPointerInteractionDelegate, UIInteraction>
{
    UIView *_view;
    UIPointerInteraction *_pointerInteraction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIPointerInteraction *pointerInteraction; // @synthesize pointerInteraction=_pointerInteraction;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)pointerInteraction:(id)arg1 regionForRequest:(id)arg2 defaultRegion:(id)arg3;
- (id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2;
- (void)willMoveToView:(id)arg1;

@end

