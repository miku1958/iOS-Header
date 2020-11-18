//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class NSError, NSString;

@protocol SUAutoInstallOperationClientHandler <NSObject>
- (void)_noteAutoInstallOperationDidConsent;
- (void)_noteAutoInstallOperationDidExpireWithError:(NSError *)arg1;
- (void)_noteAutoInstallOperationIsReadyToInstall:(void (^)(BOOL, NSError *))arg1;
- (void)_noteAutoInstallOperationPasscodePolicyChanged:(unsigned long long)arg1;
- (void)_noteAutoInstallOperationWasCancelled;
- (NSString *)uniqueIdentifier;
@end
