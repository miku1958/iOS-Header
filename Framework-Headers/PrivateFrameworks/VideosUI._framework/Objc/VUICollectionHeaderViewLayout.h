//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUICollectionHeaderViewLayout : TVViewLayout
{
    VUITextLayout *_titleTextLayout;
    VUITextLayout *_subtitleTextLayout;
    TVImageLayout *_imageViewLayout;
}

@property (strong, nonatomic) TVImageLayout *imageViewLayout; // @synthesize imageViewLayout=_imageViewLayout;
@property (readonly, nonatomic) VUITextLayout *subtitleTextLayout; // @synthesize subtitleTextLayout=_subtitleTextLayout;
@property (readonly, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end

