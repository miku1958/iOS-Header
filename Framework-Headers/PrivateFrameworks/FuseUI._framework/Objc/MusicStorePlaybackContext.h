//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MusicClientContext, MusicEntityValueContext, NSArray;

@interface MusicStorePlaybackContext : MPPlaybackContext
{
    MusicClientContext *_clientContext;
    MusicEntityValueContext *_containerEntityValueContext;
    NSArray *_items;
}

@property (strong, nonatomic) MusicClientContext *clientContext; // @synthesize clientContext=_clientContext;
@property (copy, nonatomic) MusicEntityValueContext *containerEntityValueContext; // @synthesize containerEntityValueContext=_containerEntityValueContext;
@property (copy, nonatomic) NSArray *items; // @synthesize items=_items;

+ (Class)queueFeederClass;
+ (void)setDefaultClientContext:(id)arg1;
- (void).cxx_destruct;
- (id)descriptionComponents;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithStoreIDs:(id)arg1;

@end

