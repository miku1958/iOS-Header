//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TVPlayback/TVPMediaItem-Protocol.h>

@class NSMutableDictionary, NSString;

@interface TVPBaseMediaItem : NSObject <TVPMediaItem>
{
    NSMutableDictionary *_metadataDictionary;
    NSMutableDictionary *_transactionDictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_postMetadataDidChangeNotificationWithMetadataProperties:(id)arg1;
- (void)_postMetadataWillChangeNotificationWithMetadataProperties:(id)arg1;
- (void)_setMetadata:(id)arg1 forProperty:(id)arg2 postNotification:(BOOL)arg3;
- (BOOL)hasTrait:(id)arg1;
- (id)init;
- (BOOL)isEqualToMediaItem:(id)arg1;
- (id)mediaItemMetadataForProperty:(id)arg1;
- (id)mediaItemURL;
- (void)performMediaItemMetadataTransactionWithBlock:(CDUnknownBlockType)arg1;
- (void)removeMediaItemMetadataForProperty:(id)arg1;
- (id)reportingDelegate;
- (void)setMediaItemMetadata:(id)arg1 forProperty:(id)arg2;
- (void)updateBookmarkWithSuggestedTime:(double)arg1 forElapsedTime:(double)arg2 duration:(double)arg3 playbackOfMediaItemIsEnding:(BOOL)arg4;
- (void)updatePlayCountForElapsedTime:(double)arg1 duration:(double)arg2;

@end

