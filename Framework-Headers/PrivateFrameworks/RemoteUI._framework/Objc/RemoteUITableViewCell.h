//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class RUIWebContainerView, UIButton, UIColor, UIImageView, UIView;

@interface RemoteUITableViewCell : UITableViewCell
{
    UIImageView *_invalidRowView;
    BOOL _leftAlignDetailLabel;
    long long _remoteUIAccessoryType;
    UIView *_remoteUIAccessoryView;
    UIButton *_detailLinkButton;
    CDUnknownBlockType _detailLinkHandler;
    UIColor *_accessoryColor;
    BOOL _forceFullSizeDetailLabel;
    BOOL _activityIndicatorVisible;
    RUIWebContainerView *_webContainerView;
    struct CGSize _imageSize;
}

@property (nonatomic) BOOL activityIndicatorVisible; // @synthesize activityIndicatorVisible=_activityIndicatorVisible;
@property (nonatomic) BOOL forceFullSizeDetailLabel; // @synthesize forceFullSizeDetailLabel=_forceFullSizeDetailLabel;
@property (nonatomic) struct CGSize imageSize; // @synthesize imageSize=_imageSize;
@property (nonatomic) BOOL leftAlignDetailLabel; // @synthesize leftAlignDetailLabel=_leftAlignDetailLabel;
@property (nonatomic) long long remoteUIAccessoryType; // @synthesize remoteUIAccessoryType=_remoteUIAccessoryType;
@property (strong, nonatomic) UIView *remoteUIAccessoryView; // @synthesize remoteUIAccessoryView=_remoteUIAccessoryView;
@property (strong, nonatomic) RUIWebContainerView *webContainerView; // @synthesize webContainerView=_webContainerView;

- (void).cxx_destruct;
- (void)_accessoriesChanged;
- (id)_checkmarkImage:(BOOL)arg1;
- (void)_detailLinkPressed;
- (id)_disclosureChevronImage:(BOOL)arg1;
- (void)_setRemoteUIAccessoryType:(long long)arg1 withColor:(id)arg2;
- (void)_showActivityIndicatorAccessory;
- (id)detailLinkButton;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDetailLinkText:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)setHTMLData:(id)arg1 sourceURL:(id)arg2 delegate:(id)arg3;
- (void)setRowInvalid:(BOOL)arg1;

@end

