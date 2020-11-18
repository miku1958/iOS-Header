//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NWConcrete_nw_endpoint.h>

@class NSObject;
@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_custom_endpoint : NWConcrete_nw_endpoint
{
    NSObject<OS_dispatch_data> *data;
    CDUnknownBlockType resolver_block;
    unsigned int type;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)arg1;
- (unsigned long long)getHash;
- (id)initWithType:(unsigned int)arg1 resolver:(CDUnknownBlockType)arg2 data:(id)arg3;
- (BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3;
- (unsigned int)type;

@end
