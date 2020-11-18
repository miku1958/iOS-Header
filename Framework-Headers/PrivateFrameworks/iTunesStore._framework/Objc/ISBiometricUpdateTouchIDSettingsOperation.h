//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, NSArray, NSNumber, NSString;

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation
{
    BOOL _regeneratePublicKey;
    BOOL _shouldSuppressAuthPrompts;
    CDUnknownBlockType _resultBlock;
    long long _status;
    NSNumber *_accountIdentifier;
    NSString *_attestationStringPurchase;
    NSString *_attestationStringExtendedActions;
    ISBiometricStore *_biometricStore;
    NSArray *_certChainPrimary;
    NSArray *_certChainExtended;
}

@property (copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSString *attestationStringExtendedActions; // @synthesize attestationStringExtendedActions=_attestationStringExtendedActions;
@property (copy, nonatomic) NSString *attestationStringPurchase; // @synthesize attestationStringPurchase=_attestationStringPurchase;
@property (strong, nonatomic) ISBiometricStore *biometricStore; // @synthesize biometricStore=_biometricStore;
@property (copy, nonatomic) NSArray *certChainExtended; // @synthesize certChainExtended=_certChainExtended;
@property (copy, nonatomic) NSArray *certChainPrimary; // @synthesize certChainPrimary=_certChainPrimary;
@property BOOL regeneratePublicKey; // @synthesize regeneratePublicKey=_regeneratePublicKey;
@property (copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property BOOL shouldSuppressAuthPrompts; // @synthesize shouldSuppressAuthPrompts=_shouldSuppressAuthPrompts;
@property (readonly) long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperation;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)run;

@end
