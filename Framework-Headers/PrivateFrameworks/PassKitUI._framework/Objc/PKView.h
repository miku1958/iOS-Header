//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSHashTable;

@interface PKView : UIView
{
    struct os_unfair_lock_s _observersLock;
    NSHashTable *_observers;
}

- (void).cxx_destruct;
- (void)addWindowObserver:(id)arg1;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)removeWindowObserver:(id)arg1;

@end

