//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/IMAccountController.h>

@class NSMutableDictionary;

@interface IMSimulatedAccountController : IMAccountController
{
    NSMutableDictionary *_simulatedAccountsPerService;
}

- (void).cxx_destruct;
- (id)activeAccounts;
- (id)activeIMessageAccount;
- (id)activeSMSAccount;
- (id)init;
- (void)setSimulatedAccounts:(id)arg1 forServiceNamed:(id)arg2;

@end

