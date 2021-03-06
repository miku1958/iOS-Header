//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class TVPPlaybackReportingEventCollection;
@protocol TVPSecureKeyLoaderDelegate;

@interface TVPSecureKeyLoader : NSObject
{
    id<TVPSecureKeyLoaderDelegate> _delegate;
    TVPPlaybackReportingEventCollection *_eventCollection;
}

@property (weak, nonatomic) id<TVPSecureKeyLoaderDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) TVPPlaybackReportingEventCollection *eventCollection; // @synthesize eventCollection=_eventCollection;

- (void).cxx_destruct;
- (void)sendStopRequest;
- (void)startLoadingCertificateDataForRequest:(id)arg1;
- (void)startLoadingContentIdentifierDataForRequest:(id)arg1;
- (void)startLoadingKeyResponseDataForRequest:(id)arg1;

@end

