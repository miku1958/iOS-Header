//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehaviorContext-Protocol.h>

@class AVPlayerViewController, NSString;

__attribute__((visibility("hidden")))
@interface AVDefaultBehaviorContext : NSObject <AVBehaviorContext>
{
    AVPlayerViewController *_playerViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, weak, nonatomic) AVPlayerViewController *playerViewController; // @synthesize playerViewController=_playerViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithAVKitOwner:(id)arg1;

@end

