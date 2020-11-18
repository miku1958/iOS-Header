//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXCALayerPromise.h>

#import <PhotosUICore/CALayerDelegate-Protocol.h>
#import <PhotosUICore/PXMutableTitleSubtitleCALayerPromise-Protocol.h>

@class NSArray, NSString, PXTitleSubtitleLabelSpec;

@interface PXTitleSubtitleCALayerPromise : PXCALayerPromise <PXMutableTitleSubtitleCALayerPromise, CALayerDelegate>
{
    BOOL _diagnosticsEnabled;
    NSString *_titleText;
    NSString *_subtitleText;
    PXTitleSubtitleLabelSpec *_spec;
    long long _typesettingMode;
    double _layerLastBaseline;
    double __textScaleFactor;
    NSArray *_diagnosticsRenderedLines;
    struct CGRect _layerContentBounds;
}

@property (readonly, nonatomic) double _textScaleFactor; // @synthesize _textScaleFactor=__textScaleFactor;
@property (nonatomic) struct CGRect bounds;
@property (nonatomic) double contentsScale;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL diagnosticsEnabled; // @synthesize diagnosticsEnabled=_diagnosticsEnabled;
@property (readonly, copy, nonatomic) NSArray *diagnosticsRenderedLines; // @synthesize diagnosticsRenderedLines=_diagnosticsRenderedLines;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CGRect layerContentBounds; // @synthesize layerContentBounds=_layerContentBounds;
@property (readonly, nonatomic) double layerLastBaseline; // @synthesize layerLastBaseline=_layerLastBaseline;
@property (nonatomic) BOOL rendersAsynchronously;
@property (readonly, nonatomic) PXTitleSubtitleLabelSpec *spec; // @synthesize spec=_spec;
@property (readonly, copy, nonatomic) NSString *subtitleText; // @synthesize subtitleText=_subtitleText;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property (readonly, nonatomic) long long typesettingMode; // @synthesize typesettingMode=_typesettingMode;

- (void).cxx_destruct;
- (id)_attributedStringForLabelWithText:(id)arg1 spec:(id)arg2;
- (id)_linesToRenderWithContext:(struct CGContext *)arg1;
- (id)createCustomLayer;
- (void)drawLayerContentInContext:(struct CGContext *)arg1;
- (id)init;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)setSpec:(id)arg1;
- (void)setSubtitleText:(id)arg1;
- (void)setTitleText:(id)arg1;
- (void)setTypesettingMode:(long long)arg1;

@end

