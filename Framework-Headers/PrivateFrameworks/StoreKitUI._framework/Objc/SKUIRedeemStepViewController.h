//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSOperationQueue, SKUIClientContext, SKUIRedeemConfiguration;
@protocol SKUIRedeemStepDelegate;

@interface SKUIRedeemStepViewController : UIViewController
{
    SKUIClientContext *_clientContext;
    NSOperationQueue *_operationQueue;
    SKUIRedeemConfiguration *_configuration;
    id<SKUIRedeemStepDelegate> _redeemStepDelegate;
}

@property (strong, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (strong, nonatomic) SKUIRedeemConfiguration *configuration; // @synthesize configuration=_configuration;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (weak, nonatomic) id<SKUIRedeemStepDelegate> redeemStepDelegate; // @synthesize redeemStepDelegate=_redeemStepDelegate;
@property (readonly, nonatomic) BOOL shouldShowPassbookLearnMore;

- (void).cxx_destruct;

@end

