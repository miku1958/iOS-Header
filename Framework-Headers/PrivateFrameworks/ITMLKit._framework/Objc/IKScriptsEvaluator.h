//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/ISStoreURLOperationDelegate-Protocol.h>
#import <ITMLKit/NSURLConnectionDataDelegate-Protocol.h>

@class IKAppContext, JSManagedValue, NSArray, NSMutableArray, NSNumber, NSString;

@interface IKScriptsEvaluator : NSObject <ISStoreURLOperationDelegate, NSURLConnectionDataDelegate>
{
    BOOL _isJingleRequest;
    NSArray *_scripts;
    IKAppContext *_appContext;
    JSManagedValue *_callback;
    NSMutableArray *_records;
    NSString *_identifier;
}

@property (weak, nonatomic) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property (strong, nonatomic) JSManagedValue *callback; // @synthesize callback=_callback;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isJingleRequest; // @synthesize isJingleRequest=_isJingleRequest;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentage;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSamplingPercentageCachedResponses;
@property (readonly, nonatomic) NSNumber *metricsLoadURLSessionDuration;
@property (strong, nonatomic) NSMutableArray *records; // @synthesize records=_records;
@property (strong, nonatomic) NSArray *scripts; // @synthesize scripts=_scripts;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_operation:(id)arg1 finishedWithResult:(id)arg2 error:(id)arg3;
- (void)_sendCallback:(id)arg1 inContext:(id)arg2 success:(BOOL)arg3;
- (void)evaluate;
- (void)evaluateScripts;
- (void)handleScirptLoadFailure;
- (id)initWithScripts:(id)arg1 withContext:(id)arg2 callback:(id)arg3 jingleRequest:(BOOL)arg4;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)parseScriptData:(id)arg1 successPredicate:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (void)scriptDidLoadWithID:(id)arg1 data:(id)arg2 error:(id)arg3;

@end

