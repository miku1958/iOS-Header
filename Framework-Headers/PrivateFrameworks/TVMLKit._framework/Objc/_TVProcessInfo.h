//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface _TVProcessInfo : NSObject
{
    BOOL _hasPrivateEntitlement;
    BOOL _hasiTunesAPIEntitlement;
    BOOL _hasiTunesStoreEntitlement;
    struct __SecTask *_currentTask;
}

@property (nonatomic) struct __SecTask *currentTask; // @synthesize currentTask=_currentTask;
@property (readonly, nonatomic) BOOL hasPrivateEntitlement; // @synthesize hasPrivateEntitlement=_hasPrivateEntitlement;
@property (readonly, nonatomic) BOOL hasiTunesAPIEntitlement; // @synthesize hasiTunesAPIEntitlement=_hasiTunesAPIEntitlement;
@property (readonly, nonatomic) BOOL hasiTunesStoreEntitlement; // @synthesize hasiTunesStoreEntitlement=_hasiTunesStoreEntitlement;

+ (id)currentProcessInfo;
- (BOOL)boolValueForEntitlement:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)valueForEntitlement:(id)arg1;
- (BOOL)valueForEntitlement:(id)arg1 containsObject:(id)arg2;

@end
