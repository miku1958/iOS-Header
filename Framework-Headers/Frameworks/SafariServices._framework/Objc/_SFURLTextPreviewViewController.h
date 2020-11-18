//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSArray, NSURL, _SFLinkPreviewHeader, _SFURLTextPreviewView, _WKActivatedElementInfo;

@interface _SFURLTextPreviewViewController : UIViewController
{
    NSArray *_linkActions;
    _WKActivatedElementInfo *_activatedElementInfo;
    _SFLinkPreviewHeader *_previewHeader;
    NSURL *_URL;
    _SFURLTextPreviewView *_previewView;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (strong, nonatomic) _SFURLTextPreviewView *previewView; // @synthesize previewView=_previewView;

- (void).cxx_destruct;
- (id)_activatedElementInfo;
- (id)_linkActions;
- (id)_previewHeader;
- (void)_setActivatedElementInfo:(id)arg1;
- (void)_setLinkActions:(id)arg1;
- (id)initWithURL:(id)arg1;
- (void)loadView;
- (void)viewWillLayoutSubviews;

@end
