//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKAppPlayer-Protocol.h>

@class IKAppDocument, IKAppPlayerBridge, NSArray, NSDate, NSDictionary, NSMutableDictionary, NSNumber, NSString;
@protocol IKAppMediaItem, IKAppPlaylist;

@interface _IKPlaceholderAppPlayer : NSObject <IKAppPlayer>
{
    NSMutableDictionary *_eventExtraInfoByEvent;
    BOOL muted;
    BOOL showsResumeMenu;
    BOOL interactiveOverlayDismissable;
    IKAppPlayerBridge *bridge;
    long long state;
    id<IKAppPlaylist> playlist;
    NSNumber *currentMediaItemDuration;
    NSDate *currentMediaItemDate;
    id<IKAppMediaItem> currentMediaItem;
    double scanRate;
    id<IKAppMediaItem> nextMediaItem;
    id<IKAppMediaItem> previousMediaItem;
    IKAppDocument *overlayDocument;
    IKAppDocument *interactiveOverlayDocument;
    NSArray *currentMediaItemAccessLogs;
    NSArray *currentMediaItemErrorLogs;
    NSDictionary *contextMenuData;
    NSDictionary *userInfo;
}

@property (readonly, nonatomic) IKAppPlayerBridge *bridge; // @synthesize bridge;
@property (copy, nonatomic) NSDictionary *contextMenuData; // @synthesize contextMenuData;
@property (readonly, nonatomic) id<IKAppMediaItem> currentMediaItem; // @synthesize currentMediaItem;
@property (readonly, nonatomic) NSArray *currentMediaItemAccessLogs; // @synthesize currentMediaItemAccessLogs;
@property (readonly, nonatomic) NSDate *currentMediaItemDate; // @synthesize currentMediaItemDate;
@property (readonly, nonatomic) NSNumber *currentMediaItemDuration; // @synthesize currentMediaItemDuration;
@property (readonly, nonatomic) NSArray *currentMediaItemErrorLogs; // @synthesize currentMediaItemErrorLogs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL interactiveOverlayDismissable; // @synthesize interactiveOverlayDismissable;
@property (strong, nonatomic) IKAppDocument *interactiveOverlayDocument; // @synthesize interactiveOverlayDocument;
@property (nonatomic) BOOL muted; // @synthesize muted;
@property (readonly, nonatomic) id<IKAppMediaItem> nextMediaItem; // @synthesize nextMediaItem;
@property (strong, nonatomic) IKAppDocument *overlayDocument; // @synthesize overlayDocument;
@property (strong, nonatomic) id<IKAppPlaylist> playlist; // @synthesize playlist;
@property (readonly, nonatomic) id<IKAppMediaItem> previousMediaItem; // @synthesize previousMediaItem;
@property (readonly, nonatomic) double scanRate; // @synthesize scanRate;
@property (nonatomic) BOOL showsResumeMenu; // @synthesize showsResumeMenu;
@property (readonly, nonatomic) long long state; // @synthesize state;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSDictionary *userInfo; // @synthesize userInfo;

- (void).cxx_destruct;
- (void)changeToMediaAtIndex:(long long)arg1;
- (void)cleanup;
- (void)next;
- (void)pause;
- (void)play;
- (void)present;
- (void)previous;
- (void)scan:(double)arg1;
- (void)setElapsedTime:(double)arg1;
- (void)startObservingEvent:(id)arg1 extraInfo:(id)arg2;
- (void)stop;
- (void)stopObservingEvent:(id)arg1;
- (void)transferValuesToAppPlayer:(id)arg1;

@end

