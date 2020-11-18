//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSUserDefaults;

@interface DCSettings : NSObject
{
    NSUserDefaults *_userDefaults;
}

@property (readonly, nonatomic) BOOL enableViewService;
@property (readonly, nonatomic) BOOL finishAfterFirstScan;
@property (strong) NSUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;

+ (id)sharedSettings;
- (void).cxx_destruct;
- (id)enableViewServiceBoxed;
- (id)finishAfterFirstScanBoxed;
- (id)init;
- (void)setEnableViewServiceBoxed:(id)arg1;
- (void)setFinishAfterFirstScanBoxed:(id)arg1;

@end

