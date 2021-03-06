//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>

@class NSString, UILongPressGestureRecognizer, UIView;

__attribute__((visibility("hidden")))
@interface UITextTouchObservingInteraction : NSObject <UIGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;
    UILongPressGestureRecognizer *_longPressGesture;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UILongPressGestureRecognizer *longPressGesture; // @synthesize longPressGesture=_longPressGesture;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)_addGestureRecognizers;
- (void)_createGestureRecognizersIfNecessary;
- (void)_removeGestureRecognizers;
- (void)didMoveToView:(id)arg1;
- (void)longPressObserved:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end

