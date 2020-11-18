//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, SKUIClientContext, SKUIRedeemConfiguration, SSAccount, SSVRedeemCodeMetadata;

@interface SKUIRedeemPreflightResult : NSObject
{
    SSAccount *_account;
    SKUIClientContext *_clientContext;
    SSVRedeemCodeMetadata *_codeMetadata;
    NSError *_error;
    SKUIRedeemConfiguration *_redeemConfiguration;
    long long _resultType;
}

@property (strong, nonatomic) SSAccount *account; // @synthesize account=_account;
@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (strong, nonatomic) SSVRedeemCodeMetadata *codeMetadata; // @synthesize codeMetadata=_codeMetadata;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) SKUIRedeemConfiguration *redeemConfiguration; // @synthesize redeemConfiguration=_redeemConfiguration;
@property (nonatomic) long long resultType; // @synthesize resultType=_resultType;

- (void).cxx_destruct;

@end
