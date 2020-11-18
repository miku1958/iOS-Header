//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMCameraRecordingEvent-Protocol.h>
#import <HomeKit/NSCopying-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMCameraClipEncryptionContext, NSArray, NSData, NSDate, NSDictionary, NSSet, NSString, NSUUID;

@interface HMCameraClip : NSObject <NSCopying, NSSecureCoding, HMCameraRecordingEvent>
{
    BOOL _complete;
    BOOL _donated;
    NSUUID *_uniqueIdentifier;
    NSDate *_startDate;
    double _duration;
    double _targetFragmentDuration;
    NSArray *_posterFrames;
    NSSet *_significantEvents;
    NSString *_streamingAssetVersion;
    HMCameraClipEncryptionContext *_encryptionContext;
    NSArray *_videoSegments;
}

@property (readonly) BOOL canAskForUserFeedback;
@property (readonly, getter=isComplete) BOOL complete; // @synthesize complete=_complete;
@property (readonly, copy) NSDate *dateOfOccurrence;
@property (readonly, getter=isDonated) BOOL donated; // @synthesize donated=_donated;
@property (readonly) double duration; // @synthesize duration=_duration;
@property (readonly, copy) HMCameraClipEncryptionContext *encryptionContext; // @synthesize encryptionContext=_encryptionContext;
@property (readonly, copy) NSData *encryptionKey;
@property (readonly, copy) NSArray *posterFrames; // @synthesize posterFrames=_posterFrames;
@property (readonly, copy) NSSet *significantEvents; // @synthesize significantEvents=_significantEvents;
@property (readonly, copy) NSDate *startDate; // @synthesize startDate=_startDate;
@property (readonly, copy) NSString *streamingAssetVersion; // @synthesize streamingAssetVersion=_streamingAssetVersion;
@property (readonly) double targetFragmentDuration; // @synthesize targetFragmentDuration=_targetFragmentDuration;
@property (readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy) NSDictionary *videoAssetRequiredHTTPHeaders;
@property (readonly, copy) NSArray *videoDataSegments;
@property (readonly, copy) NSArray *videoSegments; // @synthesize videoSegments=_videoSegments;

+ (id)requiredHTTPHeadersForStreamingAssetVersion:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 startDate:(id)arg2 duration:(double)arg3 targetFragmentDuration:(double)arg4 isComplete:(BOOL)arg5 isDonated:(BOOL)arg6 streamingAssetVersion:(id)arg7 encryptionContext:(id)arg8 posterFrames:(id)arg9 videoSegments:(id)arg10 significantEvents:(id)arg11;
- (BOOL)isEqual:(id)arg1;

@end
