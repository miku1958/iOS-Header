//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary;

@interface TVPPlaybackReportingEventCollection : NSObject
{
    BOOL _isDownloaded;
    BOOL _complete;
    BOOL _initialFPSRequestsComplete;
    long long _videoType;
    NSMutableArray *_eventArray;
    NSMutableDictionary *_openEvents;
}

@property (nonatomic) BOOL complete; // @synthesize complete=_complete;
@property (strong, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property (nonatomic) BOOL initialFPSRequestsComplete; // @synthesize initialFPSRequestsComplete=_initialFPSRequestsComplete;
@property (nonatomic) BOOL isDownloaded; // @synthesize isDownloaded=_isDownloaded;
@property (strong, nonatomic) NSMutableDictionary *openEvents; // @synthesize openEvents=_openEvents;
@property (readonly, nonatomic) NSDictionary *rtcReportingEventDict;
@property (nonatomic) long long videoType; // @synthesize videoType=_videoType;

+ (double)_totalTimeSpentDoingFPSFetchesFromEndEvents:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_addEventWithName:(id)arg1 type:(long long)arg2 identifier:(id)arg3 value:(id)arg4 timestamp:(id)arg5 forceAdd:(BOOL)arg6 isUIInteraction:(BOOL)arg7;
- (void)_closeOpenEvents;
- (void)_setError:(id)arg1 inEventDict:(id)arg2 errorCodeKey:(id)arg3 errorDomainKey:(id)arg4;
- (void)addEndEventWithName:(id)arg1;
- (void)addEndEventWithName:(id)arg1 identifier:(id)arg2;
- (void)addEndEventWithName:(id)arg1 identifier:(id)arg2 timestamp:(id)arg3;
- (void)addOrReplaceStartEventWithName:(id)arg1 date:(id)arg2;
- (void)addSingleShotEventWithName:(id)arg1 value:(id)arg2;
- (void)addStartEventWithName:(id)arg1;
- (void)addStartEventWithName:(id)arg1 identifier:(id)arg2;
- (void)addStartEventWithName:(id)arg1 isUIInteraction:(BOOL)arg2;
- (BOOL)containsEventWithName:(id)arg1;
- (id)init;

@end

