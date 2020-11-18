//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIWebBrowserView.h>

#import <WebUI/WBUFormAutoFillWebView-Protocol.h>

@class NSString, UIView;

@interface UIWebBrowserView (WebUIExtras) <WBUFormAutoFillWebView>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, nonatomic, setter=webui_setLastGeneratedPasswordForCurrentBackForwardItem:) NSString *webui_lastGeneratedPasswordForCurrentBackForwardItem;
@property (readonly, nonatomic) BOOL webui_privateBrowsingEnabled;
@property (readonly, nonatomic) UIView *webui_viewForAutoFillPrompt;

- (id)_frameToFormMetadataForLastPasswordGenerationOrSubmitEvent;
- (void)enumerateUnsubmittedFormsUsingBlock:(CDUnknownBlockType)arg1;
- (id)webui_formMetadataAndFrame:(id *)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
- (id)webui_formMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (CDUnknownBlockType)webui_preventNavigationDuringAutoFillPrompt;
- (void)webui_removeFormMetadataForLastPasswordGenerationOrSubmitEventInFrame:(id)arg1;
- (void)webui_setFormMetadata:(id)arg1 forLastPasswordGenerationOrSubmitEventInFrame:(id)arg2;
@end
