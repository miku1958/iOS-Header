//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;

@interface NTKSensitiveUIMonitor : NSObject
{
    NSHashTable *_observers;
    int _notifyToken;
    BOOL _hideSensitiveUI;
    BOOL _needPrefsUpdate;
}

+ (id)sharedMonitor;
- (void).cxx_destruct;
- (void)addSensitiveUIObserver:(id)arg1;
- (BOOL)faceStyleIsSensitive:(long long)arg1;
- (void)removeSensitiveUIObserver:(id)arg1;
- (BOOL)shouldHideSensitiveUI;
- (BOOL)shouldHideSensitiveUIForFaceStyle:(long long)arg1;

@end
