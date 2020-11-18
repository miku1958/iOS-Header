//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/NSURLSessionConfiguration.h>

#import <CFNetwork/NSCopying-Protocol.h>
#import <CFNetwork/NSSecureCoding-Protocol.h>

@interface __NSCFURLSessionConfiguration_Immutable : NSURLSessionConfiguration <NSCopying, NSSecureCoding>
{
    NSURLSessionConfiguration *_target;
}

+ (BOOL)supportsSecureCoding;
- (void *)_copyAttribute:(struct __CFString *)arg1;
- (BOOL)_isProxySession;
- (struct _CFHSTSPolicy *)copyHSTSPolicy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)disposition;
- (void)encodeWithCoder:(id)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (struct HTTPConnectionCacheLimits)getConnectionCacheLimits;
- (id)initWithTarget:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end
