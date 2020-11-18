//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIEvent.h>

@class NSMapTable, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface UIHoverEvent : UIEvent
{
    NSMapTable *_touchesByWindow;
    NSMapTable *_deliveryTableByTouch;
    BOOL _hasOutstandingUpdates;
    NSMutableDictionary *_trackedHoverTouches;
}

@property (nonatomic) BOOL hasOutstandingUpdates; // @synthesize hasOutstandingUpdates=_hasOutstandingUpdates;
@property (strong, nonatomic) NSMutableDictionary *trackedHoverTouches; // @synthesize trackedHoverTouches=_trackedHoverTouches;

- (void).cxx_destruct;
- (id)_deliveryTableByTouchCreateIfNeeded:(id)arg1;
- (id)_gestureRecognizersForWindow:(id)arg1;
- (id)_init;
- (BOOL)_sendEventToGestureRecognizer:(id)arg1;
- (id)_touchesByWindow:(id)arg1 createIfNeeded:(BOOL)arg2;
- (id)allTouches;
- (id)hoverTouchForPathIndex:(long long)arg1;
- (void)removeHoverTouchForPathIndex:(long long)arg1;
- (void)removeTouch:(id)arg1 fromGestureRecognizer:(id)arg2;
- (void)setHoverTouch:(id)arg1 forPathIndex:(long long)arg2;
- (void)setNeedsHitTestReset;
- (void)setNeedsUpdate;
- (long long)subtype;
- (id)touchesForGestureRecognizer:(id)arg1;
- (id)touchesForView:(id)arg1;
- (id)touchesForWindow:(id)arg1;
- (long long)type;

@end

