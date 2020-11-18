//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

@interface _CDSiriLearningSettings : NSObject
{
    BOOL _hasPrefsAccess;
    int _notifyToken;
    struct os_unfair_lock_s _lock;
    NSArray *_allLearningDisabledBundleIDs;
    NSMutableArray *_delegates;
}

@property (readonly, nonatomic) NSArray *allLearningDisabledBundleIDs;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (BOOL)isLearningDisabledForBundleID:(id)arg1;
- (void)startSanitizingInteractionStore:(id)arg1;
- (void)startSanitizingKnowledgeStore:(id)arg1;
- (void)stopSanitizing;

@end
