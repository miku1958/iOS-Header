//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MediaControlClient;
@protocol AirPlayRemoteSlideshowDelegate, OS_dispatch_queue;

@interface AirPlayRemoteSlideshow : NSObject
{
    NSObject<OS_dispatch_queue> *_internalQueue;
    MediaControlClient *_client;
    id<AirPlayRemoteSlideshowDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_userQueue;
    BOOL _started;
    double _startTime;
}

@property (nonatomic) id<AirPlayRemoteSlideshowDelegate> delegate; // @synthesize delegate=_delegate;

- (void)_configureEventHandler;
- (void)dealloc;
- (void)getFeaturesWithCompletion:(CDUnknownBlockType)arg1;
- (void)getFeaturesWithOptions:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;
- (void)setDispatchQueue:(id)arg1;
- (void)setHost:(id)arg1;
- (void)setPassword:(id)arg1;
- (void)startWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)stopWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

