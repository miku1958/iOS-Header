//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CacheDelete/CDXPCService.h>

@class NSString;

@interface CDNamedXPCService : CDXPCService
{
    NSString *_xpcServiceName;
    unsigned long long _options;
}

@property (nonatomic) unsigned long long options; // @synthesize options=_options;
@property (strong, nonatomic) NSString *xpcServiceName; // @synthesize xpcServiceName=_xpcServiceName;

- (void).cxx_destruct;
- (id)initWithInfo:(id)arg1;
- (void)obtainXPCConnection:(CDUnknownBlockType)arg1;

@end
