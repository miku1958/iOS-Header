//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/TSUURLWrapper-Protocol.h>

@class NSData, NSString, NSURL, TSUURLTrackerFilePresenter;

__attribute__((visibility("hidden")))
@interface TSUURLTracker : NSObject <TSUURLWrapper>
{
    TSUURLTrackerFilePresenter *_filePresenter;
}

@property (readonly) NSURL *URL;
@property (readonly) NSData *bookmarkData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URLAndReturnError:(id *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithBookmarkData:(id)arg1;
- (id)initWithBookmarkData:(id)arg1 delegate:(id)arg2;
- (id)initWithURL:(id)arg1;
- (id)initWithURL:(id)arg1 bookmarkData:(id)arg2 delegate:(id)arg3;
- (id)initWithURL:(id)arg1 delegate:(id)arg2;
- (void)pause;
- (void)resume;
- (void)stop;

@end

