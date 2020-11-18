//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKit/SKRequest.h>

@class NSString;

@interface SKPromotedIAPGetVisibilityRequest : SKRequest
{
    CDUnknownBlockType _completionHandler;
    NSString *_productId;
    NSString *_bundleId;
}

@property (copy, nonatomic) NSString *bundleId; // @synthesize bundleId=_bundleId;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (copy, nonatomic) NSString *productId; // @synthesize productId=_productId;

- (void).cxx_destruct;
- (void)_handleReply:(id)arg1;
- (void)_sendXPCMessage;
- (id)initWithProductId:(id)arg1 bundleId:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithProductId:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
