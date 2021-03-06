//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CARSessionStatus;
@protocol CPSessionConfigurationDelegate;

@interface CPSessionConfiguration : NSObject
{
    unsigned long long _limitedUserInterfaces;
    unsigned long long _contentStyle;
    id<CPSessionConfigurationDelegate> _delegate;
    CARSessionStatus *_currentStatus;
}

@property (nonatomic) unsigned long long contentStyle; // @synthesize contentStyle=_contentStyle;
@property (strong, nonatomic) CARSessionStatus *currentStatus; // @synthesize currentStatus=_currentStatus;
@property (weak, nonatomic) id<CPSessionConfigurationDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) unsigned long long limitedUserInterfaces; // @synthesize limitedUserInterfaces=_limitedUserInterfaces;

+ (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_limitedUIDidChange:(id)arg1;
- (void)_nightModeDidChange:(id)arg1;
- (void)_updateLimitedUIStatus;
- (void)_updateNightMode;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

