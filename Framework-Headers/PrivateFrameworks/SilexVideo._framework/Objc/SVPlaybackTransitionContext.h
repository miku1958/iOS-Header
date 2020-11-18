//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlaybackTransitionContext-Protocol.h>

@class NSString;
@protocol SVVideo;

@interface SVPlaybackTransitionContext : NSObject <SVPlaybackTransitionContext>
{
    id<SVVideo> _fromVideo;
    id<SVVideo> _toVideo;
    CDUnknownBlockType _completionBlock;
}

@property (copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SVVideo> fromVideo; // @synthesize fromVideo=_fromVideo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<SVVideo> toVideo; // @synthesize toVideo=_toVideo;

- (void).cxx_destruct;
- (void)completeTransition:(BOOL)arg1;
- (id)initWithFromVideo:(id)arg1 toVideo:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;

@end

