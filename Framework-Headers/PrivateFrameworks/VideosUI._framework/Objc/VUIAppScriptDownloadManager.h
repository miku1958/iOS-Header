//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSURL, NSURLSession, NSURLSessionDataTask;

@interface VUIAppScriptDownloadManager : NSObject
{
    NSURLSession *_session;
    NSMutableDictionary *_completionBlocksDict;
    NSURL *_currentURL;
    NSMutableDictionary *_appScriptDict;
    NSURLSessionDataTask *_task;
}

@property (strong, nonatomic) NSMutableDictionary *appScriptDict; // @synthesize appScriptDict=_appScriptDict;
@property (strong, nonatomic) NSURL *currentURL; // @synthesize currentURL=_currentURL;
@property (strong, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_init;
- (void)fetchAppJavascript:(id)arg1 cachePolicy:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

