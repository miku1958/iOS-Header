//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Search/NSCopying-Protocol.h>

@class NSString, SPSearchQuery;
@protocol OS_dispatch_queue, SPDaemonQueryDelegate;

@interface SPDaemonQueryToken : NSObject <NSCopying>
{
    unsigned int _queryID;
    SPSearchQuery *_query;
    id<SPDaemonQueryDelegate> _delegate;
    BOOL _queryFinished;
    BOOL _gotQueryComplete;
    BOOL _didReissue;
    BOOL _isLocalQuery;
    NSObject<OS_dispatch_queue> *_queue;
    NSString *_fbq;
    NSString *_web_fbq;
}

@property (readonly, weak, nonatomic) id<SPDaemonQueryDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL didReissue; // @synthesize didReissue=_didReissue;
@property (readonly) NSString *fbq; // @synthesize fbq=_fbq;
@property (readonly, nonatomic) BOOL gotQueryComplete; // @synthesize gotQueryComplete=_gotQueryComplete;
@property (nonatomic) BOOL isLocalQuery; // @synthesize isLocalQuery=_isLocalQuery;
@property (readonly, nonatomic) SPSearchQuery *query; // @synthesize query=_query;
@property BOOL queryFinished; // @synthesize queryFinished=_queryFinished;
@property (readonly, nonatomic) unsigned int queryID; // @synthesize queryID=_queryID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (readonly) NSString *web_fbq; // @synthesize web_fbq=_web_fbq;

- (void).cxx_destruct;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)handleLocalQueryWithResultSet:(id)arg1;
- (void)handleMessage:(id)arg1;
- (id)initWithQuery:(id)arg1 queue:(id)arg2 delegate:(id)arg3;
- (void)queryDidComplete;

@end

