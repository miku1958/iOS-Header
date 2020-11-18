//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface AKConfiguration : NSObject
{
    NSMutableDictionary *_cachedSettings;
    int _notificationToken;
    NSObject<OS_dispatch_queue> *_settingsQueue;
}

@property (nonatomic) long long shouldDisablePETs;
@property (nonatomic) long long shouldFakeAuthSuccess;

+ (id)sharedConfiguration;
- (void).cxx_destruct;
- (id)configurationValueForKey:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)setConfigurationValue:(id)arg1 forKey:(id)arg2;

@end
