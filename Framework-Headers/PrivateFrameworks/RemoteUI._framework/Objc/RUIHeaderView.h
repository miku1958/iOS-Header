//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <RemoteUI/RUIHeader-Protocol.h>

@class NSString, UIImageView, UILabel;

@interface RUIHeaderView : UIView <RUIHeader>
{
    UILabel *_headerLabel;
    UILabel *_detailHeaderLabel;
    UILabel *_subHeaderLabel;
    UIImageView *_iconView;
    int _imageAlignment;
    BOOL _isFirstSection;
    BOOL _customIconSize;
    struct UIEdgeInsets _margins;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct UIEdgeInsets margins; // @synthesize margins=_margins;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (BOOL)_hasIcon;
- (double)_headerOffset;
- (double)_imageTitlePaddingInView:(id)arg1;
- (double)_titleSubtitlePaddingInView:(id)arg1;
- (id)detailHeaderLabel;
- (double)headerHeightForWidth:(double)arg1 inView:(id)arg2;
- (id)headerLabel;
- (id)iconImage;
- (id)initWithAttributes:(id)arg1;
- (void)layoutSubviews;
- (void)setDetailHeaderColor:(id)arg1;
- (void)setDetailText:(id)arg1 attributes:(id)arg2;
- (void)setHeaderAlignment:(long long)arg1;
- (void)setHeaderColor:(id)arg1;
- (void)setIconImage:(id)arg1;
- (void)setImageAlignment:(int)arg1;
- (void)setImageSize:(struct CGSize)arg1;
- (void)setSectionIsFirst:(BOOL)arg1;
- (void)setSubHeaderAlignment:(long long)arg1;
- (void)setSubHeaderColor:(id)arg1;
- (void)setSubHeaderText:(id)arg1 attributes:(id)arg2;
- (void)setText:(id)arg1 attributes:(id)arg2;
- (id)subHeaderLabel;

@end

