//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NumbersQuicklook/TNRenderingExporter.h>

#import <NumbersQuicklook/TSKImageExporter-Protocol.h>

@class NSString, TSUProgress;

@interface TNPreviewExporter : TNRenderingExporter <TSKImageExporter>
{
    struct CGRect mClipRect;
}

@property (readonly, nonatomic) struct CGRect boundsRect;
@property (readonly, nonatomic) BOOL canExportInBackground;
@property (nonatomic) struct CGRect clipRect; // @synthesize clipRect=mClipRect;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *documentSpecificTypeUTI;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long height;
@property (readonly, nonatomic) BOOL isCancelled;
@property (readonly, nonatomic) BOOL isExportSupported;
@property (readonly, nonatomic) BOOL needsSupplementalFiles;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (nonatomic) BOOL paginate;
@property (readonly, nonatomic) TSUProgress *progress;
@property (readonly, nonatomic) double progressForCurrentPage;
@property (readonly, nonatomic) NSString *savePanelMessage;
@property (nonatomic) BOOL scaleToFit;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *typeUTI;
@property (readonly, nonatomic) struct CGRect unscaledClipRect;
@property (nonatomic) unsigned long long width;

- (id)initWithDocumentRoot:(id)arg1;
- (id)p_renderingExporterDelegate;

@end

