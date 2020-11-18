//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Internal-Protocol.h>

@class NSString, UIView;
@protocol UIPencilInteractionDelegate;

@interface UIPencilInteraction : NSObject <UIInteraction_Internal, UIInteraction>
{
    BOOL _enabled;
    id<UIPencilInteractionDelegate> _delegate;
    UIView *_view;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIPencilInteractionDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

+ (void)_setPrefersPencilOnlyDrawing:(BOOL)arg1;
+ (BOOL)hasSeenPencilPairingUI;
+ (long long)preferredTapAction;
+ (BOOL)prefersPencilOnlyDrawing;
- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)dealloc;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (void)performDelegateDidTap;
- (void)willMoveToView:(id)arg1;

@end
