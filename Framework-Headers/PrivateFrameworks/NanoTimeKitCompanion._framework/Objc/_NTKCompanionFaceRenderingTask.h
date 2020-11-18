//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NTKFace;

@interface _NTKCompanionFaceRenderingTask : NSObject
{
    NTKFace *_face;
    long long _detailMode;
    CDUnknownBlockType _completionHandler;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) long long detailMode; // @synthesize detailMode=_detailMode;
@property (readonly, nonatomic) NTKFace *face; // @synthesize face=_face;
@property (readonly, nonatomic, getter=isMemberOfBatch) BOOL memberOfBatch;

- (void).cxx_destruct;
- (id)initWithFace:(id)arg1 detailMode:(long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
