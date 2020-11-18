//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol AWDObserverDelegate;

@interface AWDObserver : NSObject
{
    struct shared_ptr<AWDObserverConnection> observerConnection;
    id<AWDObserverDelegate> _delegate;
}

@property (weak, nonatomic) id<AWDObserverDelegate> delegate; // @synthesize delegate=_delegate;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)init;
- (void)setConfiguration:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)setDelegate:(id)arg1 queue:(struct dispatch_queue_s *)arg2;

@end
