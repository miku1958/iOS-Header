//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iAd/ADAdSheetConnectionDelegate-Protocol.h>
#import <iAd/ADAdSheetProxyDelegate-Protocol.h>

@class ADAdSheetConnection, NSString;

@interface ADOptInManager : NSObject <ADAdSheetConnectionDelegate, ADAdSheetProxyDelegate>
{
    ADAdSheetConnection *_connection;
}

@property (strong, nonatomic) ADAdSheetConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;
- (id)adSheetMachServiceName;
- (id)additionalAdSheetLaunchOptions;
- (void)configureConnection:(id)arg1;
- (void)getiAdIDsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)handleAccountChange;
- (id)init;
- (void)refreshOptInStatus;
- (void)refreshOptInStatusRefreshingWeakToken:(BOOL)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)setOptInStatus:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (BOOL)shouldLaunchAdSheet;

@end

