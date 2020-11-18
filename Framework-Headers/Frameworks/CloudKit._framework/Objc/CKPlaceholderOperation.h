//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSDate, NSObject, NSString;
@protocol OS_dispatch_group;

@interface CKPlaceholderOperation : NSOperation
{
    NSObject<OS_dispatch_group> *_group;
    BOOL _isFinished;
    BOOL _isExecuting;
    NSString *_sectionID;
    id _context;
    NSDate *_startDate;
    NSString *_operationID;
    CDUnknownBlockType _daemonInvokeBlock;
}

@property (strong, nonatomic) id context; // @synthesize context=_context;
@property (readonly, nonatomic) CDUnknownBlockType daemonInvokeBlock; // @synthesize daemonInvokeBlock=_daemonInvokeBlock;
@property (nonatomic) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property (nonatomic) BOOL isFinished; // @synthesize isFinished=_isFinished;
@property (readonly, nonatomic) NSString *operationID; // @synthesize operationID=_operationID;
@property (strong, nonatomic) NSString *sectionID; // @synthesize sectionID=_sectionID;
@property (strong, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;

- (void).cxx_destruct;
- (id)CKPropertiesDescription;
- (void)cancel;
- (id)description;
- (id)initWithOperation:(id)arg1 daemonInvocationBlock:(CDUnknownBlockType)arg2;
- (BOOL)isConcurrent;
- (void)main;
- (void)start;

@end

