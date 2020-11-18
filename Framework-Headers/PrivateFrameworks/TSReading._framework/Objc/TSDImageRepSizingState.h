//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSDImageProvider;

@interface TSDImageRepSizingState : NSObject
{
    struct CGSize mDesiredSize;
    TSDImageProvider *mProvider;
    struct CGPath *mMaskPath;
    BOOL mIncludesAdjustments;
    int mStatus;
    struct CGImage *mSizedImage;
    long long mSizedImageOrientation;
}

@property (nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=mDesiredSize;
@property (readonly, nonatomic) struct CGPath *maskPath; // @synthesize maskPath=mMaskPath;
@property (strong, nonatomic) TSDImageProvider *provider; // @synthesize provider=mProvider;
@property (nonatomic) struct CGImage *sizedImage; // @synthesize sizedImage=mSizedImage;
@property (readonly, nonatomic) BOOL sizedImageHasMask;
@property (nonatomic) BOOL sizedImageIncludesAdjustments; // @synthesize sizedImageIncludesAdjustments=mIncludesAdjustments;
@property (nonatomic) long long sizedImageOrientation; // @synthesize sizedImageOrientation=mSizedImageOrientation;
@property (nonatomic) int status; // @synthesize status=mStatus;

- (void)dealloc;
- (void)generateSizedImage;
- (id)initWithDesiredSize:(struct CGSize)arg1 provider:(id)arg2 maskPath:(struct CGPath *)arg3;

@end

