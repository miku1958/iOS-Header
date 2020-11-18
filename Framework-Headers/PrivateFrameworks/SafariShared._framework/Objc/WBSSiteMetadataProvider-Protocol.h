//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/NSObject-Protocol.h>

@class WBSSiteMetadataRequest, WBSSiteMetadataResponse;
@protocol WBSSiteMetadataProviderDelegate;

@protocol WBSSiteMetadataProvider <NSObject>

@property (weak, nonatomic) id<WBSSiteMetadataProviderDelegate> providerDelegate;
@property (readonly, nonatomic) BOOL providesFavicons;

- (BOOL)canHandleRequest:(WBSSiteMetadataRequest *)arg1;
- (void)prepareResponseForRequest:(WBSSiteMetadataRequest *)arg1 allowDelayedResponse:(BOOL)arg2;
- (WBSSiteMetadataResponse *)responseForRequest:(WBSSiteMetadataRequest *)arg1 willProvideUpdates:(BOOL *)arg2;

@optional
- (void)emptyCaches;
- (void)purgeUnneededCacheEntries;
- (void)savePendingChangesBeforeTermination;
- (void)stopWatchingUpdatesForRequest:(WBSSiteMetadataRequest *)arg1;
@end
