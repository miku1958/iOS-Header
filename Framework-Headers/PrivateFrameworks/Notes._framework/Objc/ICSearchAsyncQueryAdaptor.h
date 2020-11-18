//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol ICSearchAsyncQueryDelegate, ICSearchAsyncQueryable, ICSearchQueryable;

@interface ICSearchAsyncQueryAdaptor : NSObject
{
    BOOL _cancelled;
    id<ICSearchQueryable> _searchQueryable;
    id<ICSearchAsyncQueryable> _owner;
    id<ICSearchAsyncQueryDelegate> _delegate;
    id _query;
}

@property BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (weak, nonatomic) id<ICSearchAsyncQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property (weak, nonatomic) id<ICSearchAsyncQueryable> owner; // @synthesize owner=_owner;
@property (strong, nonatomic) id query; // @synthesize query=_query;
@property (weak, nonatomic) id<ICSearchQueryable> searchQueryable; // @synthesize searchQueryable=_searchQueryable;

- (void).cxx_destruct;
- (void)cancel;
- (void)execute;
- (id)initWithTerms:(id)arg1 searchQueryable:(id)arg2 delegate:(id)arg3 owner:(id)arg4;

@end
