//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TSUProgress;

__attribute__((visibility("hidden")))
@interface TSUProgressUserInfoObject : NSObject
{
    TSUProgress *_progress;
    id _progressObserver;
}

@property (weak, nonatomic) TSUProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) id progressObserver; // @synthesize progressObserver=_progressObserver;

- (void).cxx_destruct;

@end
