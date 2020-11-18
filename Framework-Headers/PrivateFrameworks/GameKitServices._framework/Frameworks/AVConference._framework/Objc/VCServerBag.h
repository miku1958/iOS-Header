//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCServerBag : NSObject
{
    struct _opaque_pthread_cond_t isLoadedCondition;
    struct _opaque_pthread_mutex_t isLoadedMutex;
    BOOL isLoaded;
    id observer;
}

+ (void)checkKeysAgainstHardcodedPrefs:(id)arg1;
+ (void)pullStoreBagKeys;
+ (void)retrieveBag;
+ (id)sharedInstance;
+ (BOOL)verifyRequiredKeys:(id *)arg1;
+ (BOOL)verifyRequiredKeys:(id)arg1 withError:(id *)arg2;
+ (BOOL)verifyRequiredVoiceChatKeys:(id *)arg1;
- (id)init;
- (void)waitForBagLoad;

@end

