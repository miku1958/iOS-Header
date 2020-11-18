//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSProgress, NSString;

@interface MCResourceProgressObserver : NSObject
{
    NSString *_name;
    NSProgress *_progress;
    CDUnknownBlockType _cancelHandler;
}

@property (copy, nonatomic) CDUnknownBlockType cancelHandler; // @synthesize cancelHandler=_cancelHandler;
@property (copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;

- (void)dealloc;
- (id)initWithName:(id)arg1 progress:(id)arg2 cancelHandler:(CDUnknownBlockType)arg3;
- (void)invalidate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

