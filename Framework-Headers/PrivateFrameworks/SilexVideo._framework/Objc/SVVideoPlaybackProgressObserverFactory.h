//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoPlaybackProgressObserverFactory-Protocol.h>

@class NSString;
@protocol SVVideoDurationObserverFactory, SVVideoPeriodicTimeObserverFactory;

@interface SVVideoPlaybackProgressObserverFactory : NSObject <SVVideoPlaybackProgressObserverFactory>
{
    id<SVVideoPeriodicTimeObserverFactory> _periodicTimeObserverFactory;
    id<SVVideoDurationObserverFactory> _durationObserverFactory;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SVVideoDurationObserverFactory> durationObserverFactory; // @synthesize durationObserverFactory=_durationObserverFactory;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SVVideoPeriodicTimeObserverFactory> periodicTimeObserverFactory; // @synthesize periodicTimeObserverFactory=_periodicTimeObserverFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createPlaybackProgressObserverForVideo:(id)arg1;
- (id)initWithPeriodicTimeObserverFactory:(id)arg1 durationObserverFactory:(id)arg2;

@end

