//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSKQueuedObserverSet : NSObject
{
    int mChangeType;
    id mObserver;
    id mChangeSource;
    BOOL mIsClass;
}

+ (id)queuedObserverSetWithChangeType:(int)arg1 observer:(id)arg2 changeSource:(id)arg3 isClass:(BOOL)arg4;
- (void)dealloc;

@end

