//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKOperation.h>

@class BKIdentity, NSData;
@protocol BKExtendEnrollTouchIDOperationDelegate;

@interface BKExtendEnrollTouchIDOperation : BKOperation
{
    BKIdentity *_identity;
    NSData *_credentialSet;
}

@property (copy, nonatomic) NSData *credentialSet; // @synthesize credentialSet=_credentialSet;
@property (weak, nonatomic) id<BKExtendEnrollTouchIDOperationDelegate> delegate; // @dynamic delegate;
@property (strong, nonatomic) BKIdentity *identity; // @synthesize identity=_identity;

- (void).cxx_destruct;

@end
