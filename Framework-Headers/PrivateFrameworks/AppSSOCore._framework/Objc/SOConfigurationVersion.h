//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SOConfigurationVersion : NSObject
{
    long long _mode;
    int _token;
    unsigned long long _version;
}

@property (readonly, nonatomic) long long version;

+ (void)reset;
- (void)_setStateAndNotify:(unsigned long long)arg1;
- (unsigned long long)_state;
- (long long)checkVersion;
- (void)dealloc;
- (void)increaseVersionWithMessage:(id)arg1;
- (id)initWithMode:(long long)arg1;
- (void)setAppSSOUnavailable;

@end
