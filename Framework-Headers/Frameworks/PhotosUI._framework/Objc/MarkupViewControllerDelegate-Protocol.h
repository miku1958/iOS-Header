//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class MarkupViewController, NSArray, NSURL;

@protocol MarkupViewControllerDelegate <NSObject>

@optional
- (void)controller:(MarkupViewController *)arg1 didChangeToPDFPageIndex:(unsigned long long)arg2;
- (void)controller:(MarkupViewController *)arg1 didReadCGPDFDocument:(struct CGPDFDocument *)arg2;
- (BOOL)controller:(MarkupViewController *)arg1 shouldOpenLinkAtURL:(NSURL *)arg2;
- (NSArray *)controller:(MarkupViewController *)arg1 willSetToolbarItems:(NSArray *)arg2;
- (void)controller:(MarkupViewController *)arg1 willWriteCGPDFDocument:(struct CGPDFDocument *)arg2 toContext:(struct CGContext *)arg3;
- (void)controllerWantsToShowShareSheet:(MarkupViewController *)arg1;
- (struct UIEdgeInsets)customEdgeInsets;
- (struct UIEdgeInsets)customSketchOverlayInsets;
@end

