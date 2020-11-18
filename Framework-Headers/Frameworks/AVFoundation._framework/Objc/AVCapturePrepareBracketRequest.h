//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FigCaptureStillImageSettings;

@interface AVCapturePrepareBracketRequest : NSObject
{
    CDUnknownBlockType _completionBlock;
    FigCaptureStillImageSettings *_settings;
}

@property (readonly) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property (readonly) FigCaptureStillImageSettings *settings; // @synthesize settings=_settings;

+ (id)prepareBracketRequestWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;
- (id)_initWithCompletionBlock:(CDUnknownBlockType)arg1 settings:(id)arg2;
- (void)dealloc;

@end

