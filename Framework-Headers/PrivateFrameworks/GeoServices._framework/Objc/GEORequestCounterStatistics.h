//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface GEORequestCounterStatistics : NSObject <NSSecureCoding>
{
    unsigned long long _bytesTransmitted;
    unsigned long long _bytesReceived;
    NSMutableDictionary *_resultCounts;
}

@property (readonly, nonatomic) unsigned long long bytesReceived; // @synthesize bytesReceived=_bytesReceived;
@property (readonly, nonatomic) unsigned long long bytesTransmitted; // @synthesize bytesTransmitted=_bytesTransmitted;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (unsigned long long)countForResult:(unsigned char)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (void)incrementBytesReceived:(unsigned long long)arg1;
- (void)incrementBytesTransmitted:(unsigned long long)arg1;
- (void)incrementCount:(unsigned long long)arg1 forResult:(unsigned char)arg2;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
