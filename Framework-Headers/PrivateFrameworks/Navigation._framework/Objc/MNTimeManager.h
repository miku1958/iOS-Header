//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MNObserverHashTable;
@protocol MNTimeProvider;

__attribute__((visibility("hidden")))
@interface MNTimeManager : NSObject
{
    MNObserverHashTable *_timeManagerObservers;
    id<MNTimeProvider> _provider;
}

@property (strong, nonatomic) id<MNTimeProvider> provider; // @synthesize provider=_provider;

+ (id)currentDate;
+ (double)currentTime;
+ (id)sharedManager;
- (void).cxx_destruct;
- (void)_resetToDefaultProvider;
- (void)addObserver:(id)arg1;
- (id)init;
- (void)removeObserver:(id)arg1;

@end
