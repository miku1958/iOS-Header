//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CKTransactionalComponentDataSourceAppliedChanges, CKTransactionalComponentDataSourceState;

@interface CKTransactionalComponentDataSourceChange : NSObject
{
    CKTransactionalComponentDataSourceState *_state;
    CKTransactionalComponentDataSourceAppliedChanges *_appliedChanges;
}

@property (readonly, nonatomic) CKTransactionalComponentDataSourceAppliedChanges *appliedChanges; // @synthesize appliedChanges=_appliedChanges;
@property (readonly, nonatomic) CKTransactionalComponentDataSourceState *state; // @synthesize state=_state;

- (void).cxx_destruct;
- (id)initWithState:(id)arg1 appliedChanges:(id)arg2;

@end

