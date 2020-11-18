//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/NSSecureCoding-Protocol.h>

@class NSData, NSURL, PHAdjustmentData;

@interface PHContentEditingOutput : NSObject <NSSecureCoding>
{
    PHAdjustmentData *_adjustmentData;
    long long _baseVersion;
    BOOL _isSubstandardRender;
    NSURL *_renderedContentURL;
    long long _fullSizeRenderWidth;
    long long _fullSizeRenderHeight;
    NSData *_penultimateRenderedJPEGData;
    NSURL *_editorBundleURL;
    long long _mediaType;
}

@property (strong) PHAdjustmentData *adjustmentData;
@property long long baseVersion;
@property (strong) NSURL *editorBundleURL; // @synthesize editorBundleURL=_editorBundleURL;
@property (nonatomic) long long fullSizeRenderHeight; // @synthesize fullSizeRenderHeight=_fullSizeRenderHeight;
@property (nonatomic) long long fullSizeRenderWidth; // @synthesize fullSizeRenderWidth=_fullSizeRenderWidth;
@property (nonatomic) BOOL isSubstandardRender; // @synthesize isSubstandardRender=_isSubstandardRender;
@property (readonly) long long mediaType; // @synthesize mediaType=_mediaType;
@property (strong) NSData *penultimateRenderedJPEGData; // @synthesize penultimateRenderedJPEGData=_penultimateRenderedJPEGData;
@property (copy) NSURL *renderedContentURL; // @synthesize renderedContentURL=_renderedContentURL;

+ (unsigned long long)maximumAdjustmentDataLength;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_commonInit;
- (void)clearRenderedContentURL;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAdjustmentBaseVersion:(long long)arg1 mediaType:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentEditingInput:(id)arg1;
- (id)initWithPlaceholderForCreatedAsset:(id)arg1;
- (void)setRenderedJPEGData:(id)arg1;

@end
