//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudPhotoLibrary/CPLFeedbackMessage.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CPLResetFeedbackMessage : CPLFeedbackMessage
{
    NSString *_resetType;
    NSString *_reason;
    NSString *_uuid;
}

@property (readonly, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) NSString *resetType; // @synthesize resetType=_resetType;
@property (readonly, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (id)feedbackType;
- (void).cxx_destruct;
- (id)initWithResetType:(id)arg1 reason:(id)arg2 uuid:(id)arg3;
- (id)serverMessage;

@end

