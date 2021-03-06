//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>

@interface HMDNaturalLightingEnabledRetryContext : HMFObject <NSCopying>
{
    BOOL _naturalLightingEnabled;
    unsigned long long _retryCount;
    CDUnknownBlockType _completion;
}

@property (readonly) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly) BOOL naturalLightingEnabled; // @synthesize naturalLightingEnabled=_naturalLightingEnabled;
@property unsigned long long retryCount; // @synthesize retryCount=_retryCount;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithNaturalLightingEnabled:(BOOL)arg1 completion:(CDUnknownBlockType)arg2 retryCount:(unsigned long long)arg3;

@end

