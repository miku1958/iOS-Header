//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, PHImageRequestBehaviorSpec, PHResourceChooserList;
@protocol PHResourceChooserAsset;

@interface PHImageResourceChooser : NSObject
{
    double _requiredScale;
    PHResourceChooserList *_list;
    BOOL _needsReset;
    BOOL _didCheckForLocalVideoKeyFrame;
    BOOL _hasLocalVideoKeyFrameInNonHintResources;
    BOOL _isCloudSharedMode;
    BOOL _onlyUseFetchedAssetPropertiesDuringChoosing;
    BOOL _allowHints;
    id<PHResourceChooserAsset> _asset;
    PHImageRequestBehaviorSpec *_behaviorSpec;
    long long _policy;
    unsigned long long _loadingOptions;
    long long _requestVersion;
    double _minimumTableThumbnailLongSide;
    id _context;
    NSString *_loggingPrefix;
    CDUnknownBlockType _resourceHandler;
    struct CGSize _desiredSize;
}

@property (nonatomic) BOOL allowHints; // @synthesize allowHints=_allowHints;
@property (readonly, nonatomic) id<PHResourceChooserAsset> asset; // @synthesize asset=_asset;
@property (strong, nonatomic) PHImageRequestBehaviorSpec *behaviorSpec; // @synthesize behaviorSpec=_behaviorSpec;
@property (weak, nonatomic) id context; // @synthesize context=_context;
@property (nonatomic) struct CGSize desiredSize; // @synthesize desiredSize=_desiredSize;
@property (nonatomic) BOOL isCloudSharedMode; // @synthesize isCloudSharedMode=_isCloudSharedMode;
@property (readonly, nonatomic) unsigned long long loadingOptions; // @synthesize loadingOptions=_loadingOptions;
@property (strong, nonatomic) NSString *loggingPrefix; // @synthesize loggingPrefix=_loggingPrefix;
@property (readonly, nonatomic) double minimumTableThumbnailLongSide; // @synthesize minimumTableThumbnailLongSide=_minimumTableThumbnailLongSide;
@property (readonly, nonatomic) BOOL onlyUseFetchedAssetPropertiesDuringChoosing; // @synthesize onlyUseFetchedAssetPropertiesDuringChoosing=_onlyUseFetchedAssetPropertiesDuringChoosing;
@property (readonly, nonatomic) long long policy; // @synthesize policy=_policy;
@property (readonly, nonatomic) long long requestVersion; // @synthesize requestVersion=_requestVersion;
@property (copy, nonatomic) CDUnknownBlockType resourceHandler; // @synthesize resourceHandler=_resourceHandler;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_executeEndOfListHandlerWithResourceChooserList:(id)arg1 continueInReverse:(BOOL *)arg2;
- (BOOL)_executeItemHandlerWithAllowedResourceVersions:(id)arg1 approximateSize:(struct CGSize)arg2 resourceScale:(float)arg3 isPrimaryFormat:(BOOL)arg4 isDefaultOrientation:(BOOL)arg5 resourceType:(unsigned int)arg6 version:(unsigned int)arg7 isDerivative:(BOOL)arg8 store:(id)arg9 key:(id)arg10 localAvailabilityTarget:(short)arg11 identity:(id)arg12 canDownload:(BOOL)arg13 isReverse:(BOOL)arg14 preventAutoAdvance:(BOOL *)arg15;
- (id)init;
- (id)initWithAsset:(id)arg1;
- (void)moveFirst;
- (void)presentNextQualifyingResource;

@end

