//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXMovieProvider.h>

@class NSSet;

@interface PXMiroMovieProvider : PXMovieProvider
{
    NSSet *_defaultAssets;
}

@property (readonly, nonatomic) NSSet *defaultAssets; // @synthesize defaultAssets=_defaultAssets;

+ (void *)_loadMiroFrameworkIfNeeded;
+ (void)initialize;
+ (void)preloadMiroFrameworkIfNeeded;
- (void).cxx_destruct;
- (Class)_miroMovieClass;
- (BOOL)canPlayMovie;
- (id)diagnosticsItemProvider;
- (id)movieViewController;

@end

