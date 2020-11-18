//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterNewFlowVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    BOOL _filterInbound;
    BOOL _filterOutbound;
    unsigned long long _peekInboundBytes;
    unsigned long long _peekOutboundBytes;
}

@property BOOL filterInbound; // @synthesize filterInbound=_filterInbound;
@property BOOL filterOutbound; // @synthesize filterOutbound=_filterOutbound;
@property unsigned long long peekInboundBytes; // @synthesize peekInboundBytes=_peekInboundBytes;
@property unsigned long long peekOutboundBytes; // @synthesize peekOutboundBytes=_peekOutboundBytes;

+ (id)URLAppendStringVerdictWithMapKey:(id)arg1;
+ (id)allowVerdict;
+ (id)dropVerdict;
+ (id)filterDataVerdictWithFilterInbound:(BOOL)arg1 peekInboundBytes:(unsigned long long)arg2 filterOutbound:(BOOL)arg3 peekOutboundBytes:(unsigned long long)arg4;
+ (id)needRulesVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

