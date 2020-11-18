//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface CAMPowerController : NSObject
{
    BOOL __isBackgrounded;
    int __assertionIdentifierGenerator;
    int __powerPressureNotificationToken;
    NSMutableDictionary *__assertionsByIdentifier;
    NSObject<OS_dispatch_queue> *__powerControllerQueue;
    unsigned long long __backgroundTaskIdentifier;
}

@property (readonly, nonatomic) int _assertionIdentifierGenerator; // @synthesize _assertionIdentifierGenerator=__assertionIdentifierGenerator;
@property (readonly, nonatomic) NSMutableDictionary *_assertionsByIdentifier; // @synthesize _assertionsByIdentifier=__assertionsByIdentifier;
@property (readonly, nonatomic) unsigned long long _backgroundTaskIdentifier; // @synthesize _backgroundTaskIdentifier=__backgroundTaskIdentifier;
@property (nonatomic, getter=_isBackgrounded, setter=_setBackgrounded:) BOOL _isBackgrounded; // @synthesize _isBackgrounded=__isBackgrounded;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *_powerControllerQueue; // @synthesize _powerControllerQueue=__powerControllerQueue;
@property (readonly, nonatomic) int _powerPressureNotificationToken; // @synthesize _powerPressureNotificationToken=__powerPressureNotificationToken;

- (void).cxx_destruct;
- (void)_applicationWillEnterForeground:(id)arg1;
- (void)_applicationWillResignActive:(id)arg1;
- (void)_endBackgroundTaskIfNeeded;
- (void)_startBackgroundTaskIfNeeded;
- (void)addAssertionForIndentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;
- (void)dealloc;
- (id)description;
- (unsigned int)generateAssertionIdentifier;
- (id)init;
- (void)removeAssertionForIdentifier:(unsigned int)arg1 withReason:(unsigned int)arg2;

@end

