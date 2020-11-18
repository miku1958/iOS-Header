//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoRegistry/NRMutableStateProtocol-Protocol.h>

@class NSMutableSet, NSString;
@protocol NRMutableStateParentDelegate, OS_dispatch_queue;

@interface NRMutableStateBase : NSObject <NRMutableStateProtocol>
{
    NSMutableSet *_observers;
    id<NRMutableStateParentDelegate> _parentDelegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<NRMutableStateParentDelegate> parentDelegate; // @synthesize parentDelegate=_parentDelegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)classTypes;
+ (id)diffFrom:(id)arg1 to:(id)arg2;
+ (id)enclosedClassTypes;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)addObserverQueue:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (id)applyDiff:(id)arg1;
- (id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)notifyObserversWithDiff:(id)arg1;
- (void)notifyParentWithDiff:(id)arg1;
- (void)removeObserver:(id)arg1;

@end

