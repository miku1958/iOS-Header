//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMIVideoAnalyzerDynamicConfiguration, HMIVideoAnalyzerResultOutcome, HMIVideoFragment, NSArray, NSSet, NSString;

@interface HMIVideoAnalyzerFragmentResult : HMFObject <HMFLogging, NSSecureCoding>
{
    HMIVideoFragment *_fragment;
    NSArray *_thumbnails;
    HMIVideoAnalyzerResultOutcome *_outcome;
    NSArray *_frameResults;
    HMIVideoAnalyzerDynamicConfiguration *_configuration;
    NSSet *_events;
}

@property (readonly) HMIVideoAnalyzerDynamicConfiguration *configuration; // @synthesize configuration=_configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSSet *events; // @synthesize events=_events;
@property (readonly) HMIVideoFragment *fragment; // @synthesize fragment=_fragment;
@property (readonly) NSArray *frameResults; // @synthesize frameResults=_frameResults;
@property (readonly) unsigned long long hash;
@property (readonly) HMIVideoAnalyzerResultOutcome *outcome; // @synthesize outcome=_outcome;
@property (readonly) Class superclass;
@property (readonly) NSArray *thumbnails; // @synthesize thumbnails=_thumbnails;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFragment:(id)arg1 events:(id)arg2 frameResults:(id)arg3 thumbnails:(id)arg4 configuration:(id)arg5 outcome:(id)arg6;
- (id)maxConfidenceEventForEventClass:(Class)arg1;
- (id)maxConfidenceEvents;

@end

