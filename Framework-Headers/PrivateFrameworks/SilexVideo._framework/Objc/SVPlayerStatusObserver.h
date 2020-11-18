//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVPlayerStatusObserving-Protocol.h>

@class NSError, NSString, SVKeyValueObserver, SVPlayer;

@interface SVPlayerStatusObserver : NSObject <SVPlayerStatusObserving>
{
    CDUnknownBlockType changeBlock;
    NSError *_error;
    SVPlayer *_player;
    SVKeyValueObserver *_statusObserver;
    long long _status;
}

@property (copy, nonatomic, setter=onChange:) CDUnknownBlockType changeBlock; // @synthesize changeBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SVPlayer *player; // @synthesize player=_player;
@property (nonatomic) long long status; // @synthesize status=_status;
@property (readonly, nonatomic) SVKeyValueObserver *statusObserver; // @synthesize statusObserver=_statusObserver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPlayer:(id)arg1;

@end

