//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol UISUserInterfaceStyleModeDelegate;

@interface UISUserInterfaceStyleMode : NSObject
{
    id<UISUserInterfaceStyleModeDelegate> _delegate;
    BOOL _observingDefaults;
}

@property (nonatomic) CDStruct_0973877e customSchedule;
@property (nonatomic) long long modeValue;
@property (nonatomic) CDStruct_912cb5d2 override;
@property (readonly, nonatomic) long long suggestedAutomaticModeValue;

- (void).cxx_destruct;
- (id)_commonAnalyticsEventDictionary;
- (void)_setOverride:(CDStruct_912cb5d2)arg1 force:(BOOL)arg2;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

