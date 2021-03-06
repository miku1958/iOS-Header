//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXLayoutPipeline-Protocol.h>

@class NSMutableArray, NSOperationQueue, NSString;
@protocol SXDOMObjectProviderFactory, SXLayoutOperationFactory, SXLayoutPipelineDelegate;

@interface SXLayoutPipeline : NSObject <SXLayoutPipeline>
{
    id<SXLayoutPipelineDelegate> delegate;
    id<SXLayoutOperationFactory> _layoutOperationFactory;
    id<SXDOMObjectProviderFactory> _DOMObjectProviderFactory;
    NSOperationQueue *_layoutOperationQueue;
    NSMutableArray *_preProcessors;
    NSMutableArray *_postProcessors;
}

@property (readonly, nonatomic) id<SXDOMObjectProviderFactory> DOMObjectProviderFactory; // @synthesize DOMObjectProviderFactory=_DOMObjectProviderFactory;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SXLayoutPipelineDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXLayoutOperationFactory> layoutOperationFactory; // @synthesize layoutOperationFactory=_layoutOperationFactory;
@property (readonly, nonatomic) NSOperationQueue *layoutOperationQueue; // @synthesize layoutOperationQueue=_layoutOperationQueue;
@property (readonly, nonatomic) NSMutableArray *postProcessors; // @synthesize postProcessors=_postProcessors;
@property (readonly, nonatomic) NSMutableArray *preProcessors; // @synthesize preProcessors=_preProcessors;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addProcessor:(id)arg1 type:(unsigned long long)arg2;
- (void)cancelTasks;
- (void)finalizeLayoutForLayoutOperation:(id)arg1 task:(id)arg2 DOMObjectProvider:(id)arg3;
- (id)initWithLayoutOperationFactory:(id)arg1 DOMObjectProviderFactory:(id)arg2;
- (void)layoutWithTask:(id)arg1;
- (void)removeProcessor:(id)arg1 type:(unsigned long long)arg2;

@end

