//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CVMLMetalContext;
@protocol OS_dispatch_queue;

@interface CVMLDetector : NSObject
{
    CVMLMetalContext *_metalContext;
    NSObject<OS_dispatch_queue> *_processingQueue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;

+ (BOOL)bestImageWidth:(unsigned long long *)arg1 height:(unsigned long long *)arg2 format:(unsigned int *)arg3;
- (void).cxx_destruct;
- (id)getArrayFromOptions:(id)arg1 withOptionName:(id)arg2 andEnsureClass:(Class)arg3 error:(id *)arg4;
- (id)initWithOptions:(id)arg1 error:(id *)arg2;
- (BOOL)initializeMetalContext:(id)arg1 error:(id *)arg2;
- (id)processWithOptions:(id)arg1 regionOfInterest:(struct CGRect)arg2 warningRecorder:(id)arg3 error:(id *)arg4;

@end
