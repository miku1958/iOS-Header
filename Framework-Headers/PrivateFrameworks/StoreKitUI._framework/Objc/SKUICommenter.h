//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIMediaSocialAuthor.h>

@class NSString, UIImage;

@interface SKUICommenter : SKUIMediaSocialAuthor
{
    BOOL _isAttributed;
    BOOL _isMySelf;
    BOOL _useImageCopy;
    NSString *_attributedName;
    UIImage *_thumbnailImage;
}

@property (strong, nonatomic) NSString *attributedName; // @synthesize attributedName=_attributedName;
@property (nonatomic) BOOL isAttributed; // @synthesize isAttributed=_isAttributed;
@property (nonatomic) BOOL isMySelf; // @synthesize isMySelf=_isMySelf;
@property (copy, nonatomic) UIImage *thumbnailImage; // @synthesize thumbnailImage=_thumbnailImage;
@property (nonatomic) BOOL useImageCopy; // @synthesize useImageCopy=_useImageCopy;

- (void).cxx_destruct;
- (id)initWithAuthor:(id)arg1;

@end

