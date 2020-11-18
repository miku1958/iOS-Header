//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <coreroutine/RTEvent.h>

#import <coreroutine/NSSecureCoding-Protocol.h>

@class NSString;

@interface RTEventAudio : RTEvent <NSSecureCoding>
{
    NSString *_deviceIdentifier;
    NSString *_deviceName;
    long long _audioState;
    long long _audioSource;
}

@property (nonatomic) long long audioSource; // @synthesize audioSource=_audioSource;
@property (nonatomic) long long audioState; // @synthesize audioState=_audioState;
@property (strong, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
@property (strong, nonatomic) NSString *deviceName; // @synthesize deviceName=_deviceName;

+ (id)stringFromAudioState:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 deviceName:(id)arg2 audioState:(long long)arg3 audioSource:(long long)arg4 source:(long long)arg5 startDate:(id)arg6 endDate:(id)arg7;

@end
