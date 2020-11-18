//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>

@class HMIFaceTracker, NSMutableDictionary, NSString;

@interface HMISessionEntityManager : HMFObject <HMFLogging>
{
    HMIFaceTracker *_faceTracker;
    NSMutableDictionary *_sessionUUIDToPreviousFaceIndex;
    NSMutableDictionary *_sessionUUIDToPreviousFaceprints;
    NSMutableDictionary *_sessionEntities;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *sessionEntities; // @synthesize sessionEntities=_sessionEntities;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)assignSessionEntitiesToPersonWithFaceEvents:(id)arg1 personWithoutFaceEvents:(id)arg2 personWithFilteredFaceEvents:(id)arg3 videoFrame:(id)arg4;
- (void)handleMotionDetection:(id)arg1 sessionPTS:(CDStruct_1b6d18a9)arg2;
- (id)initWithFrameDimensions:(struct CGSize)arg1;

@end
