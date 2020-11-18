//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVFoundation/NSSecureCoding-Protocol.h>

@interface AVAssetTrackSegment : NSObject <NSSecureCoding>
{
    CDStruct_82206317 _timeMapping;
}

@property (readonly, nonatomic, getter=isEmpty) BOOL empty;
@property (readonly, nonatomic) CDStruct_82206317 timeMapping; // @synthesize timeMapping=_timeMapping;

+ (BOOL)supportsSecureCoding;
- (id)_initWithTimeMapping:(CDStruct_82206317)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

