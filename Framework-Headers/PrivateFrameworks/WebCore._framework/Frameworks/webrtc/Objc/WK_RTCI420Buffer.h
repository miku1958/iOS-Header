//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <webrtc/WK_RTCI420Buffer-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface WK_RTCI420Buffer : NSObject <WK_RTCI420Buffer>
{
    scoped_refptr_b674d2a6 _i420Buffer;
}

@property (readonly, nonatomic) int chromaHeight;
@property (readonly, nonatomic) int chromaWidth;
@property (readonly, nonatomic) const char *dataU;
@property (readonly, nonatomic) const char *dataV;
@property (readonly, nonatomic) const char *dataY;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) int height;
@property (readonly, nonatomic) int strideU;
@property (readonly, nonatomic) int strideV;
@property (readonly, nonatomic) int strideY;
@property (readonly) Class superclass;
@property (readonly, nonatomic) int width;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithFrameBuffer:(scoped_refptr_b674d2a6)arg1;
- (id)initWithWidth:(int)arg1 height:(int)arg2;
- (id)initWithWidth:(int)arg1 height:(int)arg2 strideY:(int)arg3 strideU:(int)arg4 strideV:(int)arg5;
- (id)toI420;

@end

