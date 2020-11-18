//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXPlaybackTransitionContext-Protocol.h>

@class NSString;
@protocol SXVideo;

@interface SXPlaybackTransitionContext : NSObject <SXPlaybackTransitionContext>
{
    id<SXVideo> _fromVideo;
    id<SXVideo> _toVideo;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXVideo> fromVideo; // @synthesize fromVideo=_fromVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SXVideo> toVideo; // @synthesize toVideo=_toVideo;

- (void).cxx_destruct;
- (void)completeTransition:(BOOL)arg1;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end
