//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol SFCompanionAdvertiserDelegate;

@interface SFCompanionAdvertiser : NSObject
{
    BOOL _supportsStreams;
    id<SFCompanionAdvertiserDelegate> _delegate;
    NSString *_serviceType;
}

@property id<SFCompanionAdvertiserDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly) NSData *serviceEndpointData;
@property (readonly, copy) NSString *serviceType; // @synthesize serviceType=_serviceType;
@property BOOL supportsStreams; // @synthesize supportsStreams=_supportsStreams;

- (void)dealloc;
- (void)getContinuationStreamsWithEndpointData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)initWithServiceType:(id)arg1;
- (void)start;
- (void)stop;

@end

