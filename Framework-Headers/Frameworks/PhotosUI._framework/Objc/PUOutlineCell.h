//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/_UICollectionViewOutlineCell.h>

@class NSString, UIImage;
@protocol PUOutlineCellDelegate, PXNavigationListItem;

__attribute__((visibility("hidden")))
@interface PUOutlineCell : _UICollectionViewOutlineCell
{
    UIImage *_image;
    NSString *_text;
    id<PXNavigationListItem> _item;
    id<PUOutlineCellDelegate> _delegate;
    long long _style;
}

@property (weak, nonatomic) id<PUOutlineCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (strong, nonatomic) id<PXNavigationListItem> item; // @synthesize item=_item;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)_editingConfigurationForState:(unsigned long long)arg1;
- (BOOL)_hasEditSpecificAccessories;
- (void)_renameItem:(id)arg1 toTitle:(id)arg2;
- (void)_setAdditionalPropertiesForConfiguration:(id)arg1 state:(unsigned long long)arg2;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (void)prepareForReuse;

@end

