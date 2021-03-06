//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, NSString, QLItem, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface QLListCell : UITableViewCell
{
    NSLayoutConstraint *_leftConstraint;
    UILabel *_title;
    UILabel *_subtitle;
    UIImageView *_thumbnailView;
    long long _loadingID;
    QLItem *_item;
    NSString *_folderName;
    long long _fileDepthLevel;
    NSString *_subtitleString;
    UIImage *_thumbnail;
    unsigned long long _row;
}

@property (nonatomic) long long fileDepthLevel; // @synthesize fileDepthLevel=_fileDepthLevel;
@property (strong, nonatomic) NSString *folderName; // @synthesize folderName=_folderName;
@property (strong, nonatomic) QLItem *item; // @synthesize item=_item;
@property unsigned long long row; // @synthesize row=_row;
@property (copy, nonatomic) NSString *subtitleString; // @synthesize subtitleString=_subtitleString;
@property (strong, nonatomic) UIImage *thumbnail; // @synthesize thumbnail=_thumbnail;

+ (id)listCell;
- (void).cxx_destruct;
- (id)_folderImage;
- (void)awakeFromNib;
- (void)prepareForReuse;

@end

