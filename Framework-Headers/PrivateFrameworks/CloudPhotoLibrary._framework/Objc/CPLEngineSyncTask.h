//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CPLEngineLibrary, NSString;
@protocol CPLEngineSyncTaskDelegate, NSCoding;

@interface CPLEngineSyncTask : NSObject
{
    BOOL _foreground;
    BOOL _paused;
    BOOL _cancelled;
    id<CPLEngineSyncTaskDelegate> _delegate;
    CPLEngineLibrary *_engineLibrary;
    id<NSCoding> _transportUserIdentifier;
}

@property (getter=isCancelled, setter=_setCancelled:) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong) id<CPLEngineSyncTaskDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property (nonatomic) BOOL foreground; // @synthesize foreground=_foreground;
@property (getter=isPaused, setter=_setPaused:) BOOL paused; // @synthesize paused=_paused;
@property (readonly, nonatomic) NSString *taskIdentifier;
@property (strong, nonatomic) id<NSCoding> transportUserIdentifier; // @synthesize transportUserIdentifier=_transportUserIdentifier;

+ (id)taskWithEngineLibrary:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (id)description;
- (unsigned long long)diskPressureState;
- (id)initWithEngineLibrary:(id)arg1;
- (void)launch;
- (void)pause;
- (void)resume;
- (void)taskDidFinishWithError:(id)arg1;
- (void)taskDidProgress:(float)arg1 userInfo:(id)arg2;

@end

