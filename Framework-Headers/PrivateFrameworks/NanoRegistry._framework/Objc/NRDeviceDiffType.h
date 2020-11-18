//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NSCopying-Protocol.h>
#import <NanoRegistry/NSSecureCoding-Protocol.h>

@class NRDeviceDiff;

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding>
{
    NRDeviceDiff *_diff;
    unsigned long long _changeType;
}

@property (readonly, nonatomic) unsigned long long changeType; // @synthesize changeType=_changeType;
@property (readonly, nonatomic) NRDeviceDiff *diff; // @synthesize diff=_diff;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;

@end
