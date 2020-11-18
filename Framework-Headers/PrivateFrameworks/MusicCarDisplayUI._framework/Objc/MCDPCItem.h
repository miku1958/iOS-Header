//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MCDPCModel, NSData, NSString, UIImage;

@interface MCDPCItem : NSObject
{
    void *_contentItem;
    BOOL _currentlyPlaying;
    UIImage *_artworkImage;
    MCDPCModel *_model;
}

@property (readonly, nonatomic) NSData *artworkData;
@property (strong, nonatomic) UIImage *artworkImage; // @synthesize artworkImage=_artworkImage;
@property (nonatomic) void *contentItem; // @synthesize contentItem=_contentItem;
@property (nonatomic) BOOL currentlyPlaying; // @synthesize currentlyPlaying=_currentlyPlaying;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isCloudItem;
@property (readonly, nonatomic) BOOL isContainer;
@property (readonly, nonatomic) BOOL isExplicitItem;
@property (readonly, nonatomic) BOOL isPlayable;
@property (readonly, weak, nonatomic) MCDPCModel *model; // @synthesize model=_model;
@property (readonly, nonatomic) float playbackProgress;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)_initWithModel:(id)arg1 MRContentItem:(void *)arg2;
- (void)dealloc;
- (id)description;

@end

