//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MISSING_TYPE, NSSet, NSString;

@interface _TtC8FMClient24VoiceAssistantSyncResult : NSObject
{
    MISSING_TYPE *devices;
    MISSING_TYPE *anchor;
}

@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSSet *devices;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevices:(id)arg1 anchor:(id)arg2;

@end

