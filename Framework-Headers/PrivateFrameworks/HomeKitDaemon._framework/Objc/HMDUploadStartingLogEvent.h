//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDLogEvent.h>

@class NSString;

@interface HMDUploadStartingLogEvent : HMDLogEvent
{
    NSString *_saveReason;
}

@property (readonly, nonatomic) NSString *saveReason; // @synthesize saveReason=_saveReason;

+ (id)uploadReason:(id)arg1;
+ (id)uuid;
- (void).cxx_destruct;
- (id)initUploadReason:(id)arg1;

@end
