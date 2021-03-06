//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NWConcrete_nw_endpoint.h>

__attribute__((visibility("hidden")))
@interface NWOSURLEndpoint : NWConcrete_nw_endpoint
{
    struct __CFURL *url_ref;
    unsigned short port;
    char *url;
    char *scheme;
    char *hostname;
    char *path;
    char *sanitized_url;
    char url_hash[9];
}

- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (const char *)hostname;
- (BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3;
- (unsigned short)port;
- (unsigned int)type;

@end

