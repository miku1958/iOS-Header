//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KeynoteQuicklook/NSObject-Protocol.h>

@class KNSlideNode, NSObject, TSDMovieInfo;
@protocol TSKMediaPlayerController;

@protocol KNAnimationMovieHost <NSObject>

@property (readonly, nonatomic) TSDMovieInfo *movieInfo;
@property (readonly, nonatomic) KNSlideNode *movieSlideNode;
@property (readonly, nonatomic) NSObject<TSKMediaPlayerController> *playerController;

- (void)applyMovieControl:(long long)arg1;
@end
