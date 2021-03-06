//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSInvalidatable-Protocol.h>

@class NSString, SBSHardwareButtonService;
@protocol SBSHardwareButtonEventConsuming;

@interface _SBSHardwareButtonEventConsumerInfo : NSObject <BSInvalidatable>
{
    BOOL _valid;
    SBSHardwareButtonService *_service;
    id<SBSHardwareButtonEventConsuming> _consumer;
    long long _buttonKind;
    unsigned long long _eventMask;
    long long _eventPriority;
}

@property (nonatomic) long long buttonKind; // @synthesize buttonKind=_buttonKind;
@property (strong, nonatomic) id<SBSHardwareButtonEventConsuming> consumer; // @synthesize consumer=_consumer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned long long eventMask; // @synthesize eventMask=_eventMask;
@property (nonatomic) long long eventPriority; // @synthesize eventPriority=_eventPriority;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) SBSHardwareButtonService *service; // @synthesize service=_service;
@property (readonly) Class superclass;
@property (nonatomic, getter=isValid) BOOL valid; // @synthesize valid=_valid;

+ (id)infoWithConsumer:(id)arg1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)invalidate;

@end

