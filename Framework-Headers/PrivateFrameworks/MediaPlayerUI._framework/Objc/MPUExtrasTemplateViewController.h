//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayerUI/MPUExtrasElementViewController.h>

#import <MediaPlayerUI/IKAppDocumentDelegate-Protocol.h>

@class IKAppDocument, IKViewElement, MPUExtrasContext, NSDictionary, NSString;

@interface MPUExtrasTemplateViewController : MPUExtrasElementViewController <IKAppDocumentDelegate>
{
    IKViewElement *_displayedTemplate;
    NSDictionary *_options;
    IKAppDocument *_document;
    MPUExtrasContext *_context;
}

@property (readonly, weak, nonatomic) MPUExtrasContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) IKAppDocument *document; // @synthesize document=_document;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL showsPlaceholder;
@property (readonly) Class superclass;

+ (id)templateViewControllerWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (void).cxx_destruct;
- (void)_showPlaceholder;
- (void)_startBackgroundAudio;
- (void)configureBackgroundWithElements:(id)arg1;
- (void)dealloc;
- (void)documentDidFail:(id)arg1 withError:(id)arg2;
- (void)documentDidUpdate:(id)arg1;
- (void)documentNeedsUpdate:(id)arg1;
- (id)initWithDocument:(id)arg1 options:(id)arg2 context:(id)arg3;
- (BOOL)shouldUpdateByReplacingViewControllerWithTemplate:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end

