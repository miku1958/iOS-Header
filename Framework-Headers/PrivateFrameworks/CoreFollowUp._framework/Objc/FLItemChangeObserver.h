//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FLItemChangeObserver : NSObject
{
    int _notifyToken;
    CDUnknownBlockType _itemChangeObserver;
}

+ (id)observerWithChangeHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)setItemChangeHandler:(CDUnknownBlockType)arg1;

@end

