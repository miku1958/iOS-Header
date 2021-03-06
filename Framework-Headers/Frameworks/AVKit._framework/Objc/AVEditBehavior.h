//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AVKit/AVBehavior-Protocol.h>
#import <AVKit/AVBehaviorInternal-Protocol.h>

@class AVEditBehaviorContext, NSString;
@protocol AVEditBehaviorDelegate;

@interface AVEditBehavior : NSObject <AVBehaviorInternal, AVBehavior>
{
    AVEditBehaviorContext *_behaviorContext;
    id<AVEditBehaviorDelegate> _delegate;
}

@property (weak, nonatomic) AVEditBehaviorContext *behaviorContext; // @synthesize behaviorContext=_behaviorContext;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AVEditBehaviorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)behaviorContextClass;
- (void).cxx_destruct;
- (void)didMoveToContext:(id)arg1;
- (void)didRemoveFromContext:(id)arg1;
- (void)willMoveToContext:(id)arg1;
- (void)willRemoveFromContext:(id)arg1;

@end

