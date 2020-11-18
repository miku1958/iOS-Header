//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIFavoriteViewLayout : TVViewLayout
{
    long long _layoutType;
    VUITextLayout *_titleTextLayout;
    TVImageLayout *_logoImageLayout;
    TVImageLayout *_accessoryImageLayout;
}

@property (readonly, nonatomic) TVImageLayout *accessoryImageLayout; // @synthesize accessoryImageLayout=_accessoryImageLayout;
@property (readonly, nonatomic) long long layoutType; // @synthesize layoutType=_layoutType;
@property (readonly, nonatomic) TVImageLayout *logoImageLayout; // @synthesize logoImageLayout=_logoImageLayout;
@property (readonly, nonatomic) VUITextLayout *titleTextLayout; // @synthesize titleTextLayout=_titleTextLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (id)initWithType:(long long)arg1;

@end

