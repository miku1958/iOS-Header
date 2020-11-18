//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TROperation.h>

@class ACAccount, NSSet;

@interface TRCompanionAuthOperation : TROperation
{
    ACAccount *_account;
    NSSet *_targetedServices;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) NSSet *targetedServices; // @synthesize targetedServices=_targetedServices;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1;
- (void)execute;

@end
