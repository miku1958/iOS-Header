//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, NSURL;

@interface FCHLSStreamInf : NSObject
{
    NSURL *_url;
    unsigned long long _bandwidth;
    unsigned long long _averageBandwidth;
    NSString *_codecs;
    NSString *_audio;
}

@property (readonly, nonatomic) NSString *audio; // @synthesize audio=_audio;
@property (readonly, nonatomic) unsigned long long averageBandwidth; // @synthesize averageBandwidth=_averageBandwidth;
@property (readonly, nonatomic) unsigned long long averageBandwidthFallbackToPeak;
@property (readonly, nonatomic) unsigned long long bandwidth; // @synthesize bandwidth=_bandwidth;
@property (readonly, nonatomic) NSString *codecs; // @synthesize codecs=_codecs;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;

- (void).cxx_destruct;
- (id)description;
- (void)setPropertiesFromAttributeList:(id)arg1;

@end

