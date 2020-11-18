//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Parsec/PRSQueryTask.h>

#import <Parsec/PRSParsecDataHandler-Protocol.h>
#import <Parsec/PRSTriggerTask-Protocol.h>

@class NSMutableData, NSString, NSURLSessionDataTask;
@protocol PRSSessionController;

@interface PRSRealQueryTask : PRSQueryTask <PRSParsecDataHandler, PRSTriggerTask>
{
    BOOL _doResume;
    BOOL _failed;
    BOOL _doCache;
    BOOL _allowLocation;
    NSURLSessionDataTask *_dataTask;
    NSMutableData *_collectedData;
    double _startTime;
    NSString *_queryString;
    id<PRSSessionController> _factory;
    double _scaleFactor;
}

@property (nonatomic) BOOL allowLocation; // @synthesize allowLocation=_allowLocation;
@property (strong, nonatomic) NSMutableData *collectedData; // @synthesize collectedData=_collectedData;
@property (strong, nonatomic) NSURLSessionDataTask *dataTask; // @synthesize dataTask=_dataTask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL doCache; // @synthesize doCache=_doCache;
@property BOOL doResume; // @synthesize doResume=_doResume;
@property (readonly) id<PRSSessionController> factory; // @synthesize factory=_factory;
@property BOOL failed; // @synthesize failed=_failed;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *queryString; // @synthesize queryString=_queryString;
@property double scaleFactor; // @synthesize scaleFactor=_scaleFactor;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_processSearchResponseOnClientQueue:(id)arg1;
- (void)cancel;
- (void)decodeData:(id)arg1;
- (void)gotCachedResultSet:(id)arg1;
- (id)initWithSession:(id)arg1 handler:(id)arg2 factory:(id)arg3 queue:(id)arg4 scaleFactor:(double)arg5 allowLocation:(BOOL)arg6 feedback:(id)arg7;
- (void)resume;
- (void)triggerQuery:(BOOL)arg1;
- (void)trigger_noresults;

@end

