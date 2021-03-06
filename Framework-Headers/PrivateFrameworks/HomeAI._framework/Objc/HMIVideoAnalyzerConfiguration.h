//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeAI/HMFLogging-Protocol.h>
#import <HomeAI/NSSecureCoding-Protocol.h>

@class HMICamera, NSString;

@interface HMIVideoAnalyzerConfiguration : HMFObject <HMFLogging, NSSecureCoding>
{
    BOOL _transcode;
    BOOL _recognizeFaces;
    double _minFrameQuality;
    double _minFrameScale;
    unsigned long long _thumbnailHeight;
    double _maxFragmentAnalysisDuration;
    HMICamera *_camera;
    CDStruct_1b6d18a9 _thumbnailInterval;
    CDStruct_1b6d18a9 _maxFragmentDuration;
}

@property (strong) HMICamera *camera; // @synthesize camera=_camera;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property double maxFragmentAnalysisDuration; // @synthesize maxFragmentAnalysisDuration=_maxFragmentAnalysisDuration;
@property CDStruct_1b6d18a9 maxFragmentDuration; // @synthesize maxFragmentDuration=_maxFragmentDuration;
@property double minFrameQuality; // @synthesize minFrameQuality=_minFrameQuality;
@property double minFrameScale; // @synthesize minFrameScale=_minFrameScale;
@property BOOL recognizeFaces; // @synthesize recognizeFaces=_recognizeFaces;
@property (readonly) Class superclass;
@property unsigned long long thumbnailHeight; // @synthesize thumbnailHeight=_thumbnailHeight;
@property CDStruct_1b6d18a9 thumbnailInterval; // @synthesize thumbnailInterval=_thumbnailInterval;
@property BOOL transcode; // @synthesize transcode=_transcode;

+ (id)logCategory;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)attributeDescriptions;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

