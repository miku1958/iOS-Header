//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSMutableDictionary;

@interface NUGLFramebuffer : NUGLObject
{
    NSMutableDictionary *_attachments;
}

- (void).cxx_destruct;
- (void)attach:(id)arg1 to:(unsigned int)arg2;
- (void)bind:(unsigned int)arg1 context:(id)arg2;
- (void)delete;
- (void)detach:(id)arg1 from:(unsigned int)arg2;
- (void)generate:(id)arg1;
- (id)init;
- (void)read:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)removeAllAttachments;
- (void)unbind:(unsigned int)arg1 context:(id)arg2;
- (void)useWithTarget:(unsigned int)arg1 context:(id)arg2 block:(CDUnknownBlockType)arg3;
- (void)write:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

