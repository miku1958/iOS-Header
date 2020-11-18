//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDAV/CoreDAVGetTask.h>

@class NSFileHandle;

@interface CoreDAVGetToFileTask : CoreDAVGetTask
{
    NSFileHandle *_destinationFile;
}

@property (strong, nonatomic) NSFileHandle *destinationFile; // @synthesize destinationFile=_destinationFile;

- (id)copyDefaultParserForContentType:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1 destinationFile:(id)arg2;
- (BOOL)shouldLogResponseBody;

@end

