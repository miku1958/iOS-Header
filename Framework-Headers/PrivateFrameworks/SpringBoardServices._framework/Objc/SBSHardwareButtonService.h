//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SpringBoardServices/SBSAbstractSystemService.h>

@class NSMutableArray;

@interface SBSHardwareButtonService : SBSAbstractSystemService
{
    NSMutableArray *_consumers;
    struct SBSHardwareButtonServiceButtonConfiguration _homeButtonConfiguration;
    struct SBSHardwareButtonServiceButtonConfiguration _lockButtonConfiguration;
}

@property (strong, nonatomic) NSMutableArray *consumers; // @synthesize consumers=_consumers;
@property (nonatomic) struct SBSHardwareButtonServiceButtonConfiguration homeButtonConfiguration; // @synthesize homeButtonConfiguration=_homeButtonConfiguration;
@property (nonatomic) struct SBSHardwareButtonServiceButtonConfiguration lockButtonConfiguration; // @synthesize lockButtonConfiguration=_lockButtonConfiguration;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_addEventConsumerInfo:(id)arg1;
- (void)_mainQueue_handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)_resetEventMaskForButtonKind:(long long)arg1;
- (void)_setApplicationClientEventMask:(unsigned long long)arg1 buttonKind:(long long)arg2 priority:(long long)arg3;
- (id)_viableConsumerForEvent:(long long)arg1 priority:(long long)arg2;
- (void)acquireHomeHardwareButtonHintSuppressionAssertionForReason:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)beginConsumingPressesForButtonKind:(long long)arg1 eventConsumer:(id)arg2 priority:(long long)arg3;
- (void)consumerInfoWillInvalidate:(id)arg1;
- (id)description;
- (void)fetchHapticTypeForButtonKind:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleButtonPressMessage:(long long)arg1 forButtonKind:(long long)arg2 priority:(long long)arg3;
- (void)setHapticType:(long long)arg1 forButtonKind:(long long)arg2;

@end

