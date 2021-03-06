//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Home/HFAnalyticsEvent.h>

@class NSNumber;

@interface HFAnalyticsFaceRecognitionRecentVisitorsListCountEvent : HFAnalyticsEvent
{
    NSNumber *_faceCropCount;
    NSNumber *_clusteredNoNamePersonCount;
    NSNumber *_unknownFaceCropCount;
    NSNumber *_unknownPersonCountTotal;
}

@property (strong, nonatomic) NSNumber *clusteredNoNamePersonCount; // @synthesize clusteredNoNamePersonCount=_clusteredNoNamePersonCount;
@property (strong, nonatomic) NSNumber *faceCropCount; // @synthesize faceCropCount=_faceCropCount;
@property (strong, nonatomic) NSNumber *unknownFaceCropCount; // @synthesize unknownFaceCropCount=_unknownFaceCropCount;
@property (strong, nonatomic) NSNumber *unknownPersonCountTotal; // @synthesize unknownPersonCountTotal=_unknownPersonCountTotal;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)payload;

@end

