//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGestureRecognizer.h>

@class UIDragEvent, _UIDropSessionImpl, _UIInternalDraggingSessionDestination;
@protocol UIDragGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface UIDragGestureRecognizer : UIGestureRecognizer
{
    UIDragEvent *_dragEvent;
}

@property (weak, nonatomic) id<UIDragGestureRecognizerDelegate> delegate; // @dynamic delegate;
@property (readonly, weak, nonatomic, getter=_dragEvent) UIDragEvent *dragEvent; // @synthesize dragEvent=_dragEvent;
@property (readonly, nonatomic) _UIDropSessionImpl *dropSession;
@property (readonly, nonatomic) _UIInternalDraggingSessionDestination *sessionDestination;

- (void).cxx_destruct;
- (BOOL)_shouldReceivePress:(id)arg1;
- (BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint)locationInView:(id)arg1;
- (BOOL)shouldReceiveEvent:(id)arg1;

@end

