//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaMiningKit/NSObject-Protocol.h>

@class NSData, NSSet;

@protocol CLSSnapshotSupportProtocol <NSObject>

@property (readonly, nonatomic) unsigned long long clsPeopleCount;

- (float)clsActivityLevel;
- (long long)clsBlinkCount;
- (NSData *)clsDistanceIdentity;
- (float)clsExposureScore;
- (long long)clsPlayCount;
- (NSSet *)clsSceneClassifications;
- (long long)clsShareCount;
- (float)clsSharpnessScore;
- (long long)clsSmileCount;
- (unsigned long long)clsVideoFaceCount;
- (float)clsVideoScore;
- (long long)clsViewCount;
- (double)duration;
- (unsigned long long)facesCount;
- (BOOL)hasAdjustments;
- (BOOL)isAudio;
- (BOOL)isBlurry;
- (BOOL)isFavorite;
- (BOOL)isHidden;
- (BOOL)isIncludedInCloudFeeds;
- (BOOL)isSubtype:(unsigned long long)arg1;
- (BOOL)isTrashed;
- (BOOL)isUtility;
- (BOOL)isVideo;
- (BOOL)representsBurst;
@end
