//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, _UIKBRTTouchDrifting;

@protocol _UIKBRTTouchDriftingDelegate
- (unsigned long long)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 fingerIDFortouchIdentifier:(id)arg2;
- (struct CGPoint)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchCenterForFingerID:(unsigned long long)arg2;
- (NSSet *)_uikbrtTouchDrifting:(_UIKBRTTouchDrifting *)arg1 touchIdentifiersForFingerID:(unsigned long long)arg2;
- (void)_uikbrtTouchDriftingStateChanged:(_UIKBRTTouchDrifting *)arg1;
@end

