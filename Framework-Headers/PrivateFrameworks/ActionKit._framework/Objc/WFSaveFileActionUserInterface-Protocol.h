//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ActionKit/WFRemoteUserInterface-Protocol.h>

@class NSArray, NSString;

@protocol WFSaveFileActionUserInterface <WFRemoteUserInterface>
- (void)cancel;
- (void)showWithServiceName:(NSString *)arg1 input:(NSArray *)arg2 managedLevel:(unsigned long long)arg3 options:(unsigned long long)arg4 completionHandler:(void (^)(NSArray *, WFContentAttributionSet *, NSError *))arg5;
@end
