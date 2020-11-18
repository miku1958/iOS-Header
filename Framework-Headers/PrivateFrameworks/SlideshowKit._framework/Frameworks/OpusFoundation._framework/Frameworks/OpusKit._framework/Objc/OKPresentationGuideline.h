//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OpusKit/NSCopying-Protocol.h>

@class NSString, OKMediaItem, OKPresentation, OKPresentationCanvas, OKProducerPlugin;

@interface OKPresentationGuideline : NSObject <NSCopying>
{
    OKPresentation *_presentation;
    unsigned long long _type;
    double _timestamp;
    NSString *_key;
    id _value;
    OKMediaItem *_mediaItem;
    NSString *_mediaItemUniqueURLString;
    OKPresentationCanvas *_presentationCanvas;
    unsigned long long _presentationCanvasType;
    NSString *_presentationCanvasKeyPath;
    OKProducerPlugin *_producerPlugin;
    NSString *_producerPluginUUID;
}

@property (copy, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) OKMediaItem *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (nonatomic) OKPresentation *presentation; // @synthesize presentation=_presentation;
@property (strong, nonatomic) OKPresentationCanvas *presentationCanvas; // @synthesize presentationCanvas=_presentationCanvas;
@property (strong, nonatomic) OKProducerPlugin *producerPlugin; // @synthesize producerPlugin=_producerPlugin;
@property (readonly, nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) unsigned long long type; // @synthesize type=_type;
@property (strong, nonatomic) id value; // @synthesize value=_value;

+ (id)defaultMobileRecommendedResolutionSizes;
+ (id)globalUniqueKeyForKey:(id)arg1;
+ (id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 mediaItem:(id)arg2 presentationCanvas:(id)arg3 producerPlugin:(id)arg4;
+ (id)globalUniqueKeyForKey:(id)arg1 presentationCanvas:(id)arg2;
+ (id)globalUniqueKeyForKey:(id)arg1 producerPlugin:(id)arg2;
+ (id)guidelineAuthoringAttributedTitle:(id)arg1;
+ (id)guidelineAuthoringAudioURLs:(id)arg1;
+ (id)guidelineAuthoringCurrentPageDuration:(double)arg1;
+ (id)guidelineAuthoringDebuggingEnabled:(BOOL)arg1;
+ (id)guidelineAuthoringDefaultMobileRecommendedResolutionSizes;
+ (id)guidelineAuthoringDurationFactor:(double)arg1;
+ (id)guidelineAuthoringFitToAudioDuration:(BOOL)arg1;
+ (id)guidelineAuthoringInteractiveTransitionSettings:(id)arg1;
+ (id)guidelineAuthoringMaximumDuration:(double)arg1;
+ (id)guidelineAuthoringMediaAttributes:(id)arg1;
+ (id)guidelineAuthoringMinimumDuration:(double)arg1;
+ (id)guidelineAuthoringPageDuration:(double)arg1;
+ (id)guidelineAuthoringRandomSeed:(unsigned long long)arg1;
+ (id)guidelineAuthoringRecommendedResolutionSizes:(id)arg1;
+ (id)guidelineAuthoringSynopsis:(id)arg1;
+ (id)guidelineAuthoringTitle:(id)arg1;
+ (id)guidelineAuthoringTotalDuration:(double)arg1;
+ (id)guidelineAuthoringTransitionSettings:(id)arg1;
+ (id)guidelineLiveAuthoringEnabled:(BOOL)arg1;
+ (id)guidelineWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionary;
- (id)globalUniqueKey;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1;
- (id)initWithType:(unsigned long long)arg1 key:(id)arg2 value:(id)arg3;
- (id)presentationCanvasKeyPath;

@end

