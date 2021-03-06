//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIViewController.h>

@class UIUndoGestureInteraction, _UIActionWhenIdle;
@protocol UIInteraction;

__attribute__((visibility("hidden")))
@interface UIEditingOverlayViewController : UIViewController
{
    UIUndoGestureInteraction *_undoInteraction;
    _UIActionWhenIdle *_addPencilTextInputInteractionAction;
    id<UIInteraction> _pencilTextInputInteraction;
}

@property (strong, nonatomic) _UIActionWhenIdle *addPencilTextInputInteractionAction; // @synthesize addPencilTextInputInteractionAction=_addPencilTextInputInteractionAction;
@property (strong, nonatomic) id<UIInteraction> pencilTextInputInteraction; // @synthesize pencilTextInputInteraction=_pencilTextInputInteraction;
@property (strong, nonatomic) UIUndoGestureInteraction *undoInteraction; // @synthesize undoInteraction=_undoInteraction;

- (void).cxx_destruct;
- (void)_addInteractions;
- (void)_addPencilTextInputInteraction;
- (BOOL)_canShowWhileLocked;
- (void)_removeInteractions;
- (void)loadView;
- (void)updateEditingOverlayContainer;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

