//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/FBSDisplayLayoutObserver-Protocol.h>

@class FBSDisplayLayoutMonitor, NSArray, NSString;

@interface SBOrientationAggdLogger : NSObject <FBSDisplayLayoutObserver>
{
    FBSDisplayLayoutMonitor *_layoutMonitor;
    long long _currentOrientation;
    unsigned long long _currentOrientationStartTime;
    NSArray *_currentElements;
    BOOL _isKeyboardOnScreen;
    unsigned long long _keyboardOnScreenStartTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_bucketedElapsedTimeWithStartTime:(unsigned long long)arg1;
- (void)_keyboardDidShow:(id)arg1;
- (void)_keyboardWillHide:(id)arg1;
- (void)_noteSignificantTimeChanged:(id)arg1;
- (void)_orientationLockChanged:(id)arg1;
- (void)_saveOrientationLockAggdValues;
- (void)dealloc;
- (id)init;
- (void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3;

@end
