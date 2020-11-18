//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteractionProgressObserver-Protocol.h>

@class NSMapTable, NSString, NSUUID;

__attribute__((visibility("hidden")))
@interface _UIInteractiveAnimationRecord : NSObject <UIInteractionProgressObserver>
{
    BOOL _completed;
    NSUUID *_UUID;
    NSMapTable *_pausedTimes;
}

@property (readonly, nonatomic) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (nonatomic, getter=isCompleted) BOOL completed; // @synthesize completed=_completed;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSMapTable *pausedTimes; // @synthesize pausedTimes=_pausedTimes;
@property (readonly) Class superclass;

+ (void)discardRecord:(id)arg1;
+ (void)saveRecord:(id)arg1;
- (void).cxx_destruct;
- (id)init;
- (id)initWithUUID:(id)arg1;
- (void)interactionProgress:(id)arg1 didEnd:(BOOL)arg2;
- (void)interactionProgressDidUpdate:(id)arg1;

@end

