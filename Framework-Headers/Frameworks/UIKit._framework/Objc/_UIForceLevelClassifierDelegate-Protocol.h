//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class _UIForceLevelClassifier;

@protocol _UIForceLevelClassifierDelegate <NSObject>
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 currentForceLevelDidChange:(long long)arg2;

@optional
- (void)_forceLevelClassifier:(_UIForceLevelClassifier *)arg1 didUpdateProgress:(double)arg2 toForceLevel:(long long)arg3;
- (void)_forceLevelClassifierDidReset:(_UIForceLevelClassifier *)arg1;
@end
