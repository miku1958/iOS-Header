//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNImageBasedRequest.h>

@class NSArray;

@interface VNDetectHumanBodyPoseRequest : VNImageBasedRequest
{
}

@property (readonly, copy) NSArray *results; // @dynamic results;

+ (Class)configurationClass;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (id)supportedIdentifiedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)supportedIdentifiedPointKeysForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)supportedJointNamesForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)supportedJointsGroupNamesForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)supportedRecognizedPointGroupKeysForRevision:(unsigned long long)arg1 error:(id *)arg2;
+ (id)supportedRecognizedPointKeysForRevision:(unsigned long long)arg1 error:(id *)arg2;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (id)newDefaultDetectorOptionsForRequestRevision:(unsigned long long)arg1 session:(id)arg2;
- (BOOL)warmUpSession:(id)arg1 error:(id *)arg2;

@end

