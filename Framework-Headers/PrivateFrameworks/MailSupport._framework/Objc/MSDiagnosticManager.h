//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AWDServerConnection;

@interface MSDiagnosticManager : NSObject
{
    AWDServerConnection *_awdServerConnection;
}

@property (readonly, nonatomic) AWDServerConnection *awdServerConnection; // @synthesize awdServerConnection=_awdServerConnection;

+ (id)log;
- (void).cxx_destruct;
- (id)init;
- (void)submitComposeAttachmentReport:(id)arg1;
- (void)submitFetchMetricsReport:(id)arg1;
- (void)submitMessageLoadingReport:(id)arg1;
- (void)submitSearchSessionWithSearchEngagement:(id)arg1 numberOfMessagesLeftToIndex:(unsigned long long)arg2 percentOfMessagesIndexed:(unsigned long long)arg3 emailProvider:(int)arg4;
- (void)submitWithIdentifier:(unsigned int)arg1 metricGenerator:(CDUnknownBlockType)arg2;

@end

