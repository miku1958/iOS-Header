//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class UIGestureRecognizer;
@protocol _UIClickInteractionDriving;

@protocol _UIClickInteractionDriverDelegate <NSObject>
- (void)clickDriver:(id<_UIClickInteractionDriving>)arg1 didPerformStateChange:(unsigned long long)arg2;
- (BOOL)clickDriverShouldBegin:(id<_UIClickInteractionDriving>)arg1;

@optional
- (void)clickDriver:(id<_UIClickInteractionDriving>)arg1 didUpdateHighlightProgress:(double)arg2;
- (BOOL)clickDriver:(id<_UIClickInteractionDriving>)arg1 shouldDelayGestureRecognizer:(UIGestureRecognizer *)arg2;
@end

