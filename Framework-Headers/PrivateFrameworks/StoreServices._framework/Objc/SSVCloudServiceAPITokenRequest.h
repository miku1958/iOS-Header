//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import <StoreServices/SSXPCCoding-Protocol.h>

@class NSString;

@interface SSVCloudServiceAPITokenRequest : SSRequest <SSXPCCoding>
{
    NSString *_clientToken;
}

@property (readonly, copy, nonatomic) NSString *clientToken; // @synthesize clientToken=_clientToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyXPCEncoding;
- (id)initWithClientToken:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (void)startWithResponseBlock:(CDUnknownBlockType)arg1;

@end
