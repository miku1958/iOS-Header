//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

__attribute__((visibility("hidden")))
@interface _UISearchControllerView : UIView
{
    BOOL __disableSearchBarContainerViewOrdering;
}

@property (nonatomic) BOOL _disableSearchBarContainerViewOrdering; // @synthesize _disableSearchBarContainerViewOrdering=__disableSearchBarContainerViewOrdering;

- (void)_addSubview:(id)arg1 positioned:(long long)arg2 relativeTo:(id)arg3;
- (void)_ensureContainerIsOnTop;
- (void)bringSubviewToFront:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)sendSubviewToBack:(id)arg1;

@end

