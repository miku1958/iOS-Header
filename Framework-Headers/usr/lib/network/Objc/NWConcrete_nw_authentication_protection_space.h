//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <network/OS_nw_authentication_protection_space-Protocol.h>

@class NSString;
@protocol OS_nw_endpoint;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_authentication_protection_space : NSObject <OS_nw_authentication_protection_space>
{
    NSObject<OS_nw_endpoint> *endpoint;
    unsigned int is_proxy:1;
    unsigned int __pad_bits:7;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

