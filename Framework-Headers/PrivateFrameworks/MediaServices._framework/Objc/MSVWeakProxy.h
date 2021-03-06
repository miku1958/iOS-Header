//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSProxy.h>

@class Protocol;

@interface MSVWeakProxy : NSProxy
{
    id _object;
    Protocol *_protocol;
}

@property (readonly, weak, nonatomic) id object; // @synthesize object=_object;
@property (readonly, nonatomic) Protocol *protocol; // @synthesize protocol=_protocol;

+ (id)proxyWithObject:(id)arg1 protocol:(id)arg2;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

