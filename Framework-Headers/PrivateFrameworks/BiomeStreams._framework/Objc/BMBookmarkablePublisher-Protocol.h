//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class BPSPublisher, NSArray;
@protocol BMBookmark, BMBookmarkablePublisher;

@protocol BMBookmarkablePublisher
- (BOOL)canStoreInternalStateInBookmark;
- (BOOL)canStorePassThroughValueInBookmark;
- (BPSPublisher *)initWithUpstreams:(NSArray *)arg1 bookmarkState:(id<BMBookmark>)arg2;
- (BPSPublisher<BMBookmarkablePublisher> *)withBookmark:(id<BMBookmark>)arg1;
@end
