//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class _CDContextualChangeRegistration;
@protocol _CDContext;

@interface SUCSScheduler : NSObject
{
    id<_CDContext> _context;
    _CDContextualChangeRegistration *_registration;
}

+ (int)_batteryLevel;
+ (BOOL)_callInProgress;
+ (BOOL)_getBoolForKeyPath:(id)arg1;
+ (int)_getIntForKeyPath:(id)arg1;
+ (BOOL)_hasNetworkConnection;
+ (id)batteryLevelPredicate:(id)arg1;
+ (id)carplayPredicate:(BOOL)arg1;
+ (id)networkPredicate:(BOOL)arg1;
+ (id)phoneCallPredicate:(BOOL)arg1;
- (void)dealloc;
- (id)init;
- (void)registerInstallAlertConditionsWithHandler:(CDUnknownBlockType)arg1;
- (void)unregisterInstallationAlertAction;

@end
