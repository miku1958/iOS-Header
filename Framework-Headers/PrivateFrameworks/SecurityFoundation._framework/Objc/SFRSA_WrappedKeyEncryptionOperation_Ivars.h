//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation;

@interface SFRSA_WrappedKeyEncryptionOperation_Ivars : NSObject
{
    SFRSAEncryptionOperation *keyWrappingOperation;
    SFSymmetricEncryptionOperation *sessionEncryptionOperation;
}

- (void).cxx_destruct;

@end

