//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SleepDaemon/BSDescriptionProviding-Protocol.h>
#import <SleepDaemon/HDSPIDSMessage-Protocol.h>

@class NSDate, NSString;

__attribute__((visibility("hidden")))
@interface HDSPEventRecordMessage : NSObject <BSDescriptionProviding, HDSPIDSMessage>
{
    double _timeout;
    NSDate *_date;
}

@property (readonly, nonatomic) NSDate *date; // @synthesize date=_date;
@property (readonly, nonatomic) NSString *dateDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDate:(id)arg1 timeout:(double)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

