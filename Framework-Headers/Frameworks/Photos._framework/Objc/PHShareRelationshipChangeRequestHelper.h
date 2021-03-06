//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHRelationshipChangeRequestHelper.h>

@class PHObject;
@protocol PHShare;

@interface PHShareRelationshipChangeRequestHelper : PHRelationshipChangeRequestHelper
{
    PHObject<PHShare> *_originalShare;
}

@property (weak, nonatomic) PHObject<PHShare> *originalShare; // @synthesize originalShare=_originalShare;

- (void).cxx_destruct;
- (id)_mutableParticipantsObjectIDsAndUUIDs;
- (void)_prepareParticipantsHelperIfNeeded;
- (void)_prepareParticipantsWithFetchResult:(id)arg1;
- (void)addParticipants:(id)arg1 toChangeRequest:(id)arg2;
- (BOOL)applyMutationsToManagedObject:(id)arg1 error:(id *)arg2;
- (id)initWithChangeRequestHelper:(id)arg1;
- (id)initWithXpcDict:(id)arg1 changeRequestHelper:(id)arg2;
- (void)removeParticipants:(id)arg1 toChangeRequest:(id)arg2;

@end

