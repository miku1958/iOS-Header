//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableViewController.h>

#import <HomeUI/HUPresentationDelegateHost-Protocol.h>

@class HUSceneSuggestionsItemManager, NSString;
@protocol HUPresentationDelegate, HUSceneEditorDelegate;

@interface HUSceneSuggestionsViewController : HUItemTableViewController <HUPresentationDelegateHost>
{
    id<HUPresentationDelegate> _presentationDelegate;
    id<HUSceneEditorDelegate> _sceneEditorDelegate;
    HUSceneSuggestionsItemManager *_suggestionsItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<HUPresentationDelegate> presentationDelegate; // @synthesize presentationDelegate=_presentationDelegate;
@property (weak, nonatomic) id<HUSceneEditorDelegate> sceneEditorDelegate; // @synthesize sceneEditorDelegate=_sceneEditorDelegate;
@property (weak, nonatomic) HUSceneSuggestionsItemManager *suggestionsItemManager; // @synthesize suggestionsItemManager=_suggestionsItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (void)_showActionEditorForActionSetSuggestionItem:(id)arg1;
- (void)_showActionEditorForNewCustomScene;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)init;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;

@end

