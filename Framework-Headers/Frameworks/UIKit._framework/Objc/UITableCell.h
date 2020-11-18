//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class NSString, UICellAccessoryManager;

__attribute__((visibility("hidden")))
@interface UITableCell : UIView
{
    BOOL _editing;
    UIView *_contentView;
    unsigned long long _accessoryTypes;
    UIView *_accessoryView;
    unsigned long long _editingAccessoryTypes;
    UIView *_editingAccessoryView;
    unsigned long long _editingStyle;
    NSString *_badgeText;
    UICellAccessoryManager *_accessoryManager;
}

@property (strong, nonatomic) UICellAccessoryManager *accessoryManager; // @synthesize accessoryManager=_accessoryManager;
@property (nonatomic) unsigned long long accessoryTypes; // @synthesize accessoryTypes=_accessoryTypes;
@property (strong, nonatomic) UIView *accessoryView; // @synthesize accessoryView=_accessoryView;
@property (copy, nonatomic) NSString *badgeText; // @synthesize badgeText=_badgeText;
@property (readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property (nonatomic) BOOL editing; // @synthesize editing=_editing;
@property (nonatomic) unsigned long long editingAccessoryTypes; // @synthesize editingAccessoryTypes=_editingAccessoryTypes;
@property (strong, nonatomic) UIView *editingAccessoryView; // @synthesize editingAccessoryView=_editingAccessoryView;
@property (nonatomic) unsigned long long editingStyle; // @synthesize editingStyle=_editingStyle;

- (void).cxx_destruct;
- (id)_accessoriesForAccessoryTypes:(unsigned long long)arg1 view:(id)arg2 editing:(BOOL)arg3;
- (id)_accessoriesForEditingStyle:(unsigned long long)arg1;
- (void)_layoutMarginsDidChangeFromOldMargins:(struct UIEdgeInsets)arg1;
- (void)_safeAreaInsetsDidChangeFromOldInsets:(struct UIEdgeInsets)arg1;
- (void)_updateAccessories;
- (void)_updateAccessoryMetrics;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;

@end
