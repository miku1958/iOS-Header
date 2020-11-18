//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <MessageUI/UIContextMenuInteractionDelegate-Protocol.h>

@class MFPopupButtonItem, NSArray, NSString, UIFont, UILabel;
@protocol MFPopupButtonDelegate;

@interface MFPopupButton : UIControl <UIContextMenuInteractionDelegate>
{
    UILabel *_label;
    id<MFPopupButtonDelegate> _delegate;
    MFPopupButtonItem *_selectedItem;
    NSArray *_items;
}

@property (readonly, nonatomic) BOOL canPresentMenu;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MFPopupButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property (readonly, nonatomic) UILabel *label; // @synthesize label=_label;
@property (copy, nonatomic) MFPopupButtonItem *selectedItem; // @synthesize selectedItem=_selectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_actionForItem:(id)arg1;
- (void)_didSelectItem:(id)arg1;
- (void)_updateUI;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)dismissMenu;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGPoint)menuAttachmentPointForConfiguration:(id)arg1;
- (void)sizeToFit;

@end
