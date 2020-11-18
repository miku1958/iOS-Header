//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewController.h>

#import <StoreKitUI/SKUIDocumentViewController-Protocol.h>
#import <StoreKitUI/SKUIReportAConcernTemplateViewDelegate-Protocol.h>

@class NSArray, NSString, SKUIReportAConcernTemplateView, SKUIReportAConcernTemplateViewElement, SKUIViewElementLayoutContext;

@interface SKUIReportAConcernDocumentViewController : SKUIViewController <SKUIReportAConcernTemplateViewDelegate, SKUIDocumentViewController>
{
    NSArray *_concernIdentifiers;
    NSArray *_concernStrings;
    BOOL _didSelectConcern;
    SKUIViewElementLayoutContext *_layoutContext;
    SKUIReportAConcernTemplateView *_reportAConcernView;
    SKUIReportAConcernTemplateViewElement *_templateElement;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundColor;
- (void)_cancelButtonAction;
- (void)_doneButtonAction;
- (id)_layoutContext;
- (void)_layoutNavigation;
- (void)_layoutReportAConcernView;
- (void)_loadConcernsForConcernType:(long long)arg1 withReportAConcernBagDictionary:(id)arg2;
- (void)_loadViewWithConcernStrings;
- (void)_sendCancelEventAndDismiss;
- (void)_sendDoneEventAndDismissWithSelectedIndex:(long long)arg1;
- (void)dealloc;
- (void)didSelectConcernInReportAConcernTemplateView:(id)arg1;
- (void)documentDidUpdate:(id)arg1;
- (id)initWithTemplateElement:(id)arg1;
- (void)loadView;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end
