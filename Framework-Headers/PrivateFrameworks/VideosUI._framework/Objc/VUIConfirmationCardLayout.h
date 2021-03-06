//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TVMLKit/TVViewLayout.h>

@class TVImageLayout, VUITextLayout;

__attribute__((visibility("hidden")))
@interface VUIConfirmationCardLayout : TVViewLayout
{
    TVImageLayout *_badgeLayout;
    VUITextLayout *_textLayout;
    struct TVCornerRadii _borderRadii;
}

@property (readonly, nonatomic) TVImageLayout *badgeLayout; // @synthesize badgeLayout=_badgeLayout;
@property (nonatomic) struct TVCornerRadii borderRadii; // @synthesize borderRadii=_borderRadii;
@property (readonly, nonatomic) VUITextLayout *textLayout; // @synthesize textLayout=_textLayout;

+ (id)layoutWithLayout:(id)arg1 element:(id)arg2;
- (void).cxx_destruct;
- (id)init;

@end

