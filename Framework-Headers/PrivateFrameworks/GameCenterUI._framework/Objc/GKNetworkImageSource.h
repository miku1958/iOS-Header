//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterUI/GKImageSource.h>

@class NSMutableDictionary;

@interface GKNetworkImageSource : GKImageSource
{
    NSMutableDictionary *_loadingGroups;
}

@property (strong, nonatomic) NSMutableDictionary *loadingGroups; // @synthesize loadingGroups=_loadingGroups;

- (void)dealloc;
- (BOOL)imageNeedsRefresh:(id)arg1;
- (void)loadImageForURLString:(id)arg1 loader:(CDUnknownBlockType)arg2 reference:(id)arg3 queue:(id)arg4 handler:(CDUnknownBlockType)arg5;
- (void)loadImageForURLString:(id)arg1 reference:(id)arg2 queue:(id)arg3 handler:(CDUnknownBlockType)arg4;

@end

