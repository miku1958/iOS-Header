//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLayoutConstraint, PDFCollectionView, PDFView, UIColor;

@interface PDFThumbnailViewPrivateVars : NSObject
{
    PDFView *_PDFView;
    UIColor *_backgroundColor;
    struct CGSize _thumbnailSize;
    PDFCollectionView *_collectionView;
    NSLayoutConstraint *_topInsetConstraint;
    NSLayoutConstraint *_bottomInsetConstraint;
    NSLayoutConstraint *_leftInsetConstraint;
    NSLayoutConstraint *_rightInsetConstraint;
}

- (void).cxx_destruct;

@end

