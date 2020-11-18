//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIListLockupCollectionViewCellLayout : TVViewLayout
{
    long long _imagePosition;
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    VUITextLayout *_descriptionTextLayout;
    TVImageLayout *_imageLayout;
    TVImageLayout *_appIconLayout;
    TVImageLayout *_monogramImageLayout;
}

@property (strong, nonatomic) TVImageLayout *appIconLayout; // @synthesize appIconLayout=_appIconLayout;
@property (strong, nonatomic) VUITextLayout *descriptionTextLayout; // @synthesize descriptionTextLayout=_descriptionTextLayout;
@property (strong, nonatomic) TVImageLayout *imageLayout; // @synthesize imageLayout=_imageLayout;
@property (nonatomic) long long imagePosition; // @synthesize imagePosition=_imagePosition;
@property (strong, nonatomic) TVImageLayout *monogramImageLayout; // @synthesize monogramImageLayout=_monogramImageLayout;
@property (strong, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property (strong, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;

+ (struct CGSize)_defaultAppIconSize;
+ (struct CGSize)_defaultImageSize;
+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end

