//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <network/NWConcrete_nw_endpoint.h>

@class NSObject;
@protocol OS_nw_txt_record;

__attribute__((visibility("hidden")))
@interface NWConcrete_nw_hostname_endpoint : NWConcrete_nw_endpoint
{
    char *hostname;
    unsigned short port;
    unsigned short priority;
    unsigned short weight;
    NSObject<OS_nw_txt_record> *txt_record;
}

- (void).cxx_destruct;
- (id)copyDictionary;
- (id)copyEndpoint;
- (char *)createDescription:(BOOL)arg1;
- (void)dealloc;
- (const char *)domainForPolicy;
- (unsigned long long)getHash;
- (const char *)hostname;
- (id)initWithHostname:(const char *)arg1 port:(unsigned short)arg2;
- (BOOL)isEqualToEndpoint:(id)arg1 matchInterface:(BOOL)arg2 matchParent:(BOOL)arg3;
- (unsigned short)port;
- (unsigned short)priority;
- (void)setPriority:(unsigned short)arg1;
- (void)setWeight:(unsigned short)arg1;
- (unsigned int)type;
- (unsigned short)weight;

@end
