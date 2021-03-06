//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableSet, _UICompoundObjectMap;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIViewAnimatablePropertyTransformer : NSObject
{
    BOOL _presentationValueCallbackRan;
    NSObject<OS_dispatch_queue> *_lockingQueue;
    CDUnknownBlockType _modelValueChangedCallback;
    CDUnknownBlockType _presentationValueChangedCallback;
    CDUnknownBlockType _stabilizedCallback;
    _UICompoundObjectMap *_capturedProperties;
    NSMutableSet *_runningProgresses;
}

@property (strong, nonatomic) _UICompoundObjectMap *capturedProperties; // @synthesize capturedProperties=_capturedProperties;
@property (copy, nonatomic) CDUnknownBlockType modelValueChangedCallback; // @synthesize modelValueChangedCallback=_modelValueChangedCallback;
@property (copy, nonatomic) CDUnknownBlockType presentationValueChangedCallback; // @synthesize presentationValueChangedCallback=_presentationValueChangedCallback;
@property (strong, nonatomic) NSMutableSet *runningProgresses; // @synthesize runningProgresses=_runningProgresses;
@property (copy, nonatomic) CDUnknownBlockType stabilizedCallback; // @synthesize stabilizedCallback=_stabilizedCallback;

- (void).cxx_destruct;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4;
- (id)initWithInputAnimatableProperties:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3 stabilizedCallback:(CDUnknownBlockType)arg4 allowsProgressAnimatableProperties:(BOOL)arg5;
- (id)initWithInputAnimatableProperties:(id)arg1 presentationValueChangedCallback:(CDUnknownBlockType)arg2;
- (id)initWithProgressAnimatableProperty:(id)arg1 modelValueSetter:(CDUnknownBlockType)arg2 presentationValueSetter:(CDUnknownBlockType)arg3;
- (void)modelValueUpdatedForProgress:(id)arg1;
- (void)performWithLock:(CDUnknownBlockType)arg1;
- (void)presentationValueStabilizedForProgress:(id)arg1;
- (void)presentationValueUpdatedForProgress:(id)arg1;
- (void)progressInvalidated:(id)arg1;

@end

