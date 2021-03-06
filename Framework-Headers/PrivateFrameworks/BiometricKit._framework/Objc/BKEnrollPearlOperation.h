//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiometricKit/BKEnrollOperation.h>

@class BKIdentity;
@protocol BKEnrollPearlOperationDelegate;

@interface BKEnrollPearlOperation : BKEnrollOperation
{
    BOOL _clientToComplete;
    BKIdentity *_augmentedIdentity;
}

@property (strong, nonatomic) BKIdentity *augmentedIdentity; // @synthesize augmentedIdentity=_augmentedIdentity;
@property (nonatomic) BOOL clientToComplete; // @synthesize clientToComplete=_clientToComplete;
@property (weak, nonatomic) id<BKEnrollPearlOperationDelegate> delegate; // @dynamic delegate;

- (void).cxx_destruct;
- (BOOL)completeWithError:(id *)arg1;
- (BOOL)resumeWithError:(id *)arg1;
- (BOOL)suspendWithError:(id *)arg1;

@end

