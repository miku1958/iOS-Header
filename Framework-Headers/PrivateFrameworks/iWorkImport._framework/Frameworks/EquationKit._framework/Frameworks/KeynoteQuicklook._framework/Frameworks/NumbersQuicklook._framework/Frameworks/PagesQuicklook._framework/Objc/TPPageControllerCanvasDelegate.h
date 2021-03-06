//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PagesQuicklook/TSDCanvasDelegate-Protocol.h>

@class NSString, TPDocumentRoot, TSDCanvas;
@protocol TSDCanvasProxyDelegate;

@interface TPPageControllerCanvasDelegate : NSObject <TSDCanvasDelegate>
{
    TPDocumentRoot *_documentRoot;
    TSDCanvas *_canvas;
}

@property (readonly, nonatomic) TSDCanvas *canvas; // @synthesize canvas=_canvas;
@property (readonly, nonatomic) id<TSDCanvasProxyDelegate> canvasProxyDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)documentRoot;
- (id)initWithDocumentRoot:(id)arg1 canvas:(id)arg2;
- (BOOL)shouldShowInstructionalTextForLayout:(id)arg1;
- (void)tearDown;
- (BOOL)textLayoutMustIncludeAdornments;
- (struct CGRect)visibleScaledBoundsForClippingRepsOnCanvas:(id)arg1;
- (BOOL)wantsEditingLayoutsForOffscreenInfos;

@end

