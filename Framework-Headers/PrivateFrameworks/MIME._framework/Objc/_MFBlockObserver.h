//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MIME/MFObserver.h>

__attribute__((visibility("hidden")))
@interface _MFBlockObserver : MFObserver
{
    CDUnknownBlockType _resultBlock;
    CDUnknownBlockType _completionBlock;
    CDUnknownBlockType _failureBlock;
}

- (void)dealloc;
- (id)initWithResultBlock:(CDUnknownBlockType)arg1 completionBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)observerDidComplete;
- (void)observerDidFailWithError:(id)arg1;
- (void)observerDidReceiveResult:(id)arg1;

@end
