//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray;

@interface SUHitTestView : UIView
{
    NSMutableArray *_hitTestTargets;
}

- (void)addHitTestTarget:(id)arg1;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)removeHitTestTarget:(id)arg1;

@end

