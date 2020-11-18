//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSURL;
@protocol IMFileCopierDelegate, OS_dispatch_queue;

@interface IMFileCopier : NSObject
{
    BOOL _shouldCancel;
    BOOL _didErrorOccur;
    BOOL _inProgress;
    id<IMFileCopierDelegate> _delegate;
    NSURL *_inputURL;
    NSURL *_outputURL;
    id _identifier;
    unsigned long long _operation;
    void *_BOMCopier;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _callback;
}

@property void *_BOMCopier; // @synthesize _BOMCopier;
@property (copy) CDUnknownBlockType _callback; // @synthesize _callback;
@property NSObject<OS_dispatch_queue> *_queue; // @synthesize _queue;
@property id<IMFileCopierDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL didErrorOccur; // @synthesize didErrorOccur=_didErrorOccur;
@property (readonly, strong) id identifier; // @synthesize identifier=_identifier;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property (readonly, strong) NSURL *inputURL; // @synthesize inputURL=_inputURL;
@property unsigned long long operation; // @synthesize operation=_operation;
@property (readonly, strong) NSURL *outputURL; // @synthesize outputURL=_outputURL;
@property (readonly, nonatomic) BOOL wasCancelled; // @synthesize wasCancelled=_shouldCancel;

- (void)_fillOutputURLFromInputURL;
- (void)_main_copierFinishedWithResult:(id)arg1;
- (id)_temporaryCopierPath;
- (void)_worker_doCopy;
- (void)cancel;
- (void)cleanup;
- (void)dealloc;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 completionBlock:(CDUnknownBlockType)arg5 queue:(id)arg6;
- (id)initWithInputURL:(id)arg1 outputURL:(id)arg2 identifier:(id)arg3 operation:(unsigned long long)arg4 delegate:(id)arg5;
- (void)start;

@end
