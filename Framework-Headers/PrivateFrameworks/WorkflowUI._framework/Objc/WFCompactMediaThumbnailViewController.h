//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WorkflowUI/WFCompactThumbnailViewController.h>

@class AVPlayerItem;

@interface WFCompactMediaThumbnailViewController : WFCompactThumbnailViewController
{
    AVPlayerItem *_playerItem;
}

@property (readonly, nonatomic) AVPlayerItem *playerItem; // @synthesize playerItem=_playerItem;

- (void).cxx_destruct;
- (double)contentHeightForWidth:(double)arg1;
- (void)dealloc;
- (id)initWithAVPlayerItem:(id)arg1;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end
