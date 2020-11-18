//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesStore/ISOperation.h>

@class ISBiometricStore, NSNumber, NSString;

@interface ISBiometricUpdateTouchIDSettingsOperation : ISOperation
{
    CDUnknownBlockType _resultBlock;
    long long _status;
    NSNumber *_accountIdentifier;
    NSString *_attestationString;
    ISBiometricStore *_biometricStore;
}

@property (copy, nonatomic) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (copy, nonatomic) NSString *attestationString; // @synthesize attestationString=_attestationString;
@property (strong, nonatomic) ISBiometricStore *biometricStore; // @synthesize biometricStore=_biometricStore;
@property (copy) CDUnknownBlockType resultBlock; // @synthesize resultBlock=_resultBlock;
@property (readonly) long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (id)_newUpdateTouchIDSettingsOperation;
- (id)initWithAccountIdentifier:(id)arg1;
- (void)run;

@end

