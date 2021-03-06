//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/WAKView.h>

#import <WebKitLegacy/WebDocumentElement-Protocol.h>
#import <WebKitLegacy/WebDocumentView-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WebPlainWhiteView : WAKView <WebDocumentView, WebDocumentElement>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dataSourceUpdated:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1;
- (id)elementAtPoint:(struct CGPoint)arg1 allowShadowContent:(BOOL)arg2;
- (void)layout;
- (void)setDataSource:(id)arg1;
- (void)setNeedsLayout:(BOOL)arg1;
- (void)viewDidMoveToHostWindow;
- (void)viewWillMoveToHostWindow:(id)arg1;

@end

