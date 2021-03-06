//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MapsSupport/_MSPContainerEdit.h>

#import <MapsSupport/MSPContainerEditContentUpdate-Protocol.h>

@class NSString;
@protocol MSPImmutableObject, MSPMutableObject;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditContentUpdate : _MSPContainerEdit <MSPContainerEditContentUpdate>
{
    id<MSPMutableObject> _updatedObject;
    id<MSPImmutableObject> _updatedImmutableObject;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<MSPImmutableObject> updatedImmutableObject; // @synthesize updatedImmutableObject=_updatedImmutableObject;
@property (readonly, nonatomic) id<MSPMutableObject> updatedObject; // @synthesize updatedObject=_updatedObject;

- (void).cxx_destruct;
- (id)initWithUpdatedImmutableObject:(id)arg1;
- (id)initWithUpdatedObject:(id)arg1;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;

@end

