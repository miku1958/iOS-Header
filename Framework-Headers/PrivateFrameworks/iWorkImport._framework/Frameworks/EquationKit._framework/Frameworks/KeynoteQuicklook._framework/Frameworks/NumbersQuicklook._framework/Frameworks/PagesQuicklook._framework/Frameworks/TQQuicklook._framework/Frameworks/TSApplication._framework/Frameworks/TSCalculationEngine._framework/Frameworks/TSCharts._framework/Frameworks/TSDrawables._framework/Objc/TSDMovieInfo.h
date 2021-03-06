//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSDrawables/TSDMediaInfo.h>

#import <TSDrawables/TSDCompatibilityAwareMediaContainer-Protocol.h>
#import <TSDrawables/TSDMixing-Protocol.h>
#import <TSDrawables/TSDPlayableInfo-Protocol.h>

@class NSString, NSURL, TSDMediaStyle, TSDMovieFingerprint, TSPData;

@interface TSDMovieInfo : TSDMediaInfo <TSDMixing, TSDCompatibilityAwareMediaContainer, TSDPlayableInfo>
{
    TSPData *mMovieData;
    TSPData *mImportedAuxiliaryMovieData;
    NSString *mImportedAuxiliaryMovieDataOriginalFilename;
    BOOL mAudioOnly;
    TSPData *mAudioOnlyImageData;
    double mStartTime;
    double mEndTime;
    double mPosterTime;
    long long mLoopOption;
    float mVolume;
    NSURL *mMovieRemoteURL;
    TSDMovieFingerprint *mFingerprint;
    TSPData *mPosterImageData;
    BOOL mPosterImageGeneratedWithAlphaSupport;
    struct CGSize mNaturalSize;
    BOOL mPlaysAcrossSlides;
    BOOL mStreaming;
    BOOL mNativeAudioRecording;
    TSDMediaStyle *mStyle;
}

@property (nonatomic, getter=isAudioOnly) BOOL audioOnly;
@property (strong, nonatomic) TSPData *audioOnlyImageData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endTime;
@property (copy, nonatomic) TSDMovieFingerprint *fingerprint;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) TSPData *importedAuxiliaryMovieData;
@property (copy, nonatomic) NSString *importedAuxiliaryMovieDataOriginalFilename;
@property (nonatomic) long long loopOption; // @synthesize loopOption=mLoopOption;
@property (strong, nonatomic) TSPData *movieData;
@property (strong, nonatomic) NSURL *movieRemoteURL;
@property (nonatomic, getter=isNativeAudioRecording) BOOL nativeAudioRecording;
@property (nonatomic) BOOL playsAcrossSlides;
@property (strong, nonatomic) TSPData *posterImageData; // @synthesize posterImageData=mPosterImageData;
@property (nonatomic) double posterTime;
@property (nonatomic) double startTime;
@property (nonatomic, getter=isStreaming) BOOL streaming; // @synthesize streaming=mStreaming;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsLooping;
@property (readonly, nonatomic) BOOL supportsLoopingBackAndForth;
@property (readonly, nonatomic) BOOL supportsStartTimeAndEndTime;
@property (nonatomic) float volume;

+ (double)defaultPosterTimeForDuration:(double)arg1;
+ (id)presetKinds;
- (void).cxx_destruct;
- (void)acceptVisitor:(id)arg1;
- (BOOL)allowsCaption;
- (BOOL)allowsTitle;
- (id)animationFilters;
- (BOOL)canBeMediaPlaceholder;
- (BOOL)canBeReplaced;
- (BOOL)canChangeWrapType;
- (BOOL)canCopyData;
- (BOOL)canResetMediaSize;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithContext:(id)arg1;
- (double)doubleValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (id)generateEmptyPosterImageForContext:(id)arg1;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieData:(id)arg4 loadedAsset:(id)arg5;
- (id)initWithContext:(id)arg1 geometry:(id)arg2 style:(id)arg3 movieRemoteURL:(id)arg4 loadedAsset:(id)arg5;
- (int)intValueForProperty:(int)arg1;
- (BOOL)isAllowedInGroups;
- (Class)layoutClass;
- (void)loadFromArchive:(const struct MovieArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (id)makeAVAsset;
- (id)makeAVAssetWithOptions:(id)arg1;
- (id)mediaDataForDragging;
- (id)mediaDisplayName;
- (id)mediaFileType;
- (id)mixedObjectWithFraction:(double)arg1 ofObject:(id)arg2;
- (long long)mixingTypeWithObject:(id)arg1 context:(id)arg2;
- (BOOL)needsDownload;
- (id)objectForProperty:(int)arg1;
- (id)p_makePosterImageDataWithAVAsset:(id)arg1 inContext:(id)arg2 time:(double)arg3;
- (void)p_setPropertiesFromLoadedAsset:(id)arg1;
- (id)presetKind;
- (id)promisedDataForType:(id)arg1;
- (id)promisedTSPDataForType:(id)arg1;
- (struct CGSize)rawDataSize;
- (Class)repClass;
- (void)saveToArchive:(struct MovieArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)setStyle:(id)arg1;
- (BOOL)shouldShowInPrint;
- (id)style;
- (Class)styleClass;
- (id)styleIdentifierTemplateForNewPreset;
- (BOOL)supportsAttachedComments;
- (BOOL)supportsHyperlinks;
- (BOOL)supportsStyleInspecting;
- (id)synchronouslyGenerateDefaultPosterImageForContext:(id)arg1;
- (id)synchronouslyGenerateNewPosterImageForAsset:(id)arg1 time:(double)arg2;
- (void)takePropertiesFromReplacedMediaInfo:(id)arg1;
- (id)typesToPromiseWhenCopyingSingleDrawable;
- (BOOL)wantsStandardTypesInAdditionToTypesToPromiseWhenCopyingSingleDrawable;
- (BOOL)willRenderContentViaImager;

@end

