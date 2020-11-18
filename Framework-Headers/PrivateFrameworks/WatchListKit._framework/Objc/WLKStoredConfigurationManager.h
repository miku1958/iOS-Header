//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class WLKStoredConfiguration;

@interface WLKStoredConfigurationManager : NSObject
{
    WLKStoredConfiguration *_storedConfiguration;
}

@property (strong, nonatomic) WLKStoredConfiguration *storedConfiguration; // @synthesize storedConfiguration=_storedConfiguration;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleAccountChange:(id)arg1;
- (void)_handleLibraryChange:(id)arg1;
- (void)_invalidateWithReason:(id)arg1;
- (void)_setStoredConfiguration:(id)arg1;
- (void)_updateConfiguration:(id)arg1;
- (void)dealloc;
- (id)init;

@end
