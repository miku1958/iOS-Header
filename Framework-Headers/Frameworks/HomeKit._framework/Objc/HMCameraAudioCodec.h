//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/NSSecureCoding-Protocol.h>

@interface HMCameraAudioCodec : NSObject <NSSecureCoding>
{
    unsigned long long _audioCodec;
}

@property (readonly, nonatomic) unsigned long long audioCodec; // @synthesize audioCodec=_audioCodec;

+ (BOOL)isValid:(unsigned long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioCodecType:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

