//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHMediaRequestContext.h>

@class NSProgress, PHVideoRequestOptions;

@interface PHVideoRequestContext : PHMediaRequestContext
{
    NSProgress *_progress;
    PHVideoRequestOptions *_videoOptions;
    long long _intent;
}

@property (readonly, nonatomic) long long intent; // @synthesize intent=_intent;
@property (readonly, nonatomic) PHVideoRequestOptions *videoOptions; // @synthesize videoOptions=_videoOptions;

- (void).cxx_destruct;
- (id)_lazyProgress;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 options:(id)arg5 intent:(long long)arg6 resultHandler:(CDUnknownBlockType)arg7;
- (id)initialRequests;
- (BOOL)isNetworkAccessAllowed;
- (void)processMediaResult:(id)arg1 forRequest:(id)arg2;
- (CDUnknownBlockType)progressHandler;
- (id)progresses;
- (BOOL)representsShareableHighQualityResource;
- (BOOL)shouldReportProgress;
- (long long)type;

@end

