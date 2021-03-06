//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SIMToolkitUI/BSXPCCoding-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface STKSessionBehavior : NSObject <BSXPCCoding>
{
    double _timeout;
    BOOL _shouldSendResponseUponDisplay;
    BOOL _dismissesAfterUserEvent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL dismissesAfterUserEvent; // @synthesize dismissesAfterUserEvent=_dismissesAfterUserEvent;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL shouldSendResponseUponDisplay; // @synthesize shouldSendResponseUponDisplay=_shouldSendResponseUponDisplay;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;

@end

