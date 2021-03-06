//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlaybackCore/_MPCPlayerItemCommand.h>

#import <MediaPlaybackCore/MPCPlayerRateCommand-Protocol.h>

@class NSString;

@interface _MPCPlayerRateCommand : _MPCPlayerItemCommand <MPCPlayerRateCommand>
{
    float _minimumValue;
    float _maximumValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) float maximumValue; // @synthesize maximumValue=_maximumValue;
@property (nonatomic) float minimumValue; // @synthesize minimumValue=_minimumValue;
@property (readonly) Class superclass;

- (id)changeValue:(float)arg1;

@end

