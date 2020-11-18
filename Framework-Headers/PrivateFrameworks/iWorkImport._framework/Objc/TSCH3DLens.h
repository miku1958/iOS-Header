//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSCH3DLens : NSObject <NSCopying>
{
    float mNear;
    float mFar;
}

@property (nonatomic) float far; // @synthesize far=mFar;
@property (nonatomic) float near; // @synthesize near=mNear;

+ (id)lens;
- (void)calculateCullingPlanes:(vector_5e6a89be *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

