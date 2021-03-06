//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NTKFace, NTKFaceSnapshotCacheRequestOptions;

@interface NTKFaceSnapshotCacheRequest : NSObject
{
    NSDate *_createdAt;
    NTKFace *_face;
    NTKFaceSnapshotCacheRequestOptions *_options;
    CDUnknownBlockType _completion;
}

@property (copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property (readonly, copy, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property (readonly, copy, nonatomic) NTKFace *face; // @synthesize face=_face;
@property (readonly, copy, nonatomic) NTKFaceSnapshotCacheRequestOptions *options; // @synthesize options=_options;

- (void).cxx_destruct;
- (id)initWithFace:(id)arg1 options:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

