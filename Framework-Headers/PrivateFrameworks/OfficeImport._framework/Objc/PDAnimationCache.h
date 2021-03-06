//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PDAnimateMotionBehavior, PDAnimationTarget, PDBuild;

__attribute__((visibility("hidden")))
@interface PDAnimationCache : NSObject
{
    int mNodeType;
    int mPresetId;
    int mPresetSubType;
    int mPresetClass;
    PDAnimationTarget *mTarget;
    BOOL mHasDelay;
    double mDelay;
    BOOL mHasDuration;
    double mDuration;
    BOOL mHasDirection;
    double mDirection;
    BOOL mHasPartCount;
    int mPartCount;
    PDAnimateMotionBehavior *mMotionPath;
    BOOL mHasValue;
    double mValue;
    PDBuild *mBuild;
    int mIterateType;
    BOOL mIsHead;
    int mLevel;
    NSString *mGroupId;
}

@property (strong, nonatomic) PDBuild *build; // @synthesize build=mBuild;
@property (nonatomic) double delay; // @synthesize delay=mDelay;
@property (nonatomic) double direction; // @synthesize direction=mDirection;
@property (nonatomic) double duration; // @synthesize duration=mDuration;
@property (strong, nonatomic) NSString *groupId; // @synthesize groupId=mGroupId;
@property (nonatomic) BOOL hasDelay; // @synthesize hasDelay=mHasDelay;
@property (nonatomic) BOOL hasDirection; // @synthesize hasDirection=mHasDirection;
@property (nonatomic) BOOL hasDuration; // @synthesize hasDuration=mHasDuration;
@property (nonatomic) BOOL hasPartCount; // @synthesize hasPartCount=mHasPartCount;
@property (nonatomic) BOOL hasValue; // @synthesize hasValue=mHasValue;
@property (nonatomic) BOOL isHead; // @synthesize isHead=mIsHead;
@property (nonatomic) int iterateType; // @synthesize iterateType=mIterateType;
@property (nonatomic) int level; // @synthesize level=mLevel;
@property (strong, nonatomic) PDAnimateMotionBehavior *motionPath; // @synthesize motionPath=mMotionPath;
@property (nonatomic) int nodeType; // @synthesize nodeType=mNodeType;
@property (nonatomic) int partCount; // @synthesize partCount=mPartCount;
@property (nonatomic) int presetClass; // @synthesize presetClass=mPresetClass;
@property (nonatomic) int presetId; // @synthesize presetId=mPresetId;
@property (nonatomic) int presetSubType; // @synthesize presetSubType=mPresetSubType;
@property (strong, nonatomic) PDAnimationTarget *target; // @synthesize target=mTarget;
@property (nonatomic) double value; // @synthesize value=mValue;

+ (id)createAnimationInfoDataForCacheItem:(id)arg1 order:(unsigned int)arg2;
+ (void)loadAnimationCache:(id)arg1 pdAnimation:(id)arg2 state:(id)arg3;
+ (void)mapAnimationInfo:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
+ (void)mapCommonData:(id)arg1 cacheData:(id)arg2 state:(id)arg3;
- (void).cxx_destruct;
- (id)initWithAnimationInfo:(id)arg1;

@end

