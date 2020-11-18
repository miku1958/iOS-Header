//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMapTable;

@interface SBUIBannerTargetManager : NSObject
{
    NSHashTable *_proxies;
    NSMapTable *_implementationToProxyMap;
    NSHashTable *_observers;
}

@property (readonly, strong, nonatomic) NSArray *targets;

+ (id)sharedInstance;
- (void)_notifyObservers:(CDUnknownBlockType)arg1;
- (id)_proxyForTargetImplementation:(id)arg1;
- (void)_registerTargetImplementation:(id)arg1;
- (void)_unregisterTargetImplementation:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end

