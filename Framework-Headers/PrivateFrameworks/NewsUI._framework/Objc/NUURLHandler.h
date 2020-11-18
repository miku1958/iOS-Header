//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsUI/SXURLHandling-Protocol.h>
#import <NewsUI/SXURLPreviewing-Protocol.h>

@class NSMutableArray, NSString;
@protocol NUPreviewViewControllerFactory, NUURLHandlerDelegate, NUURLHandling, NUWebViewControllerFactory;

@interface NUURLHandler : NSObject <SXURLHandling, SXURLPreviewing>
{
    BOOL _universalLinksEnabled;
    id<NUURLHandlerDelegate> _delegate;
    id<NUWebViewControllerFactory> _webViewControllerFactory;
    id<NUPreviewViewControllerFactory> _previewViewControllerFactory;
    id<NUURLHandling> _URLHandling;
    NSMutableArray *_modifiers;
}

@property (readonly, nonatomic) id<NUURLHandling> URLHandling; // @synthesize URLHandling=_URLHandling;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NUURLHandlerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMutableArray *modifiers; // @synthesize modifiers=_modifiers;
@property (strong, nonatomic) id<NUPreviewViewControllerFactory> previewViewControllerFactory; // @synthesize previewViewControllerFactory=_previewViewControllerFactory;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL universalLinksEnabled; // @synthesize universalLinksEnabled=_universalLinksEnabled;
@property (strong, nonatomic) id<NUWebViewControllerFactory> webViewControllerFactory; // @synthesize webViewControllerFactory=_webViewControllerFactory;

- (void).cxx_destruct;
- (void)addModifier:(id)arg1;
- (void)commitViewController:(id)arg1 URL:(id)arg2;
- (id)initWithURLHandling:(id)arg1 universalLinksEnabled:(BOOL)arg2;
- (id)modifyURL:(id)arg1;
- (void)openURL:(id)arg1;
- (void)presentViewController:(id)arg1 animated:(BOOL)arg2;
- (void)removeModifier:(id)arg1;
- (id)viewControllerForURL:(id)arg1;

@end
