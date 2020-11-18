//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MPModelPlayEvent, MPModelSong, NSData, NSString;

@interface MPCReportingLyricsViewEvent : NSObject
{
    MPModelSong *_modelSong;
    MPModelPlayEvent *_modelPlayEvent;
    double _visibleDuration;
    NSString *_featureName;
    NSData *_recommendationData;
    long long _sourceType;
}

@property (copy, nonatomic) NSString *featureName; // @synthesize featureName=_featureName;
@property (strong, nonatomic) MPModelPlayEvent *modelPlayEvent; // @synthesize modelPlayEvent=_modelPlayEvent;
@property (strong, nonatomic) MPModelSong *modelSong; // @synthesize modelSong=_modelSong;
@property (copy, nonatomic) NSData *recommendationData; // @synthesize recommendationData=_recommendationData;
@property (nonatomic) long long sourceType; // @synthesize sourceType=_sourceType;
@property (nonatomic) double visibleDuration; // @synthesize visibleDuration=_visibleDuration;

- (void).cxx_destruct;

@end
