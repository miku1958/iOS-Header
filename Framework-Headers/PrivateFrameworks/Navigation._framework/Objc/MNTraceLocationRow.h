//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Navigation/MNTracePlayerTimelineStreamObjectType-Protocol.h>

@class MNLocation, MNLocationMatchInfo, NSError, NSString;

@interface MNTraceLocationRow : NSObject <MNTracePlayerTimelineStreamObjectType>
{
    double _timestamp;
    MNLocation *_location;
    NSError *_error;
    MNLocationMatchInfo *_matchInfo;
    long long _locationEventType;
    unsigned long long _originalMatchType;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) MNLocation *location; // @synthesize location=_location;
@property (nonatomic) long long locationEventType; // @synthesize locationEventType=_locationEventType;
@property (strong, nonatomic) MNLocationMatchInfo *matchInfo; // @synthesize matchInfo=_matchInfo;
@property (nonatomic) unsigned long long originalMatchType; // @synthesize originalMatchType=_originalMatchType;
@property (readonly, nonatomic) double position;
@property (readonly) Class superclass;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;

- (void).cxx_destruct;

@end

