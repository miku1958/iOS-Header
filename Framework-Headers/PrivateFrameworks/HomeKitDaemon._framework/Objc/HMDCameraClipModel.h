//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBModel.h>

@class HMBStreamingAsset, NSArray, NSData, NSDate, NSNumber, NSString;

@interface HMDCameraClipModel : HMBModel
{
}

@property (strong, nonatomic) NSNumber *duration; // @dynamic duration;
@property (strong, nonatomic) NSData *encryptionKey; // @dynamic encryptionKey;
@property (strong, nonatomic) NSNumber *encryptionScheme; // @dynamic encryptionScheme;
@property unsigned long long feedbackStatus;
@property (strong, nonatomic) NSNumber *feedbackStatusField; // @dynamic feedbackStatusField;
@property (strong, nonatomic) NSNumber *isComplete; // @dynamic isComplete;
@property (strong, nonatomic) NSNumber *maximumClipDuration; // @dynamic maximumClipDuration;
@property (strong, nonatomic) NSArray *posterFramesMetadata; // @dynamic posterFramesMetadata;
@property (strong, nonatomic) NSArray *posterFramesMetadataArray; // @dynamic posterFramesMetadataArray;
@property (strong, nonatomic) HMBStreamingAsset *posterFramesStreamingAsset; // @dynamic posterFramesStreamingAsset;
@property (strong, nonatomic) NSNumber *recordedLocally; // @dynamic recordedLocally;
@property (strong, nonatomic) NSDate *startDate; // @dynamic startDate;
@property (strong, nonatomic) NSString *streamingAssetVersion; // @dynamic streamingAssetVersion;
@property (strong, nonatomic) NSNumber *targetFragmentDuration; // @dynamic targetFragmentDuration;
@property (strong, nonatomic) NSArray *videoMetadata; // @dynamic videoMetadata;
@property (strong, nonatomic) NSArray *videoMetadataArray; // @dynamic videoMetadataArray;
@property (strong, nonatomic) HMBStreamingAsset *videoStreamingAsset; // @dynamic videoStreamingAsset;

+ (id)clipsBetweenDatesQueryWithIsAscending:(BOOL)arg1;
+ (id)clipsWithNeedsUploadFeedbackStatusQuery;
+ (id)countOfClipsBetweenDatesQuery;
+ (id)hmbExternalRecordType;
+ (id)hmbProperties;
+ (id)hmbQueries;
+ (id)incompleteClipsQuery;
+ (id)sentinelParentUUID;
- (id)createClipWithSignificantEvents:(id)arg1;

@end

