//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSApplication/TSKPdfTagger-Protocol.h>

@class TSDFreehandDrawingRep, TSDRep;
@protocol TSKPencilAnnotationStorage;

@protocol TSDPdfTagger <TSKPdfTagger>
- (void)beginFreehandDrawing:(TSDFreehandDrawingRep *)arg1;
- (void)beginObject:(TSDRep *)arg1;
- (void)beginPencilAnnotation:(id<TSKPencilAnnotationStorage>)arg1;
- (void)endFreehandDrawing:(TSDFreehandDrawingRep *)arg1;
- (void)endObject:(TSDRep *)arg1;
- (void)endPencilAnnotation:(id<TSKPencilAnnotationStorage>)arg1;
@end

