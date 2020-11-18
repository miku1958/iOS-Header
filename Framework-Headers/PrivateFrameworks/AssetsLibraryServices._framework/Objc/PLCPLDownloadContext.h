//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface PLCPLDownloadContext : NSObject
{
    BOOL _completed;
    NSString *_taskIdentifier;
    NSString *_resourceTypeDescription;
    double _progress;
    NSError *_error;
    double _updateLastQueuedTime;
}

@property BOOL completed; // @synthesize completed=_completed;
@property (strong) NSError *error; // @synthesize error=_error;
@property double progress; // @synthesize progress=_progress;
@property (strong) NSString *resourceTypeDescription; // @synthesize resourceTypeDescription=_resourceTypeDescription;
@property (strong) NSString *taskIdentifier; // @synthesize taskIdentifier=_taskIdentifier;
@property double updateLastQueuedTime; // @synthesize updateLastQueuedTime=_updateLastQueuedTime;

- (void)dealloc;
- (id)description;
- (void)updateFromDownloadStatusUserInfo:(id)arg1;

@end

