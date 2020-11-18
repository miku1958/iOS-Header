//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPAsyncOperation.h>

@class MPModelPerson, NSOperationQueue;

@interface MPStoreFollowOperation : MPAsyncOperation
{
    NSOperationQueue *_operationQueue;
    BOOL _unfollow;
    MPModelPerson *_person;
    CDUnknownBlockType _responseHandler;
}

@property (strong, nonatomic) MPModelPerson *person; // @synthesize person=_person;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (nonatomic) BOOL unfollow; // @synthesize unfollow=_unfollow;

+ (id)activeDSID;
- (void).cxx_destruct;
- (void)_enqueueOperationWithURL:(id)arg1 bagDictionary:(id)arg2;
- (void)_finishWithSuccess:(BOOL)arg1 error:(id)arg2;
- (id)_followURL:(id)arg1 accountDSID:(id)arg2;
- (void)execute;

@end

