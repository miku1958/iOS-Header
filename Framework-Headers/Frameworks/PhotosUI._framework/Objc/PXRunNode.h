//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXRunNode-Protocol.h>

@class NSArray, NSLock, NSSet, NSString, PXRunNodeOperation;
@protocol PXRunNodeDelegate;

@interface PXRunNode : NSObject <PXRunNode>
{
    PXRunNodeOperation *_operation;
    NSArray *_dependencies;
    id<PXRunNodeDelegate> _delegate;
    NSSet *__dependencySet;
    NSLock *__operationLock;
}

@property (readonly, nonatomic) NSSet *_dependencySet; // @synthesize _dependencySet=__dependencySet;
@property (readonly, nonatomic) NSLock *_operationLock; // @synthesize _operationLock=__operationLock;
@property (readonly, getter=isCanceled) BOOL canceled;
@property (readonly, getter=isComplete) BOOL complete;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXRunNodeDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy, nonatomic) NSArray *dependencies; // @synthesize dependencies=_dependencies;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isRunning) BOOL running;
@property (readonly) unsigned long long state;
@property (readonly) Class superclass;
@property (readonly, getter=isWaiting) BOOL waiting;

+ (id)_defaultNodeRunner;
+ (void)processGraphForRunNode:(id)arg1;
- (void).cxx_destruct;
- (void)_performChangesToOperation:(CDUnknownBlockType)arg1;
- (void)cancel;
- (void)cancelWithError:(id)arg1;
- (void)complete;
- (void)completeWithError:(id)arg1;
- (void)didCancel;
- (id)init;
- (id)initWithDependencies:(id)arg1;
- (id)newOperation;
- (void)run;

@end

