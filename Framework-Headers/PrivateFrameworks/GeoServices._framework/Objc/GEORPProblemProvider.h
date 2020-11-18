//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOProtobufSessionTaskDelegate-Protocol.h>

@class GEOProtobufSession, GEOProtobufSessionTask, NSString;

@interface GEORPProblemProvider : NSObject <GEOProtobufSessionTaskDelegate>
{
    GEOProtobufSession *_protobufSession;
    GEOProtobufSessionTask *_submissionTask;
    GEOProtobufSessionTask *_statusTask;
    CDUnknownBlockType _submissionErrorHandler;
    CDUnknownBlockType _submissionFinishedHandler;
    CDUnknownBlockType _statusErrorHandler;
    CDUnknownBlockType _statusFinishedHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) GEOProtobufSession *protobufSession; // @synthesize protobufSession=_protobufSession;
@property (copy, nonatomic) CDUnknownBlockType statusErrorHandler; // @synthesize statusErrorHandler=_statusErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType statusFinishedHandler; // @synthesize statusFinishedHandler=_statusFinishedHandler;
@property (strong, nonatomic) GEOProtobufSessionTask *statusTask; // @synthesize statusTask=_statusTask;
@property (copy, nonatomic) CDUnknownBlockType submissionErrorHandler; // @synthesize submissionErrorHandler=_submissionErrorHandler;
@property (copy, nonatomic) CDUnknownBlockType submissionFinishedHandler; // @synthesize submissionFinishedHandler=_submissionFinishedHandler;
@property (strong, nonatomic) GEOProtobufSessionTask *submissionTask; // @synthesize submissionTask=_submissionTask;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)cancelError;
- (void)cancelRequest;
- (void)didCompleteStatusTask;
- (void)didCompleteSubmissionTask;
- (id)init;
- (void)protobufSession:(id)arg1 didCompleteTask:(id)arg2;
- (void)startStatusRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startSubmissionRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;

@end

