//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosGraph/PGGraphIngestPlace-Protocol.h>

@class NSString;

@interface PGGraphResolvedPlace : NSObject <PGGraphIngestPlace>
{
    NSString *_placeInterestType;
    double _confidence;
}

@property (readonly, nonatomic) double confidence; // @synthesize confidence=_confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *placeInterestType; // @synthesize placeInterestType=_placeInterestType;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlaceOfInterestType:(id)arg1 confidence:(double)arg2;

@end
