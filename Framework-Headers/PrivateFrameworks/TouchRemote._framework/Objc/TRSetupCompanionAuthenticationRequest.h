//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TouchRemote/TRRequestMessage.h>

@class ACAccount, AKDevice, NSSet;

@interface TRSetupCompanionAuthenticationRequest : TRRequestMessage
{
    ACAccount *_account;
    NSSet *_targetedAccountServices;
    AKDevice *_companionDevice;
}

@property (strong, nonatomic) ACAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) AKDevice *companionDevice; // @synthesize companionDevice=_companionDevice;
@property (strong, nonatomic) NSSet *targetedAccountServices; // @synthesize targetedAccountServices=_targetedAccountServices;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

