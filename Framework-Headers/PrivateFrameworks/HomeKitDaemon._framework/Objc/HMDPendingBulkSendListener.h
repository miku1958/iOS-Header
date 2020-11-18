//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol HMDDataStreamBulkSendListener;

@interface HMDPendingBulkSendListener : NSObject
{
    id<HMDDataStreamBulkSendListener> _listener;
    NSString *_fileType;
}

@property (strong, nonatomic) NSString *fileType; // @synthesize fileType=_fileType;
@property (weak, nonatomic) id<HMDDataStreamBulkSendListener> listener; // @synthesize listener=_listener;

- (void).cxx_destruct;
- (id)initWithListener:(id)arg1 fileType:(id)arg2;

@end
