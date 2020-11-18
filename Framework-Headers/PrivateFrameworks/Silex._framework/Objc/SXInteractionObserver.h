//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXInteractionObserving-Protocol.h>

@class NSString;

@interface SXInteractionObserver : NSObject <SXInteractionObserving>
{
    CDUnknownBlockType _willBlock;
    CDUnknownBlockType _didBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) CDUnknownBlockType didBlock; // @synthesize didBlock=_didBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CDUnknownBlockType willBlock; // @synthesize willBlock=_willBlock;

- (void).cxx_destruct;
- (void)didHandleInteractionWithControl:(id)arg1;
- (void)didHandleInteractionWithGestureRecognizer:(id)arg1;
- (id)initWithDidHandleInteractionBlock:(CDUnknownBlockType)arg1;
- (id)initWithWillHandleInteractionBlock:(CDUnknownBlockType)arg1;
- (id)initWithWillHandleInteractionBlock:(CDUnknownBlockType)arg1 didHandleInteractionBlock:(CDUnknownBlockType)arg2;
- (void)willHandleInteractionWithControl:(id)arg1;
- (void)willHandleInteractionWithGestureRecognizer:(id)arg1;

@end

