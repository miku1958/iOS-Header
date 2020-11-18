//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SpringBoardFoundation/SBFObservable-Protocol.h>

@class NSString;

@interface SBFObservable : NSObject <SBFObservable>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)forkJoin:(id)arg1;
+ (id)observableWithBlock:(CDUnknownBlockType)arg1;
- (id)generate:(CDUnknownBlockType)arg1;
- (id)map:(CDUnknownBlockType)arg1;
- (id)observeOn:(id)arg1;
- (id)subscribe:(id)arg1;
- (id)subscribeOn:(id)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1;
- (id)subscribeWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (id)throttle:(double)arg1 onScheduler:(id)arg2;
- (id)waitForResults:(id *)arg1;

@end

