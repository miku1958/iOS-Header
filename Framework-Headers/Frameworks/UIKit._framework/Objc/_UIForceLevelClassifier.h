//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSObserver-Protocol.h>

@class NSArray, NSMutableDictionary, NSObservationSource, NSString;
@protocol _UIForceLevelClassifierDelegate;

@interface _UIForceLevelClassifier : NSObject <NSObserver>
{
    NSObservationSource *_progressTouchForceObservable;
    NSMutableDictionary *_cachedProgressObservables;
    NSArray *_delegateObservations;
    BOOL _respectsSystemGestureTouchFiltering;
    long long _currentForceLevel;
    id<_UIForceLevelClassifierDelegate> _delegate;
    double _currentTouchForceMultiplier;
}

@property (readonly, nonatomic) long long currentForceLevel; // @synthesize currentForceLevel=_currentForceLevel;
@property (nonatomic) double currentTouchForceMultiplier; // @synthesize currentTouchForceMultiplier=_currentTouchForceMultiplier;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<_UIForceLevelClassifierDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL respectsSystemGestureTouchFiltering; // @synthesize respectsSystemGestureTouchFiltering=_respectsSystemGestureTouchFiltering;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_accessibilityForceSensitivityChanged:(id)arg1;
- (void)_notifyDelegateOfProgress:(double)arg1 toForceLevel:(long long)arg2;
- (void)dealloc;
- (id)init;
- (id)observableForProgressToForceLevel:(long long)arg1;
- (id)observableForProgressToForceLevel:(long long)arg1 minimumRequiredForceLevel:(long long)arg2;
- (void)observeTouchWithForceValue:(double)arg1 atTimestamp:(double)arg2 withCentroidAtLocation:(struct CGPoint)arg3;
- (void)receiveObservedValue:(id)arg1;
- (void)reset;
- (void)setCurrentForceLevel:(long long)arg1;
- (void)touchForceMultiplierDidChange;
- (BOOL)wantsUnclampedForceValues;

@end

