//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/RESingleton.h>

@interface RERelevanceEngineDiagnosticRegistration : RESingleton
{
    BOOL _supportsRegistration;
}

- (void)_accessEngineDataForProcess:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)_allProcesses;
- (id)_defaultRegistrationDirectory;
- (id)_init;
- (id)_processesFileURL;
- (void)checkinEngine:(id)arg1;
- (void)enumerateAvailableEngines:(CDUnknownBlockType)arg1;

@end

