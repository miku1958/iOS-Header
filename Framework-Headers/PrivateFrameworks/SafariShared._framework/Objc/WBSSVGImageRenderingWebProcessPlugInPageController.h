//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSWebProcessPlugInPageController.h>

@protocol WBSSVGImageRenderingObserver;

@interface WBSSVGImageRenderingWebProcessPlugInPageController : WBSWebProcessPlugInPageController
{
    id<WBSSVGImageRenderingObserver> _svgImageRenderingObserver;
}

- (void).cxx_destruct;
- (id)svgImageRenderingObserver;
- (void)webProcessPlugInBrowserContextController:(id)arg1 didFinishLoadForFrame:(id)arg2;

@end
