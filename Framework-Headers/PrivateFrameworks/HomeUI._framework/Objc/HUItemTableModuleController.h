//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUItemTableTextEditingController-Protocol.h>

@class HFItemModule, NSString;

@interface HUItemTableModuleController : NSObject <HUItemTableTextEditingController>
{
    HFItemModule *_module;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HFItemModule *module; // @synthesize module=_module;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)accessoryButtonTappedForItem:(id)arg1;
- (BOOL)canSelectDisabledItem:(id)arg1;
- (BOOL)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)currentTextForTextField:(id)arg1 item:(id)arg2;
- (id)defaultTextForTextField:(id)arg1 item:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)placeholderTextForTextField:(id)arg1 item:(id)arg2;
- (long long)rowAnimationForOperationType:(unsigned long long)arg1 item:(id)arg2 suggestedAnimation:(long long)arg3;
- (void)setupCell:(id)arg1 forItem:(id)arg2;
- (BOOL)shouldManageTextFieldForItem:(id)arg1;
- (void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3;
- (void)textFieldDidBeginEditing:(id)arg1 item:(id)arg2;
- (void)textFieldDidEndEditing:(id)arg1 item:(id)arg2;
- (id)textFieldForVisibleItem:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(BOOL)arg3;

@end

