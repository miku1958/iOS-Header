//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@class NSMutableDictionary;
@protocol _CDUserContext;

@interface REDuetContextStore : RESingleton
{
    id<_CDUserContext> _context;
    NSMutableDictionary *_registrations;
}

- (void).cxx_destruct;
- (id)_init;
- (id)isConnectedToAudioBluetoothDeviceQuery;
- (id)isConnectedToCarQuery;
- (void)registerForQuery:(id)arg1 updateBlock:(CDUnknownBlockType)arg2;
- (void)unregisterForQuery:(id)arg1;

@end
