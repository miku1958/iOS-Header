//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, _DKSyncCompositeOperation, _DKSyncType;

@interface _DKSync2State : NSObject
{
    BOOL _isPending;
    _DKSyncType *_type;
    _DKSyncCompositeOperation *_parent;
    NSMutableArray *_completions;
}

- (void).cxx_destruct;

@end
