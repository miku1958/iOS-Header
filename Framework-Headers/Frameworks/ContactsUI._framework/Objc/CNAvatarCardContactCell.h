//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ContactsUI/CNAvatarCardActionCell.h>

@class UIImageView;

__attribute__((visibility("hidden")))
@interface CNAvatarCardContactCell : CNAvatarCardActionCell
{
    UIImageView *_contactImageView;
}

@property (strong, nonatomic) UIImageView *contactImageView; // @synthesize contactImageView=_contactImageView;

- (void).cxx_destruct;
- (void)_updateFonts;
- (void)awakeFromNib;
- (BOOL)moreHighlighted;
- (void)prepareForReuse;
- (void)reloadData;

@end

