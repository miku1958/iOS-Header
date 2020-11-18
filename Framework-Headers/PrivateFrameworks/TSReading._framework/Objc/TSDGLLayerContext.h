//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSReading/TSDGLLayerContext-Protocol.h>

@class EAGLContext, NSString;

@interface TSDGLLayerContext : NSObject <TSDGLLayerContext>
{
    EAGLContext *mContext;
    unsigned int mRenderbuffer;
    unsigned int mFramebuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)createFramebufferFromLayer:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isValid;
- (void)lock;
- (BOOL)makeCurrentContext;
- (void)presentRenderbuffer;
- (void)teardown;
- (void)unlock;

@end

