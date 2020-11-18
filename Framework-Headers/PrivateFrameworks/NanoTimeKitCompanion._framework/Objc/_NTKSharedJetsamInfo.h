//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSLock, NSMapTable;

@interface _NTKSharedJetsamInfo : NSObject
{
    NSMapTable *_fetchers;
    NSLock *_fetchersLock;
    int _pid;
}

+ (id)sharedJetsamInfo;
- (void).cxx_destruct;
- (BOOL)getInfoFor:(id)arg1 into:(struct jetsam_info *)arg2;
- (id)init;
- (BOOL)resetIntervalFor:(id)arg1;
- (void)unregister:(id)arg1;

@end

