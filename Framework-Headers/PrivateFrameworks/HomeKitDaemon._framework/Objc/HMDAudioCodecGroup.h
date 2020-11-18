//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreHAP/HAPNumberParser.h>

#import <HomeKitDaemon/NSCopying-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@interface HMDAudioCodecGroup : HAPNumberParser <NSCopying, NSSecureCoding>
{
    unsigned long long _codec;
}

@property (readonly, nonatomic) unsigned long long codec; // @synthesize codec=_codec;

+ (id)arrayWithCodecs:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)description:(id)arg1 indent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAudioCodecGroup:(unsigned long long)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTLVData:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
