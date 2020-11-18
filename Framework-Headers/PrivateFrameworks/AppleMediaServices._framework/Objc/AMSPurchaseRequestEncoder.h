//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSURLRequestEncoder.h>

@class AMSPurchaseContext, NSObject;
@protocol AMSBagProtocol, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AMSPurchaseRequestEncoder : AMSURLRequestEncoder
{
    id<AMSBagProtocol> _bag;
    AMSPurchaseContext *_context;
    NSObject<OS_dispatch_queue> *_purchaseRequestQueue;
}

@property (readonly, nonatomic) AMSPurchaseContext *context; // @synthesize context=_context;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *purchaseRequestQueue; // @synthesize purchaseRequestQueue=_purchaseRequestQueue;

+ (long long)_anisetteTypeFromAccount:(id)arg1;
+ (id)_parametersFromContext:(id)arg1 error:(id *)arg2;
+ (void)configureRequest:(id)arg1 context:(id)arg2 bag:(id)arg3 error:(id *)arg4;
- (void).cxx_destruct;
- (id)_bagURL;
- (id)bag;
- (id)encodeRequest;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 bag:(id)arg2;
- (void)setBag:(id)arg1;

@end
