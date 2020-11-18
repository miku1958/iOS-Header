//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSReading/TSDMediaInfo.h>

#import <TSReading/TSDMixing-Protocol.h>

@class NSURL, TSDMediaStyle, TSPData;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing>
{
    TSPData *mMovieData;
    NSURL *mMovieRemoteURL;
    TSPData *mImportedAuxiliaryMovieData;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    TSPData *mPosterImageData;
    struct CGSize mNaturalSize;
    unsigned long long mLoopOption;
    float mVolume;
    BOOL mStreaming;
    int mControlStyle;
    BOOL mAllowsAirPlayVideo;
    BOOL mUsesAirPlayVideoWhileAirPlayScreenIsActive;
    NSURL *mURLForMPMPC;
    TSDMediaStyle *mStyle;
    BOOL mAudioOnly;
}

@property (nonatomic) BOOL allowsAirPlayVideo;
@property (nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property (strong, nonatomic) TSPData *audioOnlyImageData;
@property (nonatomic) int controlStyle;
@property (nonatomic) double endTime;
@property (strong, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (nonatomic) unsigned long long loopOption;
@property (strong, nonatomic) TSPData *movieData;
@property (strong, nonatomic) NSURL *movieRemoteURL;
@property (strong, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=mPosterImageData;
@property (nonatomic) double posterTime;
@property (nonatomic) double startTime;
@property (nonatomic, getter=isStreaming) BOOL streaming; // @synthesize streaming=mStreaming;
@property (strong, nonatomic) NSURL *urlForMPMPC;
@property (nonatomic) BOOL usesAirPlayVideoWhileAirPlayScreenIsActive;
@property (nonatomic) float volume;

+ (double)defaultPosterTimeForDuration:(double)arg1;
+ (id)presetKinds;
- (void)acceptVisitor:(id)arg1;
- (id)animationFilters;
- (BOOL)canChangeWrapType;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (id)copyWithContext:(id)arg1 stylesheet:(id)arg2;
- (void)dealloc;
- (double)doubleValueForProperty:(int)arg1;
- (Class)editorClass;
- (float)floatValueForProperty:(int)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (int)intValueForProperty:(int)arg1;
- (Class)layoutClass;
- (id)makeAVAsset;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)makePosterImageGeneratorWithAVAsset:(id)arg1;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1;
- (id)objectForProperty:(int)arg1;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (id)presetKind;
- (struct CGSize)rawDataSize;
- (Class)repClass;
- (void)setStyle:(id)arg1;
- (id)style;
- (Class)styleClass;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;

@end

