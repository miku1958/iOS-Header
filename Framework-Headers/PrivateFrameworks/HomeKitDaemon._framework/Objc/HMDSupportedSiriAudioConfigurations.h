//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAudioStreamCodecConfiguration, NSArray;

@interface HMDSupportedSiriAudioConfigurations : NSObject
{
    long long _siriInputType;
    NSArray *_supportedConfigurations;
    HMDAudioStreamCodecConfiguration *_selectedConfiguration;
}

@property (strong, nonatomic) HMDAudioStreamCodecConfiguration *selectedConfiguration; // @synthesize selectedConfiguration=_selectedConfiguration;
@property (nonatomic) long long siriInputType; // @synthesize siriInputType=_siriInputType;
@property (strong, nonatomic) NSArray *supportedConfigurations; // @synthesize supportedConfigurations=_supportedConfigurations;

- (void).cxx_destruct;

@end

