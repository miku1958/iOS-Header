//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSUserDefaults;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CKDTapToRadarManager : NSObject
{
    NSObject<OS_dispatch_queue> *_alertQueue;
    NSUserDefaults *_userDefaults;
    NSMutableDictionary *_lastPromptDateByMessageHash;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *alertQueue; // @synthesize alertQueue=_alertQueue;
@property (strong, nonatomic) NSMutableDictionary *lastPromptDateByMessageHash; // @synthesize lastPromptDateByMessageHash=_lastPromptDateByMessageHash;
@property (strong, nonatomic) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

+ (id)sharedManager;
- (void).cxx_destruct;
- (id)_hashForMessage:(id)arg1;
- (id)_init;
- (id)_lastPromptDateForMessage:(id)arg1;
- (void)_launchTTRWithRequest:(id)arg1;
- (void)_lockedTriggerTapToRadarWithRequest:(id)arg1;
- (void)_notePromptAttemptForMessage:(id)arg1;
- (id)init;
- (void)triggerTapToRadarWithRequest:(id)arg1;

@end

