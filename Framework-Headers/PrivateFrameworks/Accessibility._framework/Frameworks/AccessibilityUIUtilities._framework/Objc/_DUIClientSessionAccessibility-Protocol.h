//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class _DUIAccessibilityDragStatus;

@protocol _DUIClientSessionAccessibility
- (oneway void)dragDidEndWithOperation:(unsigned long long)arg1;
- (oneway void)dragStatusDidChange:(_DUIAccessibilityDragStatus *)arg1;
- (oneway void)dragWillBeginWithReply:(void (^)(void))arg1;
@end

