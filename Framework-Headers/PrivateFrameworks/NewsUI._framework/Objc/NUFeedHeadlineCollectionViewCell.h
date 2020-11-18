//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NUViewNode;

@interface NUFeedHeadlineCollectionViewCell : UICollectionViewCell
{
    NUViewNode *_thumbnailImageViewNode;
    NUViewNode *_publisherLogoImageViewNode;
    NUViewNode *_titleLabelNode;
    NUViewNode *_dateLabelNode;
    NSString *_headlineIdentifier;
}

@property (readonly, nonatomic) NUViewNode *dateLabelNode; // @synthesize dateLabelNode=_dateLabelNode;
@property (copy, nonatomic) NSString *headlineIdentifier; // @synthesize headlineIdentifier=_headlineIdentifier;
@property (readonly, nonatomic) NUViewNode *publisherLogoImageViewNode; // @synthesize publisherLogoImageViewNode=_publisherLogoImageViewNode;
@property (readonly, nonatomic) NUViewNode *thumbnailImageViewNode; // @synthesize thumbnailImageViewNode=_thumbnailImageViewNode;
@property (readonly, nonatomic) NUViewNode *titleLabelNode; // @synthesize titleLabelNode=_titleLabelNode;

+ (id)dateLabelFont;
+ (id)titleLabelFont;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)prepareForReuse;
- (void)setHighlighted:(BOOL)arg1;

@end
