//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CKDPQLUpgradeInfo : NSObject
{
    BOOL _shouldVacuum;
    BOOL _shouldTruncateDatabase;
    unsigned long long _version;
    CDUnknownFunctionPointerType _upgradeFunction;
}

@property (nonatomic) BOOL shouldTruncateDatabase; // @synthesize shouldTruncateDatabase=_shouldTruncateDatabase;
@property (nonatomic) BOOL shouldVacuum; // @synthesize shouldVacuum=_shouldVacuum;
@property (nonatomic) CDUnknownFunctionPointerType upgradeFunction; // @synthesize upgradeFunction=_upgradeFunction;
@property (nonatomic) unsigned long long version; // @synthesize version=_version;

+ (id)upgradeInfoWithVersion:(unsigned long long)arg1 function:(CDUnknownFunctionPointerType)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4;
- (id)initWithVersion:(unsigned long long)arg1 function:(CDUnknownFunctionPointerType)arg2 shouldVacuum:(BOOL)arg3 shouldTruncate:(BOOL)arg4;

@end

