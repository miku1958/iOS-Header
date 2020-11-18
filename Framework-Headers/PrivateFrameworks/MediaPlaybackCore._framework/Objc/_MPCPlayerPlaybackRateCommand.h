//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import <MediaPlaybackCore/MPCPlayerPlaybackRateCommand-Protocol.h>

@class NSArray, NSString;

@interface _MPCPlayerPlaybackRateCommand : _MPCPlayerItemCommand <MPCPlayerPlaybackRateCommand>
{
    float _preferredPlaybackRate;
    NSArray *_supportedPlaybackRates;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float preferredPlaybackRate; // @synthesize preferredPlaybackRate=_preferredPlaybackRate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *supportedPlaybackRates; // @synthesize supportedPlaybackRates=_supportedPlaybackRates;

- (void).cxx_destruct;
- (id)setPlaybackRate:(float)arg1;

@end
