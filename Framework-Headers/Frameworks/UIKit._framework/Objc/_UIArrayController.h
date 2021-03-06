//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSOperationQueue, NSOrderedSet, NSPredicate;
@protocol _UIArrayControllerDelegate;

@interface _UIArrayController : NSObject
{
    BOOL _firstUpdateSent;
    BOOL _invalidated;
    NSArray *_sortDescriptors;
    NSPredicate *_predicate;
    id<_UIArrayControllerDelegate> _delegate;
    NSOperationQueue *_operationQueue;
    NSOrderedSet *_lastSnapshot;
}

@property (weak, nonatomic) id<_UIArrayControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (copy, nonatomic) NSOrderedSet *lastSnapshot; // @synthesize lastSnapshot=_lastSnapshot;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (strong, nonatomic) NSPredicate *predicate; // @synthesize predicate=_predicate;
@property (strong, nonatomic) NSArray *sortDescriptors; // @synthesize sortDescriptors=_sortDescriptors;

- (void).cxx_destruct;
- (id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3;
- (void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)invalidate;
- (BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2;
- (void)processUpdate:(id)arg1 changedObjects:(id)arg2;

@end

