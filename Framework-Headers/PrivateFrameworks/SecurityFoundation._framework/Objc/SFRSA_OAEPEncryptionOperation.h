//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SecurityFoundation/SFRSAEncryptionOperation.h>

@protocol SFMaskGenerationFunction;

@interface SFRSA_OAEPEncryptionOperation : SFRSAEncryptionOperation
{
    id _oaepEncryptionOperationInternal;
}

@property (copy, nonatomic) id<SFMaskGenerationFunction> maskGenerationFunction;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1;
- (id)initWithKeySpecifier:(id)arg1 maskGenerationFunction:(id)arg2;

@end

