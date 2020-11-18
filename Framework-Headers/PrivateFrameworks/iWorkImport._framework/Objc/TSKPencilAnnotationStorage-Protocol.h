//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>
#import <iWorkImport/TSPCopying-Protocol.h>

@class NSArray, NSData, NSDate, PKDrawing, TSKPKDrawing, TSPData, TSUColor, TSUImage;

@protocol TSKPencilAnnotationStorage <NSObject, TSPCopying>

@property (readonly, nonatomic) long long attachedLocation;
@property (readonly, nonatomic) long long attachedType;
@property (nonatomic) long long compoundAnnotationType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) TSKPKDrawing *drawing;
@property (readonly, nonatomic) PKDrawing *drawingForTextRecognition;
@property (readonly, nonatomic) NSData *encodedDrawing;
@property (readonly, nonatomic) BOOL isCalloutLine;
@property (readonly, nonatomic) BOOL isCalloutMarginAnnotation;
@property (readonly, nonatomic) BOOL isCalloutParentStorage;
@property (readonly, nonatomic) BOOL isStretchableParagraphAnnotation;
@property (readonly, nonatomic) struct CGPoint markupOffset;
@property (readonly, nonatomic) BOOL needsTextRecognition;
@property (readonly, nonatomic) struct CGSize originalAttachedSize;
@property (readonly, nonatomic) struct CGPath *path;
@property (readonly, nonatomic) TSUColor *penColor;
@property (readonly, nonatomic) double percentOfPAContainedInParentRep;
@property (readonly, nonatomic) TSUImage *rasterizedImage;
@property (readonly, nonatomic) struct CGSize rasterizedImageSize;
@property (readonly, nonatomic) TSPData *rasterizedImageTSPData;
@property (readonly, nonatomic) BOOL shouldResizeWithAnchor;
@property (readonly, nonatomic) BOOL shouldShowAnchorRect;
@property (readonly, nonatomic) BOOL shouldSplitAcrossAnchorRects;
@property (readonly, nonatomic) NSArray *subStorages;
@property (readonly, nonatomic) unsigned long long textBaselinesTouchedCount;
@property (readonly, nonatomic) long long toolType;
@property (readonly, nonatomic) struct CGRect unscaledBoundsOfStrokes;
@property (readonly, nonatomic) struct CGPath *unscaledPath;
@property (readonly, nonatomic) unsigned long long visibleStrokesCount;

- (struct CGRect)convertStrokeRectToUnscaledCanvas:(struct CGRect)arg1;
- (struct CGPoint)convertStrokeToUnscaledCanvasPoint:(struct CGPoint)arg1;
- (struct CGSize)convertStrokeToUnscaledCanvasSize:(struct CGSize)arg1;
- (struct CGPoint)convertUnscaledCanvasToStrokePoint:(struct CGPoint)arg1;
- (struct CGRect)convertUnscaledCanvasToStrokeRect:(struct CGRect)arg1;
- (struct CGSize)convertUnscaledCanvasToStrokeSize:(struct CGSize)arg1;
@end

