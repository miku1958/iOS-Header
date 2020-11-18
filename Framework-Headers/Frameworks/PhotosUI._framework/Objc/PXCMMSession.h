//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXTapToRadar-Protocol.h>

@class NSDictionary, NSSet, NSString, PXAssetsDataSourceManager, PXCMMActionManager, PXCMMPeopleSuggestionsDataSourceManager, PXCMMPeopleSuggestionsMediaProvider, PXCMMSendBackSuggestionSource, PXCMMViewModel, PXUIMediaProvider;
@protocol PXImportStatusManager;

@interface PXCMMSession : NSObject <PXTapToRadar>
{
    BOOL _hideActionMenu;
    BOOL _ppt_presentComposeRecipientView;
    BOOL _ppt_scrollComposeRecipientsView;
    PXAssetsDataSourceManager *_dataSourceManager;
    PXUIMediaProvider *_mediaProvider;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsPreviewDataSourceManager;
    PXCMMPeopleSuggestionsDataSourceManager *_peopleSuggestionsDataSourceManager;
    PXCMMPeopleSuggestionsMediaProvider *_peopleSuggestionsMediaProvider;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PXCMMActionManager *_actionManager;
    unsigned long long _activityType;
    unsigned long long _sourceType;
    PXCMMViewModel *_viewModel;
    double _ppt_delay;
}

@property (readonly, nonatomic) PXCMMActionManager *actionManager; // @synthesize actionManager=_actionManager;
@property (readonly, nonatomic) unsigned long long activityType; // @synthesize activityType=_activityType;
@property (readonly, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *diagnosticDictionary;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hideActionMenu; // @synthesize hideActionMenu=_hideActionMenu;
@property (readonly, nonatomic) id<PXImportStatusManager> importStatusManager;
@property (readonly, nonatomic) PXUIMediaProvider *mediaProvider; // @synthesize mediaProvider=_mediaProvider;
@property (readonly, nonatomic) NSSet *notificationSuppressionContexts;
@property (readonly, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsDataSourceManager; // @synthesize peopleSuggestionsDataSourceManager=_peopleSuggestionsDataSourceManager;
@property (readonly, nonatomic) PXCMMPeopleSuggestionsMediaProvider *peopleSuggestionsMediaProvider; // @synthesize peopleSuggestionsMediaProvider=_peopleSuggestionsMediaProvider;
@property (readonly, nonatomic) PXCMMPeopleSuggestionsDataSourceManager *peopleSuggestionsPreviewDataSourceManager; // @synthesize peopleSuggestionsPreviewDataSourceManager=_peopleSuggestionsPreviewDataSourceManager;
@property (nonatomic) double ppt_delay; // @synthesize ppt_delay=_ppt_delay;
@property (readonly, nonatomic) BOOL ppt_presentComposeRecipientView; // @synthesize ppt_presentComposeRecipientView=_ppt_presentComposeRecipientView;
@property (readonly, nonatomic) BOOL ppt_scrollComposeRecipientsView; // @synthesize ppt_scrollComposeRecipientsView=_ppt_scrollComposeRecipientsView;
@property (readonly, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // @synthesize sendBackSuggestionSource=_sendBackSuggestionSource;
@property (readonly, nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXCMMViewModel *viewModel; // @synthesize viewModel=_viewModel;

+ (id)new;
- (void).cxx_destruct;
- (id)assetsProgressListenerWithPresentationStyle:(long long)arg1;
- (id)init;
- (id)initWithContext:(id)arg1;

@end

