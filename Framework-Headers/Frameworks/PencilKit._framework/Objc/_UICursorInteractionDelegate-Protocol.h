//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PencilKit/NSObject-Protocol.h>

@class _UICursorInteraction, _UICursorRegion, _UICursorRequest, _UICursorStyle;
@protocol _UICursorInteractionAnimating;

@protocol _UICursorInteractionDelegate <NSObject>

@optional
- (_UICursorRegion *)cursorInteraction:(_UICursorInteraction *)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(_UICursorRegion *)arg3;
- (_UICursorRegion *)cursorInteraction:(_UICursorInteraction *)arg1 regionForRequest:(_UICursorRequest *)arg2 defaultRegion:(_UICursorRegion *)arg3;
- (_UICursorStyle *)cursorInteraction:(_UICursorInteraction *)arg1 styleForRegion:(_UICursorRegion *)arg2;
- (_UICursorStyle *)cursorInteraction:(_UICursorInteraction *)arg1 styleForRegion:(_UICursorRegion *)arg2 modifiers:(long long)arg3;
- (void)cursorInteraction:(_UICursorInteraction *)arg1 willEnterRegion:(_UICursorRegion *)arg2;
- (void)cursorInteraction:(_UICursorInteraction *)arg1 willEnterRegion:(_UICursorRegion *)arg2 withAnimator:(id<_UICursorInteractionAnimating>)arg3;
- (void)cursorInteraction:(_UICursorInteraction *)arg1 willExitRegion:(_UICursorRegion *)arg2;
- (void)cursorInteraction:(_UICursorInteraction *)arg1 willExitRegion:(_UICursorRegion *)arg2 withAnimator:(id<_UICursorInteractionAnimating>)arg3;
@end
