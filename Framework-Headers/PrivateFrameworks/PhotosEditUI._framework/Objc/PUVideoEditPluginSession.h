//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosEditUI/PUEditPluginSession.h>

@interface PUVideoEditPluginSession : PUEditPluginSession
{
    BOOL _allowLoopingVideoExtensions;
}

@property (nonatomic) BOOL allowLoopingVideoExtensions; // @synthesize allowLoopingVideoExtensions=_allowLoopingVideoExtensions;

- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(CDUnknownBlockType)arg2;
- (unsigned long long)pluginManagerMediaType;
- (id)videoDataSource;

@end

