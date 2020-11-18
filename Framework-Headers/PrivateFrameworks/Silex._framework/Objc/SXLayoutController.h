//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSOperationQueue, NSString, SXLayoutBlueprint, SXLayoutOperation;
@protocol SXLayoutControllerDelegate, SXLayoutOperationFactory;

@interface SXLayoutController : NSObject
{
    id<SXLayoutControllerDelegate> _delegate;
    NSString *_targetComponentIdentifier;
    SXLayoutBlueprint *_lastLayoutBlueprint;
    id<SXLayoutOperationFactory> _layoutOperationFactory;
    NSOperationQueue *_layoutOperationQueue;
    SXLayoutOperation *_currentLayoutOperation;
}

@property (strong, nonatomic) SXLayoutOperation *currentLayoutOperation; // @synthesize currentLayoutOperation=_currentLayoutOperation;
@property (weak, nonatomic) id<SXLayoutControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) SXLayoutBlueprint *lastLayoutBlueprint; // @synthesize lastLayoutBlueprint=_lastLayoutBlueprint;
@property (readonly, nonatomic) id<SXLayoutOperationFactory> layoutOperationFactory; // @synthesize layoutOperationFactory=_layoutOperationFactory;
@property (readonly, nonatomic) NSOperationQueue *layoutOperationQueue; // @synthesize layoutOperationQueue=_layoutOperationQueue;
@property (strong, nonatomic) NSString *targetComponentIdentifier; // @synthesize targetComponentIdentifier=_targetComponentIdentifier;

- (void).cxx_destruct;
- (void)finalizeLayoutForLayoutOperation:(id)arg1;
- (id)initWithLayoutOperationFactory:(id)arg1;
- (void)layoutForAttributes:(id)arg1 dataProvider:(id)arg2;
- (void)layoutForAttributes:(id)arg1 existingLayoutBlueprint:(id)arg2 dataProvider:(id)arg3;

@end

