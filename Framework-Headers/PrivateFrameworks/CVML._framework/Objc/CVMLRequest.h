//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <CVML/CVMLWarningRecorder-Protocol.h>

@class CVMLDetector, CVMLWarningRecorder, NSArray, NSDictionary, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface CVMLRequest : NSObject <CVMLWarningRecorder>
{
    NSString *_requestName;
    NSDictionary *_options;
    CVMLDetector *_detector;
    CVMLWarningRecorder *_warningRecorder;
    NSObject<OS_dispatch_semaphore> *_cancellationSemaphore;
    NSObject<OS_dispatch_queue> *_cancellationQueue;
    BOOL _cancellable;
    NSArray *_results;
    CDUnknownBlockType _completionHandler;
    struct CGRect _roi;
}

@property BOOL cancellable; // @synthesize cancellable=_cancellable;
@property (strong) NSObject<OS_dispatch_semaphore> *cancellationSemaphore; // @synthesize cancellationSemaphore=_cancellationSemaphore;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *options; // @synthesize options=_options;
@property (readonly) NSString *requestName; // @synthesize requestName=_requestName;
@property (readonly) NSArray *results; // @synthesize results=_results;
@property struct CGRect roi; // @synthesize roi=_roi;
@property (readonly) Class superclass;

+ (BOOL)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (BOOL)getDoubleValue:(double *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(double)arg4 error:(id *)arg5;
+ (BOOL)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 error:(id *)arg4;
+ (BOOL)getFloatValue:(float *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withDefaultValue:(float)arg4 error:(id *)arg5;
+ (BOOL)getOptionalArray:(id *)arg1 forKey:(id)arg2 inOptions:(id)arg3 withElementsOfClass:(Class)arg4 error:(id *)arg5;
+ (BOOL)getOptionalInputFacesArray:(id *)arg1 inOptions:(id)arg2 error:(id *)arg3;
+ (BOOL)getOptionalObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (BOOL)getPixelFocalLength:(float *)arg1 inOptions:(id)arg2 withDefaultValue:(float)arg3 error:(id *)arg4;
+ (BOOL)getRequiredObject:(id *)arg1 ofClass:(Class)arg2 forKey:(id)arg3 inOptions:(id)arg4 error:(id *)arg5;
+ (void)initialize;
+ (void)recordDefaultOptionsInDictionary:(id)arg1;
+ (id)requestWithName:(id)arg1 options:(id)arg2;
+ (id)requestWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
- (void)cancel;
- (id)imageRequestHandlerForHandler:(id)arg1 error:(id *)arg2;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)internalCancelRequestWithHandler:(id)arg1 error:(id *)arg2;
- (BOOL)internalProcessWithHandler:(id)arg1 error:(id *)arg2;
- (BOOL)processWithHandler:(id)arg1 error:(id *)arg2;
- (void)recordWarning:(id)arg1 value:(id)arg2;
- (void)setResults:(id)arg1;
- (id)valueForWarning:(id)arg1;
- (id)warnings;

@end

