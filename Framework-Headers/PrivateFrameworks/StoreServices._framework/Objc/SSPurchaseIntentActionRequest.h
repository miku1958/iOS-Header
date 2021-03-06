//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSPurchaseIntentActionRequest : SSRequest <SSXPCCoding>
{
    NSString *_appBundleId;
    unsigned long long _action;
}

@property (nonatomic) unsigned long long action; // @synthesize action=_action;
@property (copy, nonatomic) NSString *appBundleId; // @synthesize appBundleId=_appBundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;

@end

