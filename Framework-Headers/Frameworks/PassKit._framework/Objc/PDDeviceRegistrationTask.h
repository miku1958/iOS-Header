//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSString;

@interface PDDeviceRegistrationTask : NSObject
{
    NSMutableArray *_completionHandlers;
    NSString *_reason;
}

@property (strong, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (copy, nonatomic) NSString *reason; // @synthesize reason=_reason;

- (void).cxx_destruct;
- (id)init;

@end

