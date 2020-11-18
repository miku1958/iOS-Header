//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

@class PUProgressIndicatorView;

__attribute__((visibility("hidden")))
@interface PULoadingIndicatorTileViewController : PUTileViewController
{
    long long _style;
    PUProgressIndicatorView *_indicatorView;
}

@property (strong, nonatomic) PUProgressIndicatorView *indicatorView; // @synthesize indicatorView=_indicatorView;
@property (nonatomic) long long style; // @synthesize style=_style;

+ (id)_createIndicatorViewForStyle:(long long)arg1;
+ (void)_destroyIndicatorView:(id)arg1;
+ (struct CGSize)loadingIndicatorTileSizeForStyle:(long long)arg1;
- (void).cxx_destruct;
- (void)becomeReusable;
- (void)setStyle:(long long)arg1 animated:(BOOL)arg2;

@end

