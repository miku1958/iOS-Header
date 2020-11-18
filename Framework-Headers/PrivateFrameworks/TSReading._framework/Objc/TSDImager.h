//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDCanvasDelegate-Protocol.h>

@class NSArray, NSString, TSDCanvas, TSKDocumentRoot;

@interface TSDImager : NSObject <TSDCanvasDelegate>
{
    NSArray *mInfos;
    struct CGColor *mBackgroundColor;
    struct CGRect mUnscaledClipRect;
    double mViewScale;
    struct CGSize mScaledImageSize;
    struct CGSize mMaximumScaledImageSize;
    BOOL mUseScaledImageSize;
    BOOL mDistortedToMatch;
    BOOL mImageMustHaveEvenDimensions;
    BOOL mShouldReuseBitmapContext;
    struct UIEdgeInsets mContentInset;
    TSKDocumentRoot *mDocumentRoot;
    TSDCanvas *mCanvas;
    struct CGRect mActualScaledClipRect;
    BOOL mDrawingIntoPDF;
    BOOL mIsPrinting;
    struct CGContext *mReusableBitmapContext;
    struct CGRect mReusableBounds;
    struct CGRect mReusableIntegralBounds;
    struct CGRect mReusableActualScaledClipRect;
    struct CGSize mReusableScaledImageSize;
    CDUnknownBlockType mPostRenderAction;
}

@property (readonly, nonatomic) struct CGRect actualScaledClipRect; // @synthesize actualScaledClipRect=mActualScaledClipRect;
@property (nonatomic) struct CGColor *backgroundColor; // @synthesize backgroundColor=mBackgroundColor;
@property (readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=mCanvas;
@property (nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=mContentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL distortedToMatch; // @synthesize distortedToMatch=mDistortedToMatch;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL imageMustHaveEvenDimensions; // @synthesize imageMustHaveEvenDimensions=mImageMustHaveEvenDimensions;
@property (strong, nonatomic) NSArray *infos; // @synthesize infos=mInfos;
@property (nonatomic) BOOL isPrinting; // @synthesize isPrinting=mIsPrinting;
@property (nonatomic) struct CGSize maximumScaledImageSize;
@property (nonatomic) struct CGSize scaledImageSize;
@property (nonatomic) BOOL shouldReuseBitmapContext; // @synthesize shouldReuseBitmapContext=mShouldReuseBitmapContext;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect unscaledClipRect; // @synthesize unscaledClipRect=mUnscaledClipRect;
@property (nonatomic) double viewScale;

- (void)dealloc;
- (id)documentRoot;
- (BOOL)drawPageInContext:(struct CGContext *)arg1 createPage:(BOOL)arg2;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isCanvasDrawingIntoPDF:(id)arg1;
- (BOOL)isPrintingCanvas;
- (struct CGImage *)newImage;
- (BOOL)p_configureCanvas;
- (void)p_drawPageInContext:(struct CGContext *)arg1 createPage:(BOOL)arg2;
- (struct CGImage *)p_newImageInReusableContext;
- (id)pdfData;
- (void)setPostRenderAction:(CDUnknownBlockType)arg1;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;

@end

