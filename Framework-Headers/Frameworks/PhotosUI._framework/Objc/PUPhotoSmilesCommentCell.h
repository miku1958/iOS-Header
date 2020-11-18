//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSOrderedSet, UILabel, UIView;

__attribute__((visibility("hidden")))
@interface PUPhotoSmilesCommentCell : UITableViewCell
{
    BOOL _isVideo;
    BOOL _usesCompactSeparators;
    UILabel *_smileContentLabel;
    NSOrderedSet *_userLikes;
    UIView *_styledSeparatorView;
}

@property (nonatomic) BOOL isVideo; // @synthesize isVideo=_isVideo;
@property (readonly, strong, nonatomic) UILabel *smileContentLabel; // @synthesize smileContentLabel=_smileContentLabel;
@property (readonly, strong, nonatomic) UIView *styledSeparatorView; // @synthesize styledSeparatorView=_styledSeparatorView;
@property (copy, nonatomic) NSOrderedSet *userLikes; // @synthesize userLikes=_userLikes;
@property (nonatomic) BOOL usesCompactSeparators; // @synthesize usesCompactSeparators=_usesCompactSeparators;

+ (id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3;
+ (id)_smileStringForComments:(id)arg1;
+ (double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(long long)arg4;
- (void).cxx_destruct;
- (void)_updateContent;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;

@end
