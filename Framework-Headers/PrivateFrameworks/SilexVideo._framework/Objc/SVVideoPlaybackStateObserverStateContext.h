//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/NFStateMachineContextType-Protocol.h>

@class NSError, NSString;

@interface SVVideoPlaybackStateObserverStateContext : NSObject <NFStateMachineContextType>
{
    NSError *_error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithError:(id)arg1;

@end

