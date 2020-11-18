//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeUI/HUItemTableModuleController.h>

#import <HomeUI/HUEditableCheckmarkDelegate-Protocol.h>

@class HFItemBuilder, HUChildServiceEditorItemModule, NSMapTable, NSString;
@protocol HFServiceLikeBuilder, HUChildServiceModuleControllerDelegate;

@interface HUChildServiceItemModuleController : HUItemTableModuleController <HUEditableCheckmarkDelegate>
{
    id<HUChildServiceModuleControllerDelegate> _delegate;
    HUChildServiceEditorItemModule *_childServiceItemModule;
    HFItemBuilder<HFServiceLikeBuilder> *_activelyEditingNameServiceBuilder;
    NSMapTable *_identifyButtonMap;
}

@property (strong, nonatomic) HFItemBuilder<HFServiceLikeBuilder> *activelyEditingNameServiceBuilder; // @synthesize activelyEditingNameServiceBuilder=_activelyEditingNameServiceBuilder;
@property (strong, nonatomic) HUChildServiceEditorItemModule *childServiceItemModule; // @synthesize childServiceItemModule=_childServiceItemModule;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<HUChildServiceModuleControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSMapTable *identifyButtonMap; // @synthesize identifyButtonMap=_identifyButtonMap;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_identifyButtonPressed:(id)arg1 forEvent:(id)arg2;
- (BOOL)canSelectDisabledItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (void)checkmarkTappedInCell:(id)arg1 forItem:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)initWithModule:(id)arg1 delegate:(id)arg2;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (BOOL)shouldManageTextFieldForItem:(id)arg1;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;

@end
