//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoGravityProviding-Protocol.h>

@class NSString;
@protocol SVVideoPresentationSizeObserving, SVVideoViewControllerSizeObserving;

@interface SVVideoGravityProvider : NSObject <SVVideoGravityProviding>
{
    CDUnknownBlockType _changeBlock;
    NSString *_videoGravity;
    NSString *_landscapeVideoGravity;
    NSString *_portraitVideoGravity;
    id<SVVideoPresentationSizeObserving> _presentationSizeObserver;
    id<SVVideoViewControllerSizeObserving> _videoViewControllerSizeObserver;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock=_changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *landscapeVideoGravity; // @synthesize landscapeVideoGravity=_landscapeVideoGravity;
@property (copy, nonatomic) NSString *portraitVideoGravity; // @synthesize portraitVideoGravity=_portraitVideoGravity;
@property (readonly, nonatomic) id<SVVideoPresentationSizeObserving> presentationSizeObserver; // @synthesize presentationSizeObserver=_presentationSizeObserver;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *videoGravity; // @synthesize videoGravity=_videoGravity;
@property (readonly, nonatomic) id<SVVideoViewControllerSizeObserving> videoViewControllerSizeObserver; // @synthesize videoViewControllerSizeObserver=_videoViewControllerSizeObserver;

- (void).cxx_destruct;
- (id)initWithPresentationSizeObserver:(id)arg1 videoViewControllerSizeObserver:(id)arg2;
- (void)updateVideoGravityWithPresentationSize:(struct CGSize)arg1 videoViewControllerSize:(struct CGSize)arg2;

@end
