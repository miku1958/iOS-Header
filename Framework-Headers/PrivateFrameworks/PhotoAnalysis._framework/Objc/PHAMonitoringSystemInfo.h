//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotoAnalysis/NSSecureCoding-Protocol.h>

@interface PHAMonitoringSystemInfo : NSObject <NSSecureCoding>
{
    unsigned long long _diskBytesReadPerInterval;
    unsigned long long _diskBytesWritePerInterval;
}

@property unsigned long long diskBytesReadPerInterval; // @synthesize diskBytesReadPerInterval=_diskBytesReadPerInterval;
@property unsigned long long diskBytesWritePerInterval; // @synthesize diskBytesWritePerInterval=_diskBytesWritePerInterval;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

