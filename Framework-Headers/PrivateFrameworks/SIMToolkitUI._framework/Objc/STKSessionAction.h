//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class BSAction, STKSessionBehavior;
@protocol BSXPCCoding;

@interface STKSessionAction : NSObject
{
    STKSessionBehavior *_behavior;
    id<BSXPCCoding> _data;
    BSAction *_action;
    BOOL _invalidated;
}

@property (readonly, nonatomic) BSAction *_BSAction; // @synthesize _BSAction=_action;
@property (readonly, nonatomic) STKSessionBehavior *behavior;
@property (readonly, nonatomic) id<BSXPCCoding> sessionData;

+ (id)_sessionActionFromBSAction:(id)arg1;
- (void).cxx_destruct;
- (id)_init;
- (id)_initWithBSAction:(id)arg1;
- (void)dealloc;
- (id)initWithBehavior:(id)arg1 data:(id)arg2 responseBlock:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)sendResponse:(long long)arg1;
- (void)sendResponse:(long long)arg1 withContext:(id)arg2;

@end
