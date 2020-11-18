//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLIntersiloService.h>

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@class NSString;

@interface CLNotifierServiceAdapter : CLIntersiloService <CLNotifierServiceProtocol>
{
    struct map<unsigned long, int, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, int>>> _clients;
    struct CLNotifierBase *_notifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) struct CLNotifierBase *notifier; // @synthesize notifier=_notifier;
@property (readonly) Class superclass;
@property (nonatomic) BOOL valid;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forget:(byref id)arg1;
- (id)init;
- (void)invalidate;
- (int)notifierClientNumForCoparty:(id)arg1;
- (void)register:(byref id)arg1 forNotification:(int)arg2 registrationInfo:(id)arg3;
- (void)setAdaptedNotifier:(struct CLNotifierBase *)arg1;
- (void)unregister:(byref id)arg1 forNotification:(int)arg2;

@end

