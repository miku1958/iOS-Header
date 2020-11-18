//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SettingsCellularUI/Loggable-Protocol.h>

@class CHManager, Logger, NSString, PSListController, PSSpecifier;

__attribute__((visibility("hidden")))
@interface PSUICallTimeGroup : NSObject <Loggable>
{
    Logger *_logger;
    PSListController *_hostController;
    CHManager *_callHistoryManager;
    PSSpecifier *_groupSpecifier;
    PSSpecifier *_currentCallTimeSpecifier;
    PSSpecifier *_lifetimeCallTimeSpecifier;
}

@property (strong, nonatomic) CHManager *callHistoryManager; // @synthesize callHistoryManager=_callHistoryManager;
@property (strong, nonatomic) PSSpecifier *currentCallTimeSpecifier; // @synthesize currentCallTimeSpecifier=_currentCallTimeSpecifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) PSListController *hostController; // @synthesize hostController=_hostController;
@property (strong, nonatomic) PSSpecifier *lifetimeCallTimeSpecifier; // @synthesize lifetimeCallTimeSpecifier=_lifetimeCallTimeSpecifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)callTime:(id)arg1;
- (id)callTimeDurationRestrictedToCurrentPeriod:(BOOL)arg1;
- (id)getLogger;
- (void)handleCallTimersChanged;
- (id)initWithListController:(id)arg1;
- (id)lifetimeCallTime:(id)arg1;
- (id)specifiers;

@end
