//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer
{
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>> _touchActionsByTouchIdentifier;
    id<WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_updateState;
- (BOOL)canBePreventedByGestureRecognizer:(id)arg1;
- (BOOL)canPreventGestureRecognizer:(id)arg1;
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)arg1;
- (id)initWithTouchActionDelegate:(id)arg1;
- (void)setTouchActions:(OptionSet_6c8dcb60)arg1 forTouchIdentifier:(unsigned int)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
