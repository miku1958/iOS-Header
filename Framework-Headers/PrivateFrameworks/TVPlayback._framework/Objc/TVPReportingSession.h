//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RTCReporting;
@protocol TVPMediaItem;

@interface TVPReportingSession : NSObject
{
    NSObject<TVPMediaItem> *_mediaItem;
    RTCReporting *_reporter;
}

@property (strong, nonatomic) NSObject<TVPMediaItem> *mediaItem; // @synthesize mediaItem=_mediaItem;
@property (strong, nonatomic) RTCReporting *reporter; // @synthesize reporter=_reporter;

+ (void)initialize;
- (void).cxx_destruct;
- (void)_sendEvent:(id)arg1 withCategory:(unsigned short)arg2 type:(unsigned short)arg3 values:(id)arg4;
- (id)initWithMediaItem:(id)arg1;
- (void)reportDownloadFinishedWithResult:(long long)arg1 error:(id)arg2;

@end

