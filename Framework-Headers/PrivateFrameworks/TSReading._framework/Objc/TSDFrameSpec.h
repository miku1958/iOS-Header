//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <TSReading/NSCopying-Protocol.h>

@class NSBundle, NSMutableDictionary, NSString;

@interface TSDFrameSpec : NSObject <NSCopying>
{
    NSBundle *mBundle;
    NSString *mFrameName;
    double mLeftInset;
    double mRightInset;
    double mTopInset;
    double mBottomInset;
    struct CGPoint mAdornmentPosition;
    double mMinimumAssetScale;
    int mTilingMode;
    BOOL mDisplayInPicker;
    BOOL mHasImages;
    BOOL mHasMask;
    BOOL mHasAdornment;
    NSMutableDictionary *mProvidersByKey;
    BOOL mLoadedImageMetrics;
    double mLeftWidth;
    double mRightWidth;
    double mTopHeight;
    double mBottomHeight;
    struct CGSize mAdornmentSize;
    int mInterest;
}

@property (readonly, nonatomic) BOOL displayInPicker; // @synthesize displayInPicker=mDisplayInPicker;
@property (readonly, copy, nonatomic) NSString *frameName; // @synthesize frameName=mFrameName;

+ (id)frameSpecWithName:(id)arg1;
+ (id)frameSpecs;
+ (id)p_imageKeys;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)i_addInterestInProviders;
- (struct CGPoint)i_adornmentPosition;
- (struct CGSize)i_adornmentSize;
- (double)i_bottomHeight;
- (double)i_bottomInset;
- (BOOL)i_hasAdornment;
- (BOOL)i_hasImages;
- (BOOL)i_hasMask;
- (double)i_leftInset;
- (double)i_leftWidth;
- (double)i_minimumAssetScale;
- (id)i_providerForIndex:(int)arg1 mask:(BOOL)arg2;
- (void)i_removeInterestInProviders;
- (double)i_rightInset;
- (double)i_rightWidth;
- (int)i_tilingMode;
- (double)i_topHeight;
- (double)i_topInset;
- (id)initWithBundle:(id)arg1 isVolatile:(BOOL)arg2;
- (id)p_imageDataForKey:(id)arg1;
- (id)p_infoDictionary;
- (void)p_loadImageMetrics;

@end

