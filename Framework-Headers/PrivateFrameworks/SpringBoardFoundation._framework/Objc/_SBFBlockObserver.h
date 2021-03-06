//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardFoundation/SBFObserver-Protocol.h>

@class NSString;

@interface _SBFBlockObserver : NSObject <SBFObserver>
{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end

