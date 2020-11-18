//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSObject, NSString, SKUIClientContext, SKUIRedeemConfiguration;
@protocol OS_dispatch_queue;

@interface SKUIRedeemPreflightOperation : NSOperation
{
    SKUIClientContext *_clientContext;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _loadsRedeemCodeMetadata;
    CDUnknownBlockType _outputBlock;
    NSString *_redeemCode;
    SKUIRedeemConfiguration *_redeemConfiguration;
    BOOL _forcesAuthentication;
}

@property (nonatomic) BOOL forcesAuthentication; // @synthesize forcesAuthentication=_forcesAuthentication;
@property BOOL loadsRedeemCodeMetadata;
@property (copy) CDUnknownBlockType outputBlock;
@property (strong) SKUIRedeemConfiguration *redeemConfiguration;

- (void).cxx_destruct;
- (id)_authenticationContext;
- (id)_initSKUIRedeemPreflightOperation;
- (id)_redeemCodeMetadataWithClientContext:(id)arg1;
- (id)init;
- (id)initWithClientContext:(id)arg1 redeemCode:(id)arg2 forcesAuthentication:(BOOL)arg3;
- (void)main;

@end

