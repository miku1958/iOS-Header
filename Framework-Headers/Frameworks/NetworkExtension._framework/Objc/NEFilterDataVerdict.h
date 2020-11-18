//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NetworkExtension/NEFilterVerdict.h>

#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEFilterDataVerdict : NEFilterVerdict <NSSecureCoding, NSCopying>
{
    long long _statisticsReportFrequency;
    unsigned long long _passBytes;
    unsigned long long _peekBytes;
}

@property unsigned long long passBytes; // @synthesize passBytes=_passBytes;
@property unsigned long long peekBytes; // @synthesize peekBytes=_peekBytes;
@property long long statisticsReportFrequency; // @synthesize statisticsReportFrequency=_statisticsReportFrequency;

+ (id)allowVerdict;
+ (id)dataVerdictWithPassBytes:(unsigned long long)arg1 peekBytes:(unsigned long long)arg2;
+ (id)dropVerdict;
+ (id)needRulesVerdict;
+ (id)pauseVerdict;
+ (id)remediateVerdictWithRemediationURLMapKey:(id)arg1 remediationButtonTextMapKey:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (long long)filterAction;
- (id)initWithCoder:(id)arg1;

@end
