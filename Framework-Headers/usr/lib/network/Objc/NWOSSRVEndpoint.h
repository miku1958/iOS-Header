//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NWConcrete_nw_endpoint.h>

__attribute__((visibility("hidden")))
@interface NWOSSRVEndpoint : NWConcrete_nw_endpoint
{
    char *name;
}

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3;
- (unsigned int)type;

@end
